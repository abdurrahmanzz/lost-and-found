# Pembagian Tugas Tim

## Urutan lintas anggota

Kerjakan fondasi dulu agar modul lain tidak perlu menebak fungsi yang belum ada:

1. **A:** `utils/string_utils.cpp`, lalu `utils/id_utils.cpp`, lalu `models/data.cpp`.
2. **D:** `ui/input_helpers.cpp` dapat dikerjakan paralel dengan langkah 1.
3. **C:** `utils/date_utils.cpp`, lalu `items/items.cpp`.
4. **B:** `auth/auth.cpp`, lalu `ui/auth_screen.cpp`.
5. **A:** `storage/storage.cpp` paling akhir karena bergantung pada seluruh format data.
6. **D:** `claims/claims.cpp`, lalu layar item/klaim dan pengecekan integrasi `main.cpp` bersama pemilik terkait.

Sebelum memulai, tarik perubahan terbaru dan baca TODO pada fungsi yang dikerjakan. Jangan mengubah kontrak fungsi tanpa memberi tahu semua pemilik modul.

## Anggota A

### File

- [ ] `src/utils/string_utils.cpp`
- [ ] `src/utils/id_utils.cpp`
- [ ] `src/models/data.cpp`
- [ ] `src/storage/storage.cpp` (opsional, terakhir)

### Urutan kerja

1. Isi `isAllDigits`, `trim`, `toLower`, `sanitizeField`.
2. Isi `containsIgnoreCase`, baru `splitLine`.
3. Isi `toDisplayNo` dan `toIndex`.
4. Isi dua pengguna dan dua barang contoh dalam `loadDemoData`.
5. Jika file storage dikerjakan, selesaikan `loadAll` dan `saveAll` satu format per kali.

### Definition of Done

- [ ] Tidak ada `cin`, `cout`, atau file di `models` dan `utils`.
- [ ] Tidak memakai fitur di luar materi.
- [ ] Build dari `src/main.cpp` lulus tanpa warning berarti.
- [ ] Skenario string/ID/storage yang terkait sudah dicentang di `tests/manual_tests.md`.

## Anggota B

### File

- [ ] `src/auth/auth.cpp`
- [ ] `src/ui/auth_screen.cpp`

### Urutan kerja

1. Isi `findUserByUsername`.
2. Isi `registerUser` dengan urutan validasi yang tertulis.
3. Isi `loginUser` dan cek akun terkunci.
4. Isi layar register, lalu layar login dan pemetaan kode ke pesan Indonesia.

### Definition of Done

- [ ] Modul auth tidak memakai `cin`, `cout`, atau file.
- [ ] UI memakai `readLine`, bukan `cin >>`.
- [ ] `saveAll()` hanya dipanggil layar setelah perubahan berhasil/percobaan login mengubah data.
- [ ] `M-AUTH-1` s.d. `M-AUTH-4` lulus.

## Anggota C

### File

- [ ] `src/utils/date_utils.cpp`
- [ ] `src/items/items.cpp`
- [ ] `src/ui/item_screen.cpp`

### Urutan kerja

1. Isi `isValidDate` dan `isFutureDate`; jangan ubah `getTodayDate`.
2. Isi `addFoundItem`, lalu `addLostReport`.
3. Isi `listItemsByReporter`, lalu `searchAvailableItems`.
4. Isi ketiga layar item dan pastikan detail rahasia tidak dicetak.

### Definition of Done

- [ ] Semua array pasangan terisi sebelum count dinaikkan.
- [ ] Pencarian hanya menampilkan status `Tersedia` dan tidak pernah menampilkan `foundSecret`.
- [ ] Layar menyimpan setelah sukses dan menerjemahkan kode dengan `if/else`.
- [ ] `M-ITEM-1` s.d. `M-ITEM-6` lulus.

## Anggota D

### File

- [ ] `src/ui/input_helpers.cpp`
- [ ] `src/claims/claims.cpp`
- [ ] `src/ui/claim_screen.cpp`
- [ ] `src/main.cpp`

### Urutan kerja

1. Pastikan `readLine`, `readInt`, header, dan pause bekerja.
2. Isi `getFailedClaimCount` dan `getFinderContact`.
3. Isi `submitClaim` sesuai urutan cek kontrak.
4. Isi alur layar klaim, lalu cek menu `main.cpp` bersama seluruh modul.

### Definition of Done

- [ ] `readInt` memakai `readLine`, `isAllDigits`, dan konversi digit manual.
- [ ] Tidak memakai `switch`, pointer, referensi, atau container.
- [ ] Detail rahasia tidak pernah tercetak.
- [ ] `M-CLAIM-1` s.d. `M-CLAIM-4` dan `M-UI-1` lulus.

## Checklist bersama sebelum PR

- [ ] Hanya `src/main.cpp` memuat library dan `using namespace std;`.
- [ ] Build: `g++ -std=c++11 -Wall -Wextra src/main.cpp -o lostfound`.
- [ ] Tidak ada warning baru yang berarti.
- [ ] Tidak ada file data pribadi di Git (`data/*.txt` diabaikan).
- [ ] Reviewer mencocokkan perubahan dengan TODO dan tes manual terkait.
