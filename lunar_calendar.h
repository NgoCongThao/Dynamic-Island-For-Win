#pragma once
#include <string>
#include <cmath>

namespace LunarCalendar {

struct LunarDate {
    int day = 1;
    int month = 1;
    int year = 2026;
    bool isLeap = false;
    std::wstring canChiYear;
    std::wstring canChiDay;
    std::wstring formattedShort; // e.g. "28/9 ÂL"
    std::wstring formattedSpecial; // e.g. "Rằm", "Mùng 1", etc.
};

inline int JdnFromDate(int dd, int mm, int yy) {
    int a = (14 - mm) / 12;
    int y = yy + 4800 - a;
    int m = mm + 12 * a - 3;
    return dd + (153 * m + 2) / 5 + 365 * y + y / 4 - y / 100 + y / 400 - 32045;
}

inline double NewMoon(int k) {
    double T = k / 1236.85;
    double T2 = T * T;
    double T3 = T2 * T;
    constexpr double dr = 3.14159265358979323846 / 180.0;
    double Jd1 = 2415020.75933 + 29.53058868 * k + 0.0001178 * T2 - 0.000000155 * T3;
    Jd1 += 0.00033 * std::sin((166.56 + 132.87 * T - 0.009173 * T2) * dr);
    double M = 359.2242 + 29.10535608 * k - 0.0000333 * T2 - 0.00000347 * T3;
    double Mpr = 306.0253 + 385.81691806 * k + 0.0107306 * T2 + 0.00001236 * T3;
    double F = 21.2964 + 390.67050646 * k - 0.0016528 * T2 - 0.00000239 * T3;
    double C1 = (0.1734 - 0.000393 * T) * std::sin(M * dr) + 0.0021 * std::sin(2.0 * M * dr);
    C1 -= 0.4068 * std::sin(Mpr * dr) + 0.0161 * std::sin(2.0 * Mpr * dr);
    C1 -= 0.0004 * std::sin(3.0 * Mpr * dr);
    C1 += 0.0104 * std::sin(2.0 * F * dr) - 0.0051 * std::sin((M + Mpr) * dr);
    C1 -= 0.0074 * std::sin((M - Mpr) * dr) + 0.0004 * std::sin((2.0 * F + M) * dr);
    C1 -= 0.0004 * std::sin((2.0 * F - M) * dr) - 0.0006 * std::sin((2.0 * F + Mpr) * dr);
    C1 += 0.0010 * std::sin((2.0 * F - Mpr) * dr) + 0.0005 * std::sin((M + 2.0 * Mpr) * dr);
    double deltaT = (T < -11.0)
        ? (0.001 + 0.000839 * T + 0.0002261 * T2 - 0.00000845 * T3 - 0.00000061 * T * T3)
        : (-0.000078 + 0.000185 * T);
    return Jd1 + C1 - deltaT;
}

inline double SunLongitude(double jdn) {
    double T = (jdn - 2451545.0) / 36525.0;
    double T2 = T * T;
    constexpr double dr = 3.14159265358979323846 / 180.0;
    double L0 = 280.46645 + 36000.76983 * T + 0.0003032 * T2;
    double M = 357.52910 + 35999.05029 * T - 0.0001537 * T2;
    double C = (1.914600 - 0.004817 * T - 0.000014 * T2) * std::sin(M * dr);
    C += (0.019993 - 0.000101 * T) * std::sin(2.0 * M * dr) + 0.000290 * std::sin(3.0 * M * dr);
    double theta = L0 + C;
    theta -= 360.0 * std::floor(theta / 360.0);
    return theta * dr;
}

inline int GetSunMajorSolarTerm(double jdn, double timeZone = 7.0) {
    constexpr double pi = 3.14159265358979323846;
    return static_cast<int>(std::floor(SunLongitude(jdn - 0.5 + timeZone / 24.0) / (pi / 6.0)));
}

inline int GetNewMoonDay(int k, double timeZone = 7.0) {
    return static_cast<int>(std::floor(NewMoon(k) + 0.5 + timeZone / 24.0));
}

inline LunarDate SolarToLunar(int dd, int mm, int yy, double timeZone = 7.0) {
    int jd = JdnFromDate(dd, mm, yy);
    int k = static_cast<int>(std::floor((jd - 2415021.0769986) / 29.530588853));
    int nm = GetNewMoonDay(k, timeZone);
    if (nm > jd) {
        --k;
        nm = GetNewMoonDay(k, timeZone);
    }
    int day = jd - nm + 1;

    int p = k;
    while (GetSunMajorSolarTerm(GetNewMoonDay(p, timeZone), timeZone) != 8) {
        --p;
    }

    int a11 = p;
    p = a11 + 1;
    while (GetSunMajorSolarTerm(GetNewMoonDay(p, timeZone), timeZone) != 8) {
        ++p;
    }
    int b11 = p;

    int leapMonthDiff = b11 - a11;
    int leapMonth = 0;
    if (leapMonthDiff > 12) {
        int lastTerm = -1;
        for (int i = 1; i <= leapMonthDiff; ++i) {
            int curTerm = GetSunMajorSolarTerm(GetNewMoonDay(a11 + i, timeZone), timeZone);
            if (curTerm == lastTerm) {
                leapMonth = (i - 1);
                break;
            }
            lastTerm = curTerm;
        }
    }

    int monthIndex = k - a11;
    int month = (monthIndex + 10) % 12 + 1;
    bool isLeap = false;
    if (leapMonth > 0) {
        if (monthIndex == leapMonth) {
            isLeap = true;
            month = (monthIndex + 9) % 12 + 1;
        } else if (monthIndex > leapMonth) {
            month = (monthIndex + 9) % 12 + 1;
        }
    }

    int year = yy;
    if (month >= 11 && mm < 3) {
        year = yy - 1;
    } else if (month == 1 && mm >= 11) {
        year = yy + 1;
    }

    static const wchar_t* kCan[10] = {L"Giáp", L"Ất", L"Bính", L"Đinh", L"Mậu", L"Kỷ", L"Canh", L"Tân", L"Nhâm", L"Quý"};
    static const wchar_t* kChi[12] = {L"Tý", L"Sửu", L"Dần", L"Mão", L"Thìn", L"Tỵ", L"Ngọ", L"Mùi", L"Thân", L"Dậu", L"Tuất", L"Hợi"};

    std::wstring canChiYear = std::wstring(kCan[(year + 6) % 10]) + L" " + kChi[(year + 8) % 12];
    std::wstring canChiDay = std::wstring(kCan[(jd + 9) % 10]) + L" " + kChi[(jd + 1) % 12];

    std::wstring formattedShort = std::to_wstring(day) + L"/" + std::to_wstring(month) + (isLeap ? L"N" : L"") + L" ÂL";
    std::wstring formattedSpecial;
    if (day == 1) {
        formattedSpecial = L"Mùng 1 tháng " + std::to_wstring(month);
    } else if (day == 15) {
        formattedSpecial = L"Rằm tháng " + std::to_wstring(month);
    }

    return {day, month, year, isLeap, canChiYear, canChiDay, formattedShort, formattedSpecial};
}

} // namespace LunarCalendar

