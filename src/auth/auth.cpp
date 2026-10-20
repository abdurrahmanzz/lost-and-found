/*
 * FILE:         src/auth/auth.cpp
 * PEMILIK:      Anggota B
 * TUJUAN:       Memvalidasi pendaftaran dan login tanpa input/output layar atau file.
 * BERGANTUNG:   models/data.cpp dan utils/string_utils.cpp
 * DIPAKAI OLEH: ui/auth_screen.cpp
 * URUTAN KERJA: findUserByUsername, registerUser, loginUser
 * KONSEP YANG DIPERLUKAN: array, string, for, if/else, return
 */

// FUNGSI: findUserByUsername   (flowchart: "Username" -> "Loop pengguna" -> "Indeks/-1")
// TUJUAN: mencari indeks pengguna dengan username tanpa membedakan huruf besar/kecil.
// TODO:
//  [ ] 1. Ubah username masukan menjadi huruf kecil dengan toLower.
//  [ ] 2. Loop i dari 0 sampai kurang dari userCount.
//  [ ] 3. Bandingkan toLower(userName[i]) dengan username masukan; jika sama return i.
//  [ ] 4. Return -1 jika loop selesai tanpa cocok.
// CONTOH: data "Andi", input "andi" -> 0.
// HATI-HATI: indeks 0 adalah hasil valid; jangan memakai if(hasil) untuk menentukan ada atau tidak.
// SELESAI JIKA: [ ] M-AUTH-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int findUserByUsername(string username) {
    (void)username; // hapus komentar ini setelah dipakai
    return -1;
}

// FUNGSI: registerUser   (flowchart: "Input daftar" -> "Valid?" -> "Simpan array")
// TUJUAN: memvalidasi lalu menambahkan satu pengguna baru ke array paralel.
// TODO:
//  [ ] 1. Jika username, password, atau phone kosong -> return REG_EMPTY_FIELD.
//  [ ] 2. Jika username mengandung spasi -> return REG_USERNAME_HAS_SPACE.
//  [ ] 3. Jika findUserByUsername(username) bukan -1 -> return REG_DUPLICATE.
//  [ ] 4. Jika panjang password kurang dari MIN_PASSWORD_LENGTH -> return REG_PASSWORD_SHORT.
//  [ ] 5. Jika isAllDigits(phone) false -> return REG_PHONE_INVALID.
//  [ ] 6. Jika userCount sudah MAX_USERS -> return REG_FULL.
//  [ ] 7. Isi userName, userPassword, userPhone pada indeks userCount; userFailed=0 dan userLocked=false; lalu userCount++ dan return REG_OK.
// CONTOH: "andi", "rahasia", "08123" -> REG_OK lalu userCount bertambah satu.
// HATI-HATI: cek urutan ini persis agar layar menampilkan pesan yang konsisten; jangan cout atau saveAll di modul logika.
// SELESAI JIKA: [ ] M-AUTH-1 dan M-AUTH-2 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int registerUser(string username, string password, string phone) {
    (void)username; // hapus komentar ini setelah dipakai
    (void)password; // hapus komentar ini setelah dipakai
    (void)phone; // hapus komentar ini setelah dipakai
    return REG_FULL;
}

// FUNGSI: loginUser   (flowchart: "Input login" -> "Valid?" -> "Gagal 3x?")
// TUJUAN: memeriksa username+password dan mengunci akun setelah 3x salah.
// TODO:
//  [ ] 1. Panggil findUserByUsername(username). Hasil -1 -> return LOGIN_NOT_FOUND.
//  [ ] 2. Jika userLocked[index] bernilai true -> return LOGIN_LOCKED (jangan cek password).
//  [ ] 3. Jika userPassword[index] sama dengan password: userFailed[index] = 0, lalu return index.
//  [ ] 4. Jika beda: userFailed[index] bertambah 1. Jika sudah >= MAX_LOGIN_ATTEMPTS: userLocked[index] = true, return LOGIN_LOCKED. Jika belum: return LOGIN_WRONG_PASSWORD.
// CONTOH: password salah 3x -> panggilan ke-3 mengembalikan LOGIN_LOCKED; panggilan ke-4 dengan password benar tetap LOGIN_LOCKED.
// HATI-HATI: indeks 0 adalah login SUKSES; jangan memakai "if (hasil)" untuk mengecek. Bandingkan dengan >= 0. Dilarang cout di sini.
// SELESAI JIKA: [ ] M-AUTH-3 dan M-AUTH-4 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int loginUser(string username, string password) {
    (void)username; // hapus komentar ini setelah dipakai
    (void)password; // hapus komentar ini setelah dipakai
    return LOGIN_NOT_FOUND;
}
