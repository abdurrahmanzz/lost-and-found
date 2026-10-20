# Tes Manual

Isi kolom **Lulus/Gagal** setelah anggota terkait mengisi TODO. Reset data antara skenario bila perlu: hapus `data/*.txt` (jika storage sudah dibuat), jalankan program, lalu gunakan data demo atau register ulang.

| ID | Langkah | Hasil yang diharapkan | Lulus/Gagal |
| --- | --- | --- | --- |
| M-AUTH-1 | Register `Andi`, password `rahasia`, telepon `081234`; register lagi `andi` dengan data lain. | Pendaftaran pertama berhasil. Kedua ditolak sebagai username duplikat tanpa membedakan kapital. | [ ] |
| M-AUTH-2 | Coba register password `abcde`; ulangi dengan telepon `08-123`; ulangi dengan username `andi satu`. | Masing-masing menampilkan password terlalu pendek, telepon tidak valid, dan username mengandung spasi. Tidak ada user baru. | [ ] |
| M-AUTH-3 | Daftarkan user baru. Login dengan password salah tiga kali, lalu coba password yang benar. | Dua salah pertama memberi pesan password salah; salah ketiga mengunci; password benar setelahnya tetap ditolak karena terkunci. | [ ] |
| M-AUTH-4 | Login dengan username yang tidak ada; kemudian login user valid dengan password benar. | Username tak ada memberi pesan akun tidak ditemukan; login valid masuk menu pengguna, termasuk bila indeksnya 0. | [ ] |
| M-ITEM-1 | Lapor temuan dengan nama/lokasi kosong; lalu laporan valid dengan description kosong. | Field wajib kosong ditolak. Description kosong diizinkan dan laporan valid tersimpan. | [ ] |
| M-ITEM-2 | Lapor temuan dengan tanggal `2025-02-30`, `2025/02/20`, dan tanggal valid. | Dua tanggal pertama ditolak sebagai tanggal tidak valid; tanggal valid diterima bila bukan masa depan. | [ ] |
| M-ITEM-3 | Lapor temuan/laporan hilang menggunakan tanggal besok menurut komputer. | Ditolak sebagai tanggal masa depan dan count data tidak bertambah. | [ ] |
| M-ITEM-4 | Tambahkan `Tas Biru` dengan description `ada stiker`. Cari keyword `tas`, kategori/lokasi kosong. | Hasil memuat item tersebut; nomor tampil mulai 1; secret detail tidak tampak. | [ ] |
| M-ITEM-5 | Cari keyword yang pasti tidak ada, misalnya `zzztidakada`; pilih tawaran membuat laporan hilang. | Ada pesan tidak ada hasil dan layar laporan hilang dibuka dengan nama awal keyword. | [ ] |
| M-ITEM-6 | Login sebagai pelapor yang punya dua temuan, lalu pilih Laporan saya. | Dua item miliknya tampil dengan nama/lokasi/tanggal/status; item orang lain dan secret tidak tampil. | [ ] |
| M-CLAIM-1 | Sebagai user lain, cari satu item tersedia dan masukkan detail rahasia salah tiga kali. Coba sekali lagi. | Tiga jawaban salah dicatat; percobaan keempat ditolak karena terlalu banyak percobaan. | [ ] |
| M-CLAIM-2 | Login sebagai pelapor item, cari item miliknya, lalu klaim item itu. | Klaim ditolak sebagai barang milik sendiri; status barang tidak berubah. | [ ] |
| M-CLAIM-3 | Sebagai user lain dengan belum ada salah jawab, masukkan detail rahasia benar (beda kapital dan spasi tepi juga dicoba). | Klaim disetujui, status berubah `Dikembalikan`, dan kontak penemu `username - nomor telepon` tampil. | [ ] |
| M-CLAIM-4 | Setelah M-CLAIM-3, cari atau klaim kembali item yang sama. | Item tidak muncul di pencarian tersedia atau klaim langsung ditolak karena tidak tersedia. | [ ] |
| M-STORAGE-1 | Dengan storage selesai, buat users.txt valid lalu tambahkan satu baris field kurang; jalankan program. | Record valid dimuat; baris rusak dilewati tanpa program crash. | [ ] |
| M-STORAGE-2 | Buat laporan valid, keluar, lalu jalankan ulang program. | Data tetap ada dan setiap record file memakai satu baris serta pemisah `|`. | [ ] |
| M-UI-1 | Jalankan `./lostfound`, masukkan `abc`, `0`, lalu `3` pada menu tamu. | Input tidak valid diminta ulang; menu terlihat; pilihan 3 membuat program berhenti normal. | [ ] |
