/*
 * FILE:         src/ui/auth_screen.cpp
 * PEMILIK:      Anggota B
 * TUJUAN:       Menampilkan alur daftar dan login serta menerjemahkan kode auth ke pesan Indonesia.
 * BERGANTUNG:   ui/input_helpers.cpp, auth/auth.cpp, storage/storage.cpp
 * DIPAKAI OLEH: main.cpp
 * URUTAN KERJA: showRegisterScreen, showLoginScreen
 * KONSEP YANG DIPERLUKAN: string, int, if/else, fungsi, return
 */

// FUNGSI: showRegisterScreen   (flowchart: "Input daftar" -> "registerUser" -> "Pesan")
// TUJUAN: meminta data pendaftaran, menampilkan pesan hasil, dan menyimpan jika sukses.
// TODO:
//  [ ] 1. Tampilkan header lalu ambil username, password, dan nomor dengan readLine.
//  [ ] 2. Panggil registerUser dan simpan kode hasilnya.
//  [ ] 3. Dengan if/else, tampilkan pesan Indonesia untuk setiap REG_*; jangan memakai switch.
//  [ ] 4. Jika kode REG_OK, panggil saveAll tepat sekali dan tampilkan pesan berhasil.
//  [ ] 5. Panggil pauseScreen sebelum kembali ke main.
// CONTOH: password lima karakter -> pesan password minimal 6 karakter dan tidak memanggil saveAll.
// HATI-HATI: layar menyimpan input dengan readLine; modul auth tidak boleh memakai cout/cin/file.
// SELESAI JIKA: [ ] M-AUTH-1 dan M-AUTH-2 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void showRegisterScreen() {
    // Stub layar: isi setelah registerUser selesai dikerjakan.
}

// FUNGSI: showLoginScreen   (flowchart: "Input login" -> "loginUser" -> "Masuk/-1")
// TUJUAN: meminta kredensial dan mengembalikan indeks pengguna bila login berhasil.
// TODO:
//  [ ] 1. Tampilkan header dan ambil username serta password melalui readLine.
//  [ ] 2. Panggil loginUser(username, password).
//  [ ] 3. Jika hasil >= 0, tampilkan selamat datang, panggil saveAll karena gagal login mungkin berubah, lalu return hasil.
//  [ ] 4. Jika hasil LOGIN_NOT_FOUND, LOGIN_WRONG_PASSWORD, atau LOGIN_LOCKED, tampilkan pesan Indonesia dengan if/else, panggil saveAll bila failed/locked berubah, pauseScreen, lalu return -1.
// CONTOH: username tidak ada -> pesan akun tidak ditemukan dan return -1.
// HATI-HATI: indeks 0 sukses; selalu cek hasil >= 0, bukan if(hasil).
// SELESAI JIKA: [ ] M-AUTH-3 dan M-AUTH-4 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int showLoginScreen() {
    // Stub aman: -1 berarti kembali ke menu tamu.
    return -1;
}
