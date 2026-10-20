# Model Data: Array Paralel

Semua data dideklarasikan **sekali** di `src/models/data.cpp`. Satu record adalah satu indeks yang sama di semua array dalam kelompoknya. Contoh: data barang temuan indeks `5` memakai `foundReporter[5]`, `foundName[5]`, `foundDate[5]`, sampai `foundStatus[5]`.

## Aturan emas

1. Jangan pernah mengubah satu array pasangan tanpa mengubah pasangan lain pada indeks yang sama.
2. Naikkan `userCount`, `foundCount`, `lostCount`, atau `claimCount` hanya setelah seluruh record selesai diisi.
3. MVP tidak menghapus data, jadi indeks tidak pernah bergeser.
4. Nomor yang dilihat pengguna adalah `indeks + 1`; gunakan `toDisplayNo` dan `toIndex`.
5. `searchResult` hanya tempat sementara berisi **indeks barang temuan**, bukan data barang baru.
6. `foundSecret` tidak boleh tampil di layar atau hasil pencarian.

## Pengguna

| Array | Isi pada indeks `i` |
| --- | --- |
| `userName[i]` | username |
| `userPassword[i]` | password polos (latihan saja) |
| `userPhone[i]` | nomor telepon |
| `userFailed[i]` | jumlah login salah berturut-turut |
| `userLocked[i]` | status terkunci |

Record pengguna valid berada pada indeks `0` sampai `userCount - 1`.

## Barang temuan

| Array | Isi pada indeks `i` |
| --- | --- |
| `foundReporter[i]` | indeks pengguna pelapor/penemu |
| `foundName[i]` | nama barang |
| `foundCategory[i]` | kategori |
| `foundLocation[i]` | lokasi ditemukan |
| `foundDate[i]` | tanggal `YYYY-MM-DD` |
| `foundDescription[i]` | deskripsi umum |
| `foundSecret[i]` | detail untuk verifikasi klaim, rahasia |
| `foundStatus[i]` | hanya `Tersedia` atau `Dikembalikan` |

## Laporan hilang

| Array | Isi pada indeks `i` |
| --- | --- |
| `lostReporter[i]` | indeks pengguna pelapor |
| `lostName[i]` | nama barang |
| `lostCategory[i]` | kategori |
| `lostLocation[i]` | lokasi terakhir |
| `lostDate[i]` | tanggal `YYYY-MM-DD` |
| `lostDescription[i]` | deskripsi umum |

## Percobaan klaim dan hasil pencarian

| Array | Isi pada indeks `i` |
| --- | --- |
| `claimItem[i]` | indeks barang temuan |
| `claimUser[i]` | indeks pengguna pengklaim |
| `claimFailed[i]` | jawaban detail rahasia yang salah |
| `searchResult[i]` | indeks barang temuan yang cocok pencarian/list |

`claimItem`, `claimUser`, dan `claimFailed` adalah satu record. Satu pasangan item-pengguna harus mempunyai satu baris percobaan klaim.

## Format file opsional

Storage memakai `data/*.txt`, satu record per baris, pemisah `|`. Semua teks perlu disanitasi: `|`, newline, dan carriage return diganti `/`. File yang tidak ada berarti jumlah record terkait `0`; baris rusak dilewati.

| File | Urutan field | Contoh satu baris valid |
| --- | --- | --- |
| `data/users.txt` | `username|password|phone|failed|locked(0/1)` | `andi|rahasia|08123456789|0|0` |
| `data/found_items.txt` | `reporterIndex|name|category|location|date|description|secret|status` | `0|Payung|Aksesoris|Kantin|2025-08-17|Payung hitam|Pegangan kayu|Tersedia` |
| `data/lost_reports.txt` | `reporterIndex|name|category|location|date|description` | `1|Dompet|Aksesoris|Perpustakaan|2025-08-16|Warna cokelat` |
| `data/claim_attempts.txt` | `itemIndex|userIndex|failedCount` | `0|1|2` |
