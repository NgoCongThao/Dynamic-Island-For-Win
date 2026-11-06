#pragma once

#include <windows.h>
#include <pdh.h>
#include <pdhmsg.h>
#include <vector>
#include <atomic>
#include <string>
#include <algorithm>

// Forward declarations
struct SystemSnapshot;

namespace SystemMonitor {

// Biến điều khiển hoạt động của luồng giám sát phần cứng
extern std::atomic<bool> g_systemMonitorNeeded;
extern HANDLE g_systemMonitorWakeEvent;
extern HANDLE g_systemMonitorThread;

// Bộ đếm PDH
static PDH_HQUERY g_gpuQuery = NULL;
static PDH_HCOUNTER g_gpuCounter = NULL;

static PDH_HQUERY g_netQuery = NULL;
static PDH_HCOUNTER g_netUpCounter = NULL;
static PDH_HCOUNTER g_netDownCounter = NULL;

inline void InitGpuQuery() {
    if (g_gpuQuery == NULL) {
        if (PdhOpenQueryW(NULL, 0, &g_gpuQuery) == ERROR_SUCCESS) {
            PdhAddEnglishCounterW(g_gpuQuery, L"\\GPU Engine(*)\\Utilization Percentage", 0, &g_gpuCounter);
            PdhCollectQueryData(g_gpuQuery);
        }
    }
}

// Lấy % GPU sử dụng bộ đệm tái sử dụng (Zero-heap churn)
inline int GetGpuUsage() {
    InitGpuQuery();
    if (!g_gpuQuery || !g_gpuCounter) return 0;

    PdhCollectQueryData(g_gpuQuery);

    DWORD bufferSize = 0;
    DWORD itemCount = 0;
    PdhGetFormattedCounterArrayW(g_gpuCounter, PDH_FMT_DOUBLE, &bufferSize, &itemCount, NULL);

    if (bufferSize > 0) {
        // Tái sử dụng vùng đệm tĩnh, không cấp phát heap mới mỗi giây
        static std::vector<BYTE> s_gpuBuffer;
        if (s_gpuBuffer.size() < bufferSize) {
            s_gpuBuffer.resize(bufferSize);
        }
        PDH_FMT_COUNTERVALUE_ITEM_W* items = reinterpret_cast<PDH_FMT_COUNTERVALUE_ITEM_W*>(s_gpuBuffer.data());

        if (PdhGetFormattedCounterArrayW(g_gpuCounter, PDH_FMT_DOUBLE, &bufferSize, &itemCount, items) == ERROR_SUCCESS) {
            double total = 0;
            for (DWORD i = 0; i < itemCount; i++) {
                if (items[i].szName && wcsstr(items[i].szName, L"engtype_3D")) {
                    total += items[i].FmtValue.doubleValue;
                }
            }
            return (std::max)(0, (std::min)(100, static_cast<int>(total)));
        }
    }
    return 0;
}

inline void InitNetQuery() {
    if (g_netQuery == NULL) {
        if (PdhOpenQueryW(NULL, 0, &g_netQuery) == ERROR_SUCCESS) {
            PdhAddEnglishCounterW(g_netQuery, L"\\Network Interface(*)\\Bytes Sent/sec", 0, &g_netUpCounter);
            PdhAddEnglishCounterW(g_netQuery, L"\\Network Interface(*)\\Bytes Received/sec", 0, &g_netDownCounter);
            PdhCollectQueryData(g_netQuery);
        }
    }
}

// Lấy tốc độ mạng Mbps sử dụng bộ đệm tái sử dụng (Zero-heap churn)
inline void GetNetworkUsage(float& outUpMbps, float& outDownMbps) {
    outUpMbps = 0.0f;
    outDownMbps = 0.0f;
    InitNetQuery();
    if (!g_netQuery || !g_netUpCounter || !g_netDownCounter) return;

    PdhCollectQueryData(g_netQuery);

    auto getSum = [](PDH_HCOUNTER counter) -> double {
        DWORD bufferSize = 0;
        DWORD itemCount = 0;
        PdhGetFormattedCounterArrayW(counter, PDH_FMT_DOUBLE, &bufferSize, &itemCount, NULL);
        if (bufferSize > 0) {
            // Tái sử dụng vùng đệm tĩnh
            static std::vector<BYTE> s_netBuffer;
            if (s_netBuffer.size() < bufferSize) {
                s_netBuffer.resize(bufferSize);
            }
            PDH_FMT_COUNTERVALUE_ITEM_W* items = reinterpret_cast<PDH_FMT_COUNTERVALUE_ITEM_W*>(s_netBuffer.data());
            if (PdhGetFormattedCounterArrayW(counter, PDH_FMT_DOUBLE, &bufferSize, &itemCount, items) == ERROR_SUCCESS) {
                double total = 0;
                for (DWORD i = 0; i < itemCount; i++) {
                    if (items[i].szName) {
                        if (wcsstr(items[i].szName, L"Loopback") == nullptr) {
                            total += items[i].FmtValue.doubleValue;
                        }
                    }
                }
                return total;
            }
        }
        return 0.0;
    };

    outUpMbps = static_cast<float>(getSum(g_netUpCounter) * 8.0 / 1000000.0);
    outDownMbps = static_cast<float>(getSum(g_netDownCounter) * 8.0 / 1000000.0);
}

} // namespace SystemMonitor
