/*
 * FILE:         src/claims/claims.cpp
 * PEMILIK:      Anggota D
 * TUJUAN:       Memproses percobaan klaim barang tanpa layar atau file.
 * BERGANTUNG:   models/data.cpp dan utils/string_utils.cpp
 * DIPAKAI OLEH: ui/claim_screen.cpp
 * URUTAN KERJA: getFailedClaimCount, getFinderContact, submitClaim
 * KONSEP YANG DIPERLUKAN: array, string, for, if/else, return
 */

// FUNGSI: getFailedClaimCount   (flowchart: "Item+user" -> "Loop klaim" -> "Jumlah")
// TUJUAN: mengambil jumlah jawaban klaim salah untuk pasangan item dan pengguna.
// TODO:
//  [ ] 1. Loop i dari 0 sampai kurang dari claimCount.
//  [ ] 2. Jika claimItem[i] dan claimUser[i] keduanya cocok, return claimFailed[i].
//  [ ] 3. Jika tidak ada baris pasangan tersebut, return 0.
// CONTOH: belum pernah mencoba klaim -> 0.
// HATI-HATI: pasangan item sama tetapi user berbeda harus memiliki hitungan terpisah.
// SELESAI JIKA: [ ] M-CLAIM-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int getFailedClaimCount(int itemIndex, int userIndex) {
    (void)itemIndex; // hapus komentar ini setelah dipakai
    (void)userIndex; // hapus komentar ini setelah dipakai
    return 0;
}

// FUNGSI: getFinderContact   (flowchart: "Item" -> "Reporter" -> "Kontak")
// TUJUAN: membuat teks "username - nomor telepon" milik penemu barang.
// TODO:
//  [ ] 1. Ambil reporterIndex dari foundReporter[itemIndex].
//  [ ] 2. Return userName[reporterIndex] + " - " + userPhone[reporterIndex].
// CONTOH: penemu andi dengan 08123 -> "andi - 08123".
// HATI-HATI: fungsi ini hanya dipanggil UI setelah CLAIM_APPROVED dan itemIndex sudah valid.
// SELESAI JIKA: [ ] M-CLAIM-3 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
string getFinderContact(int itemIndex) {
    (void)itemIndex; // hapus komentar ini setelah dipakai
    return "";
}

// FUNGSI: submitClaim   (flowchart: "Pilih item" -> "Boleh klaim?" -> "Detail benar?")
// TUJUAN: menyetujui klaim benar atau mencatat jawaban salah untuk satu item dan pengguna.
// TODO:
//  [ ] 1. Jika itemIndex < 0 atau >= foundCount -> return CLAIM_ITEM_NOT_FOUND.
//  [ ] 2. Jika foundStatus[itemIndex] bukan STATUS_AVAILABLE -> return CLAIM_NOT_AVAILABLE.
//  [ ] 3. Jika foundReporter[itemIndex] sama dengan claimantIndex -> return CLAIM_OWN_ITEM.
//  [ ] 4. Jika getFailedClaimCount(itemIndex, claimantIndex) sudah >= MAX_CLAIM_ATTEMPTS -> return CLAIM_TOO_MANY_ATTEMPTS.
//  [ ] 5. Bandingkan toLower(trim(secretAnswer)) dengan toLower(trim(foundSecret[itemIndex])). Jika sama, set status Dikembalikan dan return CLAIM_APPROVED.
//  [ ] 6. Jika salah, cari baris pasangan klaim. Bila ada, tambah claimFailed; bila tidak ada dan claimCount penuh -> CLAIM_STORAGE_FULL; selain itu buat baris baru dengan failed=1.
//  [ ] 7. Return CLAIM_WRONG_DETAIL sesudah kesalahan berhasil dicatat.
// CONTOH: jawaban salah ketiga -> CLAIM_WRONG_DETAIL, panggilan berikutnya -> CLAIM_TOO_MANY_ATTEMPTS.
// HATI-HATI: urutan cek wajib persis; ubah semua data satu record klaim di indeks yang sama dan jangan cout/saveAll di sini.
// SELESAI JIKA: [ ] M-CLAIM-1, M-CLAIM-2, M-CLAIM-3, dan M-CLAIM-4 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int submitClaim(int claimantIndex, int itemIndex, string secretAnswer) {
    (void)claimantIndex; // hapus komentar ini setelah dipakai
    (void)itemIndex; // hapus komentar ini setelah dipakai
    (void)secretAnswer; // hapus komentar ini setelah dipakai
    return CLAIM_ITEM_NOT_FOUND;
}
