/*
 * FILE:         src/utils/string_utils.cpp
 * PEMILIK:      Anggota A
 * TUJUAN:       Menyediakan bantuan teks tanpa layar dan tanpa file.
 * BERGANTUNG:   string dan cctype dari src/main.cpp
 * DIPAKAI OLEH: auth, items, claims, storage, ui/input_helpers
 * URUTAN KERJA: isAllDigits, trim, toLower, sanitizeField, containsIgnoreCase, splitLine
 * KONSEP YANG DIPERLUKAN: string, array, for, if/else, return
 */

// FUNGSI: trim   (flowchart: "Teks masuk" -> "Buang spasi tepi")
// TUJUAN: menghapus spasi di awal dan akhir teks.
// TODO:
//  [ ] 1. Mulai indeks kiri dari 0 dan maju selama karakter adalah spasi.
//  [ ] 2. Mulai indeks kanan dari panjang teks dan mundur selama karakter adalah spasi.
//  [ ] 3. Return bagian dari kiri sampai sebelum kanan; jika semua spasi return string kosong.
// CONTOH: "  buku  " -> "buku".
// HATI-HATI: teks kosong dan indeks akhir string sering membuat pemula keluar batas array.
// SELESAI JIKA: [ ] M-ITEM-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
string trim(string s) {
    (void)s; // hapus komentar ini setelah dipakai
    return "";
}

// FUNGSI: toLower   (flowchart: "Teks" -> "Huruf kecil")
// TUJUAN: menyamakan kapitalisasi untuk perbandingan.
// TODO:
//  [ ] 1. Loop setiap karakter pada salinan s.
//  [ ] 2. Ubah huruf dengan tolower dari cctype.
//  [ ] 3. Return salinan yang sudah diubah.
// CONTOH: "BukuA" -> "bukua".
// HATI-HATI: jangan mengubah data asli di array ketika hanya ingin membandingkan.
// SELESAI JIKA: [ ] M-AUTH-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
string toLower(string s) {
    (void)s; // hapus komentar ini setelah dipakai
    return "";
}

// FUNGSI: containsIgnoreCase   (flowchart: "Normalisasi" -> "Cari kata")
// TUJUAN: mencari keyword tanpa membedakan huruf besar dan kecil.
// TODO:
//  [ ] 1. Ubah text dan keyword memakai toLower.
//  [ ] 2. Jika keyword kosong, return true agar filter kosong diabaikan.
//  [ ] 3. Loop posisi text dan cek apakah bagian text cocok seluruhnya dengan keyword.
//  [ ] 4. Return true saat cocok, atau false setelah semua posisi diperiksa.
// CONTOH: "Tas Biru", "biru" -> true.
// HATI-HATI: jangan mencari foundSecret; detail rahasia tidak boleh ditampilkan atau dipakai pencarian layar.
// SELESAI JIKA: [ ] M-ITEM-4 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
bool containsIgnoreCase(string text, string keyword) {
    (void)text; // hapus komentar ini setelah dipakai
    (void)keyword; // hapus komentar ini setelah dipakai
    return false;
}

// FUNGSI: sanitizeField   (flowchart: "Teks input" -> "Teks aman file")
// TUJUAN: mengganti pemisah file dan baris baru agar satu record tetap satu baris.
// TODO:
//  [ ] 1. Loop setiap karakter s.
//  [ ] 2. Jika karakter adalah '|', '\n', atau '\r', ganti dengan '/'.
//  [ ] 3. Return s yang sudah aman.
// CONTOH: "A|B\nC" -> "A/B/C".
// HATI-HATI: sanitasi berlaku untuk semua teks yang disimpan, bukan untuk angka atau indeks.
// SELESAI JIKA: [ ] M-STORAGE-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
string sanitizeField(string s) {
    (void)s; // hapus komentar ini setelah dipakai
    return "";
}

// FUNGSI: isAllDigits   (flowchart: "Teks" -> "Semua angka?")
// TUJUAN: memeriksa bahwa string tidak kosong dan semua karakternya angka.
// TODO:
//  [ ] 1. Jika s kosong, return false.
//  [ ] 2. Loop setiap karakter dan cek dengan isdigit dari cctype.
//  [ ] 3. Return false pada karakter bukan angka; return true setelah loop selesai.
// CONTOH: "08123" -> true; "08-123" -> false.
// HATI-HATI: spasi bukan angka; jangan menerima string kosong sebagai nomor telepon valid.
// SELESAI JIKA: [ ] M-AUTH-2 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
bool isAllDigits(string s) {
    (void)s; // hapus komentar ini setelah dipakai
    return false;
}

// FUNGSI: splitLine   (flowchart: "Baris" -> "Field-field")
// TUJUAN: memecah satu baris file ke array parts untuk modul storage.
// TODO:
//  [ ] 1. Siapkan string bagian dan jumlah=0.
//  [ ] 2. Loop karakter line; saat delimiter ditemukan, simpan bagian bila jumlah masih kurang dari maxParts.
//  [ ] 3. Kosongkan bagian dan lanjutkan; sesudah loop simpan bagian terakhir termasuk bila kosong.
//  [ ] 4. Return jumlah bagian yang benar-benar disimpan.
// CONTOH: "1|andi|08", '|', parts, 4 -> 3 dan parts berisi "1", "andi", "08".
// HATI-HATI: jangan menulis melewati parts[maxParts-1]; field terakhir kosong tetap penting untuk mendeteksi baris rusak.
// SELESAI JIKA: [ ] M-STORAGE-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int splitLine(string line, char delimiter, string parts[], int maxParts) {
    (void)line; // hapus komentar ini setelah dipakai
    (void)delimiter; // hapus komentar ini setelah dipakai
    (void)parts; // hapus komentar ini setelah dipakai
    (void)maxParts; // hapus komentar ini setelah dipakai
    return 0;
}
