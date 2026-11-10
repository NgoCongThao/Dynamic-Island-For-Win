# Dynamic Island for Windows (Private Edition)

Phiên bản Dynamic Island dành riêng cho Windows được cá nhân hóa và tối ưu hóa toàn diện, mang lại giao diện viên thuốc sống động, thanh lịch với hiệu ứng chuyển động vật lý đàn hồi mượt mà (**Apple Fluid Springs**), khả năng tương tác trực tiếp trên từng tab mở rộng và tối ưu tiết kiệm tài nguyên hệ thống.

---

## 📸 Hình Ảnh Minh Họa

<p align="center">
  <img src="assets/media-collapsed.png" alt="Thanh viên thuốc thu nhỏ với sóng nhạc" width="460" />
  <br />
  <sub><i>Thanh thu nhỏ hiển thị ảnh bìa, tên bài tự cuộn marquee và sóng nhạc theo màu chủ đạo</i></sub>
</p>

| Trình phát Media Mở Rộng | Lời Bài Hát Karaoke Tức Thì |
| :---: | :---: |
| <img src="assets/media-expanded.png" alt="Tab Media mở rộng" width="420" /> | <img src="assets/media-lyrics-immersive.png" alt="Lời bài hát trên tab Media" width="420" /> |
| **Lịch Dương & Âm Lịch Việt Nam** | **Thời Tiết Trực Quan** |
| <img src="assets/tab-calendar.png" alt="Tab Lịch Âm Dương" width="420" /> | <img src="assets/tab-weather.png" alt="Tab Thời tiết" width="420" /> |
| **Giám Sát Phần Cứng** | **Khay Tệp & Bộ Nhớ Tạm** |
| <img src="assets/tab-hardware.png" alt="Tab Giám sát phần cứng" width="420" /> | <img src="assets/tab-filetray.png" alt="Tab Khay tệp" width="420" /> |

---

## 🚀 Các Tính Năng & Mô-đun Nổi Bật

### 🎵 Trình phát Media & Lời bài hát siêu mượt
- **Đồng bộ thời gian thực & Karaoke:** Hỗ trợ tốc độ phát linh hoạt (`x1.0`, `x1.25`, `x1.5`, `x2.0`,...), quét sáng từng từ kiểu Karaoke và tự động giữ trạng thái mở rộng khi chuyển bài.
- **Tìm kiếm lời đa nguồn thông minh:** Tự động ưu tiên tìm lời theo thứ tự **Zing MP3 → LRCLIB → NetEase**, tối ưu nhận diện và chấm điểm khớp cả với các phiên bản **Remix, Remake, Lofi, Cover**.
- **Hiển thị mượt mà không giật dòng:** Cache sẵn `IDWriteTextLayout` theo bài hát, sử dụng phóng/thu Direct2D quanh tâm dòng kết hợp chuyển động **Spring vật lý** và làm mờ mềm hai mép trên/dưới.
- **Tương tác trực tiếp trên Tab Lời bài hát:**
  - **Lăn con lăn chuột hoặc kéo thả dọc (2/3 bên trái)** trong vùng lời để xem trước/sau toàn bộ bài (hỗ trợ cả lời đồng bộ và lời tĩnh Plain lyrics); khóa giữ mở rộng suốt khi kéo để không bị đóng đảo khi kéo quá tay.
  - **1/3 bên phải chuyển tab trực quan:** Giữ trọn quyền cuộn chuyển tab ở **1/3 mép phải** của Tab Lời (kèm gợi ý `⇅ Tab` khi rê chuột tới), vùng Header, chấm phân trang hoặc giữ `Shift + Cuộn` / cuộn ngang.
  - **Click-to-Seek:** Hover sáng dòng + xem trước mốc `[mm:ss]`, bấm thẳng vào câu hát để tua nhạc tới đúng đoạn đó.
  - **Nút pill `Về đoạn đang hát`:** Tự xuất hiện khi cuộn xem tay để quay lại nhịp nhạc chỉ với một lần bấm.
  - **Chỉnh sync tức thì trên header:** Bấm `-` / `+` (±150ms) hoặc `↻` Resync ngay cạnh nhãn nguồn lời; cấu hình bù lệch tự tách riêng cho **Loa ngoài**, **Bluetooth** và **từng ứng dụng phát nhạc** (`Spotify`, `Chrome`, `Edge`...); hỗ trợ ưu tiên tải tệp **`.lrc` cục bộ** trong thư mục `Music`.

### 🧩 Hệ thống Tab Mở Rộng Tương Tác Toàn Diện
- **Thanh chấm phân trang (Pagination Dots):** Bấm trực tiếp vào bất kỳ chấm tròn nào ở mép Island để nhảy nhanh đến tab mong muốn, bên cạnh thao tác cuộn chuột và vuốt trượt vòng tròn vô tận theo cả 4 hướng.
- **📅 Lịch Dương & Âm lịch Việt Nam:**
  - Bấm vào bất kỳ ngày nào trên lưới lịch để xem nhanh **Dương lịch, Âm lịch, Can Chi & ngày đặc biệt (Mùng 1 / Rằm)** trên thẻ Hero.
  - Thêm nút `<` `>` chuyển tháng nhanh, bấm thẻ Hero để quay về **Hôm nay**, và chip **`⏱`** góc trên bên phải để mở/tạo **Focus Timer** từ ngay tab Lịch.
- **⏱️ Đồng hồ & Focus Timer:**
  - Bấm trực tiếp vào khối đồng hồ để bật/tắt nhanh **Hiển thị giây**, bấm vào **huy hiệu Micro** để **Tắt/Bật mic toàn cục** tức thì.
  - Dải nút khởi động nhanh **Focus Timer (`25p` / `Nghỉ 5p` / `15p`)**, lăn chuột trên thanh hẹn giờ để tăng/giảm **±5 phút**, chuông báo khi hết giờ, và bấm trực tiếp lên pill Timer để **Tạm dừng / Tiếp tục** hoặc **Dừng (`✕`)**.
- **🌤️ Thời tiết (Open-Meteo / wttr.in):**
  - Bấm vào nhiệt độ để đổi nhanh **`°C ↔ °F`**, bấm nút **`[⇄]`** cạnh tên thành phố để xoay vòng nhanh các thành phố đã cấu hình, hoặc bấm tên thành phố / icon để làm mới ngay.
  - Bấm cụm thẻ chỉ số bên phải để lật **3 trang** (`1/3 → 2/3 → 3/3`): **Gió / Cảm nhận / Ẩm** → **Áp suất / Độ mây / Giờ** → **Dự báo theo giờ `+2h / +4h / +6h` + `%` mưa**.
- **📊 Giám sát Phần cứng & Game Overlay:**
  - Hiển thị **CPU, RAM, GPU, Net Up, Net Down, Disk** (kèm chi tiết **Trống / Tổng GB**); bộ đếm nặng (GPU/Mạng) chỉ chạy khi đang mở tab Phần cứng.
  - Bấm từng thẻ `CPU` / `RAM` / `GPU` / `NET` để bật/tắt **biểu đồ Sparkline 30 mẫu**; bấm **`[Top]`** để xem **Top 4 tiến trình** ngốn CPU/RAM nhất; bấm **`DISK`** mở `This PC`, **`Overlay`** / **`Task Mgr`** trên header.

### ✨ Live Activities, Khay Tệp & Tối ưu Tài nguyên
- **Theo dõi tải xuống (Download Watcher):** Lắng nghe `Downloads` (~0% CPU lúc rảnh) phát hiện tệp `.crdownload` / `.part` / `.partial` / `.opdownload` đang tải kèm vòng xoay tiến trình & dung lượng MB, hiện toast **`Tải xong`** 2.5s và đẩy tự động vào **Khay tệp**.
- **Chuyển nhanh đầu ra âm thanh & Âm lượng ứng dụng:** Bấm biểu tượng loa trên hàng nút **Media Tab** hoặc **Chuột phải** (`Thiết bị âm thanh >` / `Âm lượng ứng dụng >`) để chuyển Loa/Tai nghe tức thì và chỉnh % / Tắt tiếng riêng cho app đang phát.
- **Tắt Mic 1 chạm trên Privacy Indicator:** Bấm trực tiếp chấm Mic trên thanh thu nhỏ (hoặc huy hiệu Mic trong tab Đồng hồ) để tắt/bật micro hệ thống kèm trạng thái đỏ gạch chéo rõ ràng.
- **Thông báo gộp chống spam & Actionable:** Gộp nhóm các thông báo dồn dập cùng ứng dụng trong 2.5s thành huy hiệu `(Nx)` không giật animation; bấm vào thông báo để bật thẳng cửa sổ app hoặc bấm `✕` mép phải để đóng.
- **Khay lưu tệp & Bộ nhớ tạm (File Tray):** Cuộn được danh sách nhiều tệp (thanh cuộn + chỉ số `1-3 / N`), nút **Copy 1 chạm** (`CF_HDROP` / Ảnh / Đường dẫn), `Shift + Click` để mở thư mục chứa tệp trong Explorer, kéo thả & ghim giữ lại.
- **Chế độ Viên thuốc lúc rảnh (Idle Pill Smart Mode) & Tối ưu 0% CPU:** Tùy chọn hiển thị **Tự động (Giờ & Thời tiết)**, **Chỉ đồng hồ**, **Đồng hồ & Pin**, hoặc **Đồng hồ & CPU/RAM**; tự động ngắt render về **0% CPU** khi Lock Screen / Fullscreen.

---

## ⚙️ Thao Tác Nhanh & Cử Chỉ

| Thao tác | Trên thanh thu nhỏ | Trong giao diện mở rộng |
| :--- | :--- | :--- |
| **Rê chuột / Nhấp chuột** | Mở rộng Dynamic Island; bấm **chấm Mic** mép phải để Tắt/Bật mic; bấm thông báo để mở app hoặc `✕` để đóng | Tương tác nút, thẻ, câu hát, ngày lịch, nút `[⇄]` / `[Top]` / Loa |
| **Nhấp đúp chuột trái** | Phát/Tạm dừng, Tắt tiếng hoặc Ghim mở rộng | — |
| **Nhấp chuột giữa (Con lăn)** | Tắt tiếng, Phát/Tạm dừng, Chụp màn hình hoặc Đóng pill | — |
| **Cuộn con lăn chuột** | Chỉnh nhanh Âm lượng hoặc Độ sáng *(tùy chọn)* | Cuộn lời (**2/3 trái** tab Lời), cuộn **Khay tệp** (**2/3 trái**), tăng/giảm **±5p Focus Timer**, hoặc **1/3 phải / Header / Shift+Cuộn** để đổi tab |
| **Kéo thả chuột** | Vuốt dọc chỉnh Âm lượng / Độ sáng | Kéo đọc **Lời bài hát**; kéo tệp từ **Khay tệp** sang app khác (`Shift+Click` mở Explorer) |
| **Chuột phải** | Mở menu tùy chỉnh Chủ đề, Độ trong suốt, **Viên thuốc lúc rảnh**, **Thiết bị âm thanh**, **Âm lượng app**, Nguồn Media, Focus Timer, Bù lệch Lời | Mở menu tùy chỉnh nhanh |
| **Phím tắt ẩn/hiện** | Mặc định `Ctrl + Alt + D` *(tùy biến trong Settings)* | Mặc định `Ctrl + Alt + D` |

---

## 🛠️ Cấu Trúc Tệp & Biên Dịch Kiểm Tra

- `di.cpp` — Mã nguồn chính của Windhawk mod (`@id new-mod-2`).
- `lunar_calendar.h` — Tính toán chuyển đổi Âm/Dương lịch và Can Chi Việt Nam.
- `lyrics_providers.h` — Hằng số hỗ trợ truy vấn đa nguồn lời bài hát.
- `system_monitor.h` — Thu thập thông số hiệu năng CPU, RAM, GPU, mạng, ổ đĩa.

### Cách sử dụng trên Windhawk
1. Mở **Windhawk** → **Explore / Create a new mod**.
2. Dán toàn bộ nội dung [`di.cpp`](di.cpp) vào trình soạn thảo mod *(tệp đơn khối đã gộp sẵn các module hỗ trợ bên trong)* và nhấn **Compile mod**.
3. Để kiểm tra biên dịch tĩnh cục bộ qua trình biên dịch đi kèm Windhawk:
   ```powershell
   & "C:\Program Files\Windhawk\Compiler\bin\clang++.exe" -std=c++20 -O2 -Wall -Wno-unused-function -DWH_MOD -DUNICODE -D_UNICODE '-DWH_MOD_ID=L"new-mod-2"' '-DWH_MOD_VERSION=L"1.7.0"' -include "C:\Program Files\Windhawk\Compiler\include\windhawk_api.h" -c "di.cpp" -o "di.o"
   ```

---

## 📝 Nhật Ký Thay Đổi (Changelog)

### v1.7.0 — Live Activities & Smart Interactions (Gói 3)
- **Download Watcher (Theo dõi thư mục Tải xuống):** Sử dụng `ReadDirectoryChangesW` I/O bất đồng bộ (`OVERLAPPED` + `g_stopEvent`, ~0% CPU khi rảnh) nhận diện tệp `.crdownload` / `.part` / `.partial` / `.opdownload` / `.tmp`, vẽ vòng xoay tiến trình & dung lượng MB trực tiếp trên pill, hiện toast **`Đã tải xong`** 2.5s và tự động đẩy tệp hoàn tất vào **Khay tệp (File Tray)**.
- **Chuyển nhanh thiết bị phát âm thanh & Âm lượng app đang phát:** Tích hợp COM `IPolicyConfig` + `IMMDeviceEnumerator` và `IAudioSessionManager2` (`ISimpleAudioVolume`) để đổi Loa / Tai nghe mặc định và chỉnh % / Tắt tiếng app phát nhạc từ nút loa mini ngay trên **Media Tab** hoặc **Menu chuột phải**.
- **Tắt Mic toàn cục 1 chạm trên Privacy Indicator:** Bấm trực tiếp vào chấm Mic trên thanh thu nhỏ hoặc huy hiệu Mic trong tab Đồng hồ để tắt/bật micro mặc định kèm chỉ báo đỏ gạch chéo.
- **Thông báo gộp chống spam & Actionable:** Gộp nhóm thông báo cùng ứng dụng trong vòng 2.5s thành huy hiệu `(Nx)` không giật spring; bấm vào nội dung thông báo để nhảy tới cửa sổ app (`FocusNotificationApp`) hoặc bấm nút `✕` mép phải để đóng nhanh.
- **Chế độ Viên thuốc lúc rảnh (Idle Pill Smart Mode):** Bổ sung lựa chọn **Tự động (Giờ & Thời tiết)**, **Chỉ đồng hồ**, **Đồng hồ & Pin**, hoặc **Đồng hồ & CPU/RAM** trong menu chuột phải, tự động co giãn chiều rộng pill khớp khít nội dung.

### v1.6.5 — Nâng cấp toàn diện Tab Mở Rộng (Gói 2)
- **Khay tệp (File Tray) chuyên sâu:** Hỗ trợ cuộn danh sách khi có nhiều hơn 3 tệp (kèm scrollbar thumb & chỉ số `1-3 / N`), nút **Copy 1 chạm** (`CF_HDROP` / `CF_BITMAP` / Text) và `Shift + Click` để mở thư mục chứa tệp trong Explorer (`RevealPathInExplorer`).
- **Thời tiết 3 trang & Đổi nhanh thành phố:** Mở rộng Open-Meteo với dự báo theo giờ `+2h / +4h / +6h` (icon + nhiệt độ + xác suất mưa `%`) và nút `[⇄]` xoay vòng nhanh danh sách thành phố.
- **Phần cứng Top 4 tiến trình & Chi tiết Disk:** Hiển thị dung lượng ổ đĩa (`Trống / Tổng GB`) và chế độ **`[Top]`** lấy mẫu `GetProcessTimes` + `K32GetProcessMemoryInfo` cho 4 tiến trình tiêu thụ CPU/RAM cao nhất.
- **Focus Timer truy cập tức thì:** Thêm chip **`⏱`** ở góc trên tab Lịch, cuộn chuột +/-5 phút trên thanh Focus Timer và phát âm báo `MessageBeep` khi hết giờ.
- **Lời `.lrc` cục bộ & Offset theo app:** Tự động ưu tiên tải tệp `.lrc` trong `Music` và lưu độ lệch đồng bộ lời riêng biệt theo từng app phát nhạc (`LyricsSourceValueKey`).

### v1.6.0 — Performance Boost (Zero-Alloc D2D & Smart Audio Sleep)
- **Triệt tiêu cấp phát GPU/Direct2D theo khung hình:** Bộ nhớ đệm `ID2D1PathGeometry` cho đồ thị Sparkline của Hardware Monitor (`HwSparkSlot` theo chuỗi cập nhật), tái sử dụng pool `AcquireBrush` / `AcquireLayer` / `GetShapeGeometry` / `UseLinearGradient` / `UseRadialGradient` / `StrokeStyle` trên toàn bộ bảng mở rộng (Media, Game Overlay, Calendar, Weather, Time, File Tray) và banner thông báo; thêm cache `IDWriteTextLayout` cho Privacy Badge.
- **Karaoke Multi-Line LRU Cache (`4` khe):** Giảm dựng lại DirectWrite `TextLayout` và cụm ký tự (`HitTestTextRange`) khi chuyển câu hát hoặc tua qua lại.
- **Audio Event-Driven & Silent Throttle:** Bổ sung `g_audioWakeEvent` giúp `AudioThreadProc` ngủ sâu (`0` wakeup/s) khi không có nhạc, đồng thời hạ nhịp poll từ `16ms` xuống `48ms` khi phát hiện im lặng kéo dài nhưng vẫn giữ nguyên Stall Watchdog.
- **Sửa lỗi Privacy Dots giữ vòng lặp 60+ FPS:** Chỉ vẽ lại khi trạng thái Mic/Camera hoặc ứng dụng sử dụng thực sự thay đổi thay vì ép repaint liên tục khi chấm tĩnh đang hiển thị.

### v1.5.6 — Chia vùng cuộn 2/3–1/3 Tab Lời & Sửa căn giữa lời ở đảo thu nhỏ
- **Phân vùng cuộn trực quan trên Tab Lời bài hát:** Giới hạn vùng lăn/kéo cuộn lời trong **2/3 phần bên trái**; **1/3 phần bên phải** (kèm gợi ý `⇅ Tab` khi rê chuột tới), vùng Header, chấm phân trang và `Shift + Cuộn` luôn dành cho chuyển tab nhanh không xung đột.
- **Sửa lỗi lời bài hát lệch lên trên ở đảo thu nhỏ:** Loại bỏ ký tự `\r` / xuống dòng thừa ở cuối câu trong các bộ phân tích lời (`ParseSyncedLyrics`, `ParsePlainLyrics`, `ParseZingSentences`, disk cache) và ép `NO_WRAP` + căn giữa theo `tm.top + tm.height * 0.5f` trong `BuildCollapsedLyricLine` / `DrawCollapsedLyrics`.

### v1.5.5 — Cuộn Lời Hybrid (Lăn chuột thông minh + Khóa đóng đảo khi kéo thả)
- **Lăn chuột thông minh trên Tab Lời bài hát (`WM_MOUSEWHEEL`):** Trỏ vào vùng nội dung lời (`g_lyricsBodyHitRect`) để **lăn con lăn cuộn lời** (tự chặn nhảy tab nhầm khi chạm đỉnh/đáy); đưa trỏ lên vùng Header, chấm phân trang hoặc giữ **`Shift + Cuộn`** / **cuộn ngang** để chuyển tab mượt mà.
- **Khắc phục đóng đảo khi kéo lố ra ngoài:** Giữ trạng thái mở rộng trong `RenderThreadProc` suốt lúc đang kéo lời (`g_lyricsDragging`) hoặc kéo thanh tua nhạc (`g_scrubbing`), bổ sung 1.8 giây ân hạn sau khi nhả chuột, tăng hệ số kéo `1.6x` và kẹp chặt giới hạn dòng.
- **Nhận diện chính xác trạng thái mở rộng khi dùng `ExpandOnHover`:** Kiểm tra thêm chiều cao hiển thị thực tế của đảo khi cuộn chuột để không bị nhầm với vuốt thu nhỏ.

### v1.5.4 — Tối ưu & Đồng bộ giao diện Menu Chuột Phải
- **Giao diện Dark/Light đồng bộ bảng màu Island (`ScopedStyledMenu`):** Loại bỏ hoàn toàn hộp thoại trắng Win32 mặc định bằng owner-drawn menu (`MFT_OWNERDRAW`) kết hợp kích hoạt Dark/Light mode hệ thống (`uxtheme` & `SetMenuInfo`) tiệp với theme đang dùng (*Obsidian, Nord, Porcelain...*) và ánh sáng hover pill bo tròn khử răng cưa theo màu accent hiện tại.
- **Tái cấu trúc gọn gàng 4 nhóm (18 dòng → 13 dòng):**
  - **Nhóm Điều khiển nhanh:** `Ghim mở rộng`, `Mở rộng khi rê chuột`, `Bảng Game (Overlay)` với dấu `✓` rõ trạng thái (thay cho nhãn đảo ngược khó hiểu trước đây).
  - **Nhóm Tiện ích & Mô-đun:** Gom toàn bộ 5 mục Lời bài hát vào 1 submenu **`Lời bài hát >`** (kèm độ lệch sync, `Đồng bộ lại hệ thống`, và badge dung lượng cache); bổ sung badge trạng thái cạnh **`Nguồn phát nhạc >`**, **`Hẹn giờ tập trung >`**, **`Khay tệp >`**.
  - **Nhóm Giao diện:** `Kiểu dáng Island >`, `Độ trong suốt >`, và `Chủ đề giao diện >` có **chấm swatch màu thật** cho từng bảng màu kèm nhãn đang chọn.
  - **Nhóm Hệ thống:** Làm rõ nghĩa nút **`Thu gọn & Đóng thẻ`**, thêm badge phím tắt bên cạnh **`Ẩn Island`** (`Ctrl+Alt+D`) và **`Mở cài đặt Windhawk`**.
- **Áp dụng đồng bộ cho popup `+N` nguồn nhạc** trên Source Dock của tab Media.

### v1.5.3 — Tương tác Tab Thời tiết & Giám sát Phần cứng
- **Tab Thời tiết tương tác:**
  - Bấm trực tiếp nhiệt độ để đổi nhanh **`°C ↔ °F`** (quy đổi tức thì trên giao diện và lưu đồng bộ vào thiết lập).
  - Bấm tên thành phố hoặc icon thời tiết để kích hoạt làm mới dữ liệu ngay qua sự kiện riêng (`g_weatherRefreshEvent`).
  - Bấm cụm thẻ chỉ số bên phải để lật trang `1/2 ↔ 2/2` xem **Áp suất (`pressure_msl`)**, **Độ mây (`cloud_cover`)** và **giờ cập nhật**.
- **Tab Giám sát Phần cứng tương tác:**
  - Thêm bộ đệm vòng **30 mẫu (`HwHistoryRing`)** cho `CPU`, `RAM`, `GPU`, `Net Up`, `Net Down`.
  - Bấm vào từng thẻ `CPU` / `RAM` / `GPU` / `NET UP` / `NET DOWN` để bật/tắt **biểu đồ Sparkline nội tuyến** kèm giá trị trực tiếp; bấm thẻ **`DISK`** để mở `This PC`.
  - Bổ sung hai nút nhanh trên header: **`Overlay`** (ghim/bỏ ghim Game Overlay) và **`Task Mgr`** (mở `taskmgr.exe`).

### v1.5.2 — Tương tác Tab Lịch & Tab Đồng hồ (Focus Timer)
- **Tab Lịch tương tác:**
  - Bấm vào ngày bất kỳ trên lưới để chọn và xem **Dương lịch, Âm lịch, ngày Mùng 1 / Rằm & Can Chi** trên cột Hero bên trái.
  - Thêm nút `<` `>` chuyển đổi qua lại giữa các tháng; bấm vào thân thẻ Hero khi đang xem ngày/tháng khác để quay ngay về **Hôm nay**.
- **Tab Đồng hồ & Focus Timer:**
  - Bấm vào khối đồng hồ để bật/tắt nhanh **Hiển thị giây** (lưu bền vững qua restarts).
  - Bổ sung dải nút **Focus Timer (`25p` / `Nghỉ 5p` / `15p`)** ở mép dưới khi không có cảnh báo Mic/Camera, hỗ trợ bấm trực tiếp pill Timer để **Tạm dừng / Tiếp tục** hoặc **Dừng (`✕`)**.

### v1.5.1 — Mượt hóa & Tương tác Tab Lời bài hát + Thanh chấm phân trang
- **Khắc phục triệt để giật/khựng chữ trên Tab Lời bài hát:**
  - Cache `IDWriteTextLayout` và `DWRITE_LINE_METRICS` theo bài hát trên cùng độ rộng wrap cố định, dùng `Matrix3x2F::Scale` quanh tâm dòng kết hợp **Spring scroll** vật lý và làm mờ mềm hai mép trên/dưới.
  - Hỗ trợ hiển thị và cuộn cho cả lời không đồng bộ (**Plain lyrics**).
- **Tương tác Tab Lời bài hát & Chấm phân trang:**
  - Giữ **cuộn chuột luôn đổi tab**, đồng thời hỗ trợ **kéo thả chuột dọc** bên trong vùng lời để xem trước/sau câu hát.
  - **Click-to-Seek:** Hover làm nổi bật câu hát kèm mốc `[mm:ss]`, bấm để tua nhạc thẳng đến câu đó; thêm nút **`Về đoạn đang hát`** và bộ nút chỉnh sync nhanh (`-` / `+` / `↻`) trên header.
  - Cho phép bấm trực tiếp từng chấm trên **thanh phân trang** để nhảy tab và chặn click xuyên gây mở nhầm ứng dụng Media ở các tab khác.
- **Tối ưu tìm kiếm & đồng bộ Media:**
  - Nâng cấp bộ tìm kiếm lời trên **Zing MP3** (fallback `/api/v2/search`, nhận diện biến thể Remix/Lofi/Cover), tinh chỉnh grace period 150ms khi click-to-expand để tránh giật khi nhấp đúp, và khắc phục lỗi kẹt mốc `0:00` khi đổi ứng dụng phát nhạc.

### v1.5.0 — Nền tảng Private Edition
- Giao diện viên thuốc sử dụng **Apple Fluid Springs**, bảng màu tùy biến kèm Blur/Acrylic, đa nguồn lời bài hát (Zing MP3 / LRCLIB / NetEase), Khay tệp kéo thả & tự động bắt Clipboard, Lịch âm dương, Thời tiết, Giám sát phần cứng theo nhu cầu và tối ưu 0% CPU khi màn hình khóa / toàn màn hình.

