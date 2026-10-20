/*
 * FILE:         src/utils/id_utils.cpp
 * PEMILIK:      Anggota A
 * TUJUAN:       Mengubah indeks array menjadi nomor layar dan sebaliknya.
 * BERGANTUNG:   tidak ada
 * DIPAKAI OLEH: ui/item_screen.cpp dan ui/claim_screen.cpp
 * URUTAN KERJA: toDisplayNo, toIndex
 * KONSEP YANG DIPERLUKAN: int, return
 */

// FUNGSI: toDisplayNo   (flowchart: "Indeks" -> "+1" -> "Nomor layar")
// TUJUAN: mengubah indeks mulai 0 menjadi nomor yang ramah pengguna mulai 1.
// TODO:
//  [ ] 1. Return index + 1.
// CONTOH: 0 -> 1.
// HATI-HATI: indeks 0 valid, jadi jangan menganggapnya berarti tidak ada data.
// SELESAI JIKA: [ ] M-ITEM-4 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int toDisplayNo(int index) {
    (void)index; // hapus komentar ini setelah dipakai
    return 0;
}

// FUNGSI: toIndex   (flowchart: "Nomor layar" -> "-1" -> "Indeks")
// TUJUAN: mengubah nomor layar mulai 1 kembali menjadi indeks array mulai 0.
// TODO:
//  [ ] 1. Return displayNo - 1.
// CONTOH: 1 -> 0.
// HATI-HATI: layar harus memastikan nomor minimal 1 sebelum hasil ini dipakai.
// SELESAI JIKA: [ ] M-ITEM-4 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int toIndex(int displayNo) {
    (void)displayNo; // hapus komentar ini setelah dipakai
    return -1;
}
