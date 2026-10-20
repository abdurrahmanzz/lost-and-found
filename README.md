# Lost and Found Management System

Kerangka proyek C++ terminal untuk tim mahasiswa semester 1. Program akan mencatat barang temuan, laporan kehilangan, dan klaim barang. Kerangka ini sengaja berisi deklarasi data, kontrak fungsi, stub aman, dan TODO kecil agar setiap anggota dapat mengisi logika bisnis secara bertahap.

## Build dan jalankan

**Patokan utama:** hanya kompilasi `src/main.cpp`. File modul lain dimasukkan oleh `main.cpp`, sehingga garis merah editor pada modul `.cpp` dapat diabaikan selama perintah berikut berhasil.

```bash
g++ -std=c++11 -Wall -Wextra src/main.cpp -o lostfound
./lostfound
```

Dengan CMake:

```bash
cmake -S . -B build
cmake --build build
./build/lostfound
```

Pilih `3` pada menu tamu untuk keluar. Setelah TODO diisi, jalankan ulang skenario di `tests/manual_tests.md`.

## Susunan proyek

`src/main.cpp` adalah satu-satunya file yang memuat library dan `using namespace std;`. Ia memasukkan modul dalam urutan ini:

1. `models/data.cpp`
2. `utils/string_utils.cpp`
3. `utils/date_utils.cpp`
4. `utils/id_utils.cpp`
5. `ui/input_helpers.cpp`
6. `storage/storage.cpp`
7. `auth/auth.cpp`
8. `items/items.cpp`
9. `claims/claims.cpp`
10. `ui/auth_screen.cpp`
11. `ui/item_screen.cpp`
12. `ui/claim_screen.cpp`

Jangan mengompilasi file modul sendiri dan jangan menambahkan modul itu ke `add_executable` CMake.

## Pemilik file

| Anggota | File |
| --- | --- |
| A | `src/models/data.cpp`, `src/utils/string_utils.cpp`, `src/utils/id_utils.cpp`, `src/storage/storage.cpp` |
| B | `src/auth/auth.cpp`, `src/ui/auth_screen.cpp` |
| C | `src/items/items.cpp`, `src/ui/item_screen.cpp`, `src/utils/date_utils.cpp` |
| D | `src/claims/claims.cpp`, `src/ui/claim_screen.cpp`, `src/ui/input_helpers.cpp`, `src/main.cpp` |

## Aturan Git

1. Buat satu branch per fitur, misalnya `feature/auth-register`.
2. Ubah file pemilik sendiri; jika harus mengubah file anggota lain, beri tahu pemiliknya lebih dahulu.
3. Buka Pull Request (PR) untuk pekerjaan yang siap diuji.
4. Review silang berputar: **A → B → C → D → A**.
5. Jangan merge langsung ke branch utama tanpa review.

## Disederhanakan dengan sengaja

- Fase 1 **tidak memakai** `.h`, `struct`, `vector`, class, pointer, referensi, atau template. Semua data ada pada array paralel global.
- `main.cpp` memasukkan file `.cpp`; ini penyederhanaan sementara. Pada fase 2 proyek akan dirapikan memakai `.h`, `struct`, dan `vector`.
- Password disimpan polos (apa adanya). Ini tidak aman untuk aplikasi nyata dan hanya boleh untuk latihan.
- Akun yang terkunci tidak memiliki jalur buka dari menu; satu-satunya cara saat ini adalah mengedit data.
- Penyimpanan file `data/*.txt` bersifat opsional. Stub `loadAll`/`saveAll` aman bila belum diisi.
- Tidak ada admin dan tidak ada penghapusan data pada MVP; indeks array tidak bergeser.

Baca `docs/data-model.md` sebelum mengubah array dan `docs/TASKS.md` sebelum mulai mengisi TODO.
