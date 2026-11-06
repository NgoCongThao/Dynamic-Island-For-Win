#pragma once
#include <string>
#include <vector>
#include <cmath>

// Forward declarations from di.cpp
struct LyricsLine;
struct LyricsPick;
struct HttpResult;

namespace LyricsProviders {

// Tiền xử lý truy vấn tìm kiếm cho Zing MP3 / NhacCuaTui
inline std::wstring BuildSearchQuery(const std::wstring& title, const std::wstring& artist) {
    if (artist.empty()) return title;
    return title + L" " + artist;
}

// ── 1. Zing MP3 Provider ────────────────────────────────────────────────────
// Tìm kiếm bài hát qua autocomplete API của Zing MP3
inline bool FetchLyricsFromZingMp3(const std::wstring& title, const std::wstring& artist,
                                   int wantDurationSec, LyricsPick* pick);

// ── 2. NhacCuaTui (NCT) Provider ───────────────────────────────────────────
inline bool FetchLyricsFromNhacCuaTui(const std::wstring& title, const std::wstring& artist,
                                     int wantDurationSec, LyricsPick* pick);

} // namespace LyricsProviders

