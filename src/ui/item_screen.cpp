/*
 * FILE:         src/ui/item_screen.cpp
 * PEMILIK:      Anggota C
 * TUJUAN:       Menampilkan layar laporan barang dan laporan pengguna.
 * BERGANTUNG:   ui/input_helpers.cpp, items/items.cpp, utils/id_utils.cpp, storage/storage.cpp
 * DIPAKAI OLEH: main.cpp dan ui/claim_screen.cpp
 * URUTAN KERJA: showReportFoundScreen, showReportLostScreen, showMyReportsScreen
 * KONSEP YANG DIPERLUKAN: string, int, if/else, for, fungsi
 */

// FUNGSI: showReportFoundScreen   (flowchart: "Input temuan" -> "addFoundItem" -> "Pesan")
// TUJUAN: meminta laporan barang temuan dan menyimpan jika penambahan berhasil.
// TODO:
//  [ ] 1. Ambil name, category, location, date, description, dan secret detail dengan readLine.
//  [ ] 2. Panggil addFoundItem(userIndex, ...).
//  [ ] 3. Tampilkan pesan tiap ITEM_* memakai if/else.
//  [ ] 4. Jika ITEM_OK, panggil saveAll dan jangan tampilkan secret detail pada pesan.
//  [ ] 5. Panggil pauseScreen.
// CONTOH: description kosong tetap dapat berhasil jika field wajib lain valid.
// HATI-HATI: detail rahasia hanya diminta untuk verifikasi klaim, tidak boleh dicetak.
// SELESAI JIKA: [ ] M-ITEM-1 sampai M-ITEM-3 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void showReportFoundScreen(int userIndex) {
    (void)userIndex; // hapus komentar ini setelah dipakai
}

// FUNGSI: showReportLostScreen   (flowchart: "Input hilang" -> "addLostReport" -> "Pesan")
// TUJUAN: meminta laporan kehilangan; prefillName dapat dipakai dari pencarian tanpa hasil.
// TODO:
//  [ ] 1. Jika prefillName tidak kosong, tampilkan dan tawarkan sebagai nama awal; tetap gunakan readLine untuk nama akhir.
//  [ ] 2. Ambil category, location, date, dan description dengan readLine.
//  [ ] 3. Panggil addLostReport(userIndex, ...) lalu tampilkan pesan ITEM_* dengan if/else.
//  [ ] 4. Jika ITEM_OK, panggil saveAll; kemudian pauseScreen.
// CONTOH: pencarian "dompet" kosong -> layar dibuka dengan prefillName "dompet".
// HATI-HATI: prefill bukan data yang otomatis tersimpan; pengguna tetap dapat mengubahnya.
// SELESAI JIKA: [ ] M-ITEM-1 dan M-ITEM-5 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void showReportLostScreen(int userIndex, string prefillName) {
    (void)userIndex; // hapus komentar ini setelah dipakai
    (void)prefillName; // hapus komentar ini setelah dipakai
}

// FUNGSI: showMyReportsScreen   (flowchart: "User" -> "listItemsByReporter" -> "Daftar")
// TUJUAN: menampilkan semua barang temuan yang dilaporkan pengguna aktif.
// TODO:
//  [ ] 1. Panggil listItemsByReporter(userIndex).
//  [ ] 2. Jika hasil 0, tampilkan pesan belum ada laporan.
//  [ ] 3. Jika ada, loop searchResult dan tampilkan nomor toDisplayNo(index), nama, lokasi, tanggal, dan status.
//  [ ] 4. Jangan tampilkan foundSecret; lalu pauseScreen.
// CONTOH: item indeks 0 tercetak sebagai nomor 1, bukan 0.
// HATI-HATI: searchResult menyimpan indeks asli; status boleh Dikembalikan tetap muncul di laporan saya.
// SELESAI JIKA: [ ] M-ITEM-6 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void showMyReportsScreen(int userIndex) {
    (void)userIndex; // hapus komentar ini setelah dipakai
}
