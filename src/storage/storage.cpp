/*
 * FILE:         src/storage/storage.cpp
 * PEMILIK:      Anggota A
 * TUJUAN:       Menjadi tempat opsional untuk memuat dan menyimpan array global ke file teks.
 * BERGANTUNG:   models/data.cpp dan utils/string_utils.cpp
 * DIPAKAI OLEH: main.cpp dan layar UI setelah perubahan berhasil
 * URUTAN KERJA: loadAll, saveAll; kerjakan splitLine terlebih dahulu bila mulai mengisi file
 * KONSEP YANG DIPERLUKAN: array, string, if/else, for, fstream opsional
 */

// FUNGSI: loadAll   (flowchart: "Buka file" -> "Baris valid?" -> "Isi array")
// TUJUAN: memuat users, found_items, lost_reports, dan claim_attempts dari data/*.txt.
// TODO:
//  [ ] 1. Untuk tiap file, coba buka dengan ifstream; jika gagal dibuka, biarkan count terkait 0 dan lanjut.
//  [ ] 2. Baca satu baris per while, pecah dengan splitLine, dan cek jumlah field tepat.
//  [ ] 3. Cek count belum mencapai MAX sebelum mengisi seluruh array pasangan pada indeks count.
//  [ ] 4. Lewati baris rusak tanpa crash; baru naikkan count setelah satu record lengkap terisi.
//  [ ] 5. Jangan panggil loadDemoData di sini; main yang memutuskan setelah semua file selesai.
// CONTOH: users.txt tidak ada -> userCount tetap 0 dan program tetap membuka menu.
// HATI-HATI: file belum ada bukan error; indeks di file dimulai dari 0, nomor layar dimulai dari 1.
// SELESAI JIKA: [ ] M-STORAGE-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void loadAll() {
    // Penyimpanan file bersifat opsional; stub ini sengaja aman saat data/*.txt belum ada.
}

// FUNGSI: saveAll   (flowchart: "Array" -> "Tulis tiap record" -> "Tutup file")
// TUJUAN: menyimpan seluruh data saat layar UI berhasil mengubah data.
// TODO:
//  [ ] 1. Buka tiap file output dan loop dari 0 sampai count terkait.
//  [ ] 2. Tulis satu record per baris dengan pemisah '|', mengikuti urutan yang tertulis di data-model.md.
//  [ ] 3. Tulis bool locked sebagai 0 atau 1.
//  [ ] 4. Pastikan teks sudah sanitizeField sebelum masuk array atau sebelum ditulis.
//  [ ] 5. Tutup file setelah selesai; fungsi ini tidak boleh cout/cin.
// CONTOH: user indeks 0 menjadi "andi|rahasia|08123|0|0".
// HATI-HATI: jangan menulis foundSecret ke layar, tetapi tetap wajib ditulis ke found_items.txt untuk data klaim.
// SELESAI JIKA: [ ] M-STORAGE-2 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void saveAll() {
    // Penyimpanan file bersifat opsional; tidak ada data yang berubah pada stub ini.
}
