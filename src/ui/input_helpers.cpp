#include <iostream>
#include <string>

/*
 * FILE:         src/ui/input_helpers.cpp
 * PEMILIK:      Anggota D
 * TUJUAN:       Membaca dan menampilkan input terminal yang dipakai semua layar
 * UI. BERGANTUNG:   utils/string_utils.cpp DIPAKAI OLEH: main.cpp dan seluruh
 * file ui URUTAN KERJA: readLine, readInt, printHeader, pauseScreen KONSEP YANG
 * DIPERLUKAN: string, int, while, if/else, fungsi, return
 */

// FUNGSI: readLine   (flowchart: "Prompt" -> "getline" -> "Teks")
// TUJUAN: menampilkan prompt lalu membaca satu baris lengkap, termasuk spasi.
// TODO:
//  [ ] 1. Tampilkan prompt dengan cout.
//  [ ] 2. Buat string hasil dan baca memakai getline(cin, hasil).
//  [ ] 3. Return hasil.
// CONTOH: prompt "Nama: ", input "Tas Biru" -> "Tas Biru".
// HATI-HATI: jangan pakai cin >> karena nama dan deskripsi boleh memiliki
// spasi. SELESAI JIKA: [ ] M-UI-1 lulus. JANGAN ubah nama, parameter, atau tipe
// return fungsi ini tanpa lapor semua pemilik modul.
std::string readLine(std::string prompt) {
  cout << prompt;
  std::string result;
  getline(cin, result);
  return result;
}

// FUNGSI: readInt   (flowchart: "Input teks" -> "Angka valid?" -> "Dalam
// batas?") TUJUAN: membaca bilangan dalam batas tanpa memakai konversi yang
// belum dipelajari.
// TODO:
//  [ ] 1. Panggil readLine(prompt).
//  [ ] 2. Jika bukan isAllDigits, tampilkan pesan dan ulangi.
//  [ ] 3. Ubah tiap digit: hasil = hasil * 10 + (huruf - '0').
//  [ ] 4. Jika hasil di luar minValue..maxValue, tampilkan pesan dan ulangi;
//  jika valid return hasil.
// CONTOH: input "2" dengan batas 1..3 -> 2; input "dua" -> diminta ulang.
// HATI-HATI: selalu baca lewat readLine supaya tidak ada sisa newline untuk
// getline berikutnya. SELESAI JIKA: [ ] M-UI-1 lulus. JANGAN ubah nama,
// parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int readInt(std::string prompt, int minValue, int maxValue) {
  while (true) {
    std::string text = readLine(prompt);
    if (!isAllDigits(text)) {
      cout << "Masukkan angka yang benar.\n";
    } else {
      int result = 0;
      for (int i = 0; i < (int)text.length(); i++) {
        result = result * 10 + (text[i] - '0');
      }
      if (result >= minValue && result <= maxValue) {
        return result;
      }
      cout << "Masukkan angka dari " << minValue << " sampai " << maxValue
           << ".\n";
    }
  }
}

// FUNGSI: pauseScreen   (flowchart: "Tampil pesan" -> "Enter" -> "Lanjut")
// TUJUAN: memberi pengguna waktu membaca hasil sebelum kembali ke menu.
// TODO:
//  [ ] 1. Tampilkan pesan singkat.
//  [ ] 2. Panggil readLine dengan prompt kosong agar pengguna menekan Enter.
// CONTOH: setelah pesan berhasil, Enter kembali ke menu.
// HATI-HATI: pakai readLine agar tidak terkena sisa newline dari cin >>.
// SELESAI JIKA: [ ] M-UI-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua
// pemilik modul.
void pauseScreen() { readLine("Tekan Enter untuk lanjut..."); }

// FUNGSI: printHeader   (flowchart: "Judul" -> "Garis" -> "Judul")
// TUJUAN: membuat judul layar konsisten pada setiap menu.
// TODO:
//  [ ] 1. Tampilkan garis pemisah.
//  [ ] 2. Tampilkan title.
//  [ ] 3. Tampilkan garis pemisah lagi.
// CONTOH: "Menu Pengguna" tampil di antara dua garis.
// HATI-HATI: hanya file dalam folder ui yang boleh memakai cout.
// SELESAI JIKA: [ ] M-UI-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua
// pemilik modul.
void printHeader(std::string title) {
  std::cout << "\n==============================\n";
  std::cout << title << "\n";
  std::cout << "==============================\n";
}
