/*
 * FILE:         src/ui/claim_screen.cpp
 * PEMILIK:      Anggota D
 * TUJUAN:       Menampilkan pencarian dan proses klaim barang kepada pengguna.
 * BERGANTUNG:   ui/input_helpers.cpp, items/items.cpp, claims/claims.cpp, utils/id_utils.cpp, storage/storage.cpp, ui/item_screen.cpp
 * DIPAKAI OLEH: main.cpp
 * URUTAN KERJA: showClaimFlowScreen
 * KONSEP YANG DIPERLUKAN: string, int, if/else, for, fungsi
 */

// FUNGSI: showClaimFlowScreen   (flowchart: "Cari" -> "Pilih" -> "Jawab detail" -> "Klaim")
// TUJUAN: mengarahkan pengguna dari pencarian barang sampai hasil klaim.
// TODO:
//  [ ] 1. Ambil keyword, category, dan location dengan readLine, lalu panggil searchAvailableItems.
//  [ ] 2. Jika hasil 0, tawarkan dengan readInt apakah ingin membuka showReportLostScreen(userIndex, keyword); lalu return.
//  [ ] 3. Loop searchResult dan tampilkan nomor toDisplayNo, nama, category, lokasi, tanggal, dan description; JANGAN tampilkan foundSecret.
//  [ ] 4. Minta nomor barang dengan readInt, ubah memakai toIndex, dan pastikan indeks itu benar-benar salah satu hasil pencarian.
//  [ ] 5. Ambil secretAnswer dengan readLine, panggil submitClaim, lalu ubah semua CLAIM_* menjadi pesan Indonesia dengan if/else.
//  [ ] 6. Jika CLAIM_APPROVED, tampilkan getFinderContact(itemIndex); setelah setiap perubahan berhasil dicatat, panggil saveAll; lalu pauseScreen.
// CONTOH: jawaban benar -> pesan disetujui dan "username - nomor telepon" penemu muncul.
// HATI-HATI: nomor layar adalah indeks+1; jangan mempercayai nomor yang tidak ada dalam searchResult dan jangan cetak detail rahasia.
// SELESAI JIKA: [ ] M-ITEM-5 dan M-CLAIM-1 sampai M-CLAIM-4 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void showClaimFlowScreen(int userIndex) {
    (void)userIndex; // hapus komentar ini setelah dipakai
}
