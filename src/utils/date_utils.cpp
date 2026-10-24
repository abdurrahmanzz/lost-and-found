#include <ctime>
#include <string>

bool isLeapYear(int year) {
  return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int daysInMonth(int month, int year) {
  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;

  case 4:
  case 6:
  case 9:
  case 11:
    return 30;

  case 2:
    if (isLeapYear(year)) {
      return 29;
    }
    return 28;

  default:
    return 0;
  }
}

/*
 * FILE:         src/utils/date_utils.cpp
 * PEMILIK:      Anggota C
 * TUJUAN:       Memeriksa dan menyediakan tanggal untuk laporan barang.
 * BERGANTUNG:   string dan ctime dari src/main.cpp
 * DIPAKAI OLEH: items/items.cpp
 * URUTAN KERJA: isValidDate, getTodayDate, isFutureDate
 * KONSEP YANG DIPERLUKAN: string, if/else, return
 */

// FUNGSI: isValidDate   (flowchart: "Tanggal" -> "Format?" -> "Bulan/hari?")
// TUJUAN: memeriksa format YYYY-MM-DD dan batas hari tiap bulan.
// TODO:
//  [ ] 1. Cek panjang tepat 10 dan karakter ke-4 serta ke-7 adalah '-'.
//  [ ] 2. Pastikan delapan posisi angka lainnya adalah digit.
//  [ ] 3. Ubah digit tahun, bulan, dan hari ke int secara manual.
//  [ ] 4. Tolak bulan di luar 1..12; tentukan jumlah hari bulan itu dengan
//  if/else. [ ] 5. Februari boleh memakai aturan kabisat atau cukup 28 hari
//  untuk versi awal; return apakah hari valid.
// CONTOH: "2025-02-30" -> false; "2025-02-28" -> true.
// HATI-HATI: tanggal yang bentuknya benar belum tentu ada di kalender.
// SELESAI JIKA: [ ] M-ITEM-2 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua
// pemilik modul.
bool isValidDate(std::string date) {
  if (date.length() != 10)
    return false;

  if (date[4] != '-' || date[7] != '-')
    return false;

  for (int i = 0; i < 10; i++) {
    if (i == 4 || i == 7) {
      continue;
    }

    if (date[i] < '0' || date[i] > '9') {
      return false;
    }
  }

  // convertion
  // ascii '0' = 48
  int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 +
             (date[2] - '0') * 10 + (date[3] - '0');
  int month = (date[5] - '0') * 10 + (date[6] - '0');
  int day = (date[8] - '0') * 10 + (date[9] - '0');

  if (year < 1)
    return false;

  if (month < 1 || month > 12)
    return false;

  if (day < 1 || day > daysInMonth(month, year)) {
    return false;
  }

  return true;
}

// FUNGSI: getTodayDate   (flowchart: "Jam komputer" -> "YYYY-MM-DD")
// TUJUAN: mengembalikan tanggal lokal hari ini dengan format yang sama seperti
// input laporan.
// TODO:
//  [ ] 1. Bagian ini sudah jadi; jangan diubah saat mengerjakan validasi
//  tanggal.
// CONTOH: pada 2025-08-17 -> "2025-08-17".
// HATI-HATI: hasil mengikuti jam komputer, bukan tanggal dari internet.
// SELESAI JIKA: [ ] M-ITEM-3 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua
// pemilik modul.
std::string getTodayDate() {
  // bagian ini sudah jadi karena memakai <ctime> yang belum diajarkan
  time_t now = time(0);
  tm *local = localtime(&now);
  char result[11];
  strftime(result, sizeof(result), "%Y-%m-%d", local);
  return std::string(result);
}

// FUNGSI: isFutureDate   (flowchart: "Tanggal valid?" -> "Bandingkan hari ini")
// TUJUAN: menentukan apakah tanggal laporan lebih besar dari tanggal hari ini.
// TODO:
//  [ ] 1. Jika isValidDate(date) false, return false; validasi utama tetap
//  dilakukan add item. [ ] 2. Ambil today dengan getTodayDate(). [ ] 3.
//  Bandingkan date > today karena dua string YYYY-MM-DD sama panjang dan
//  berurutan tahun-bulan-hari. [ ] 4. Return hasil perbandingan.
// CONTOH: jika hari ini "2025-08-17", "2025-08-18" -> true.
// HATI-HATI: perbandingan teks ini hanya aman jika format selalu YYYY-MM-DD
// lengkap dengan nol di depan. SELESAI JIKA: [ ] M-ITEM-3 lulus. JANGAN ubah
// nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
bool isFutureDate(std::string date) {
  if (isValidDate(date) == false)
    return false;

  std::string today = getTodayDate();

  return date > today;
}
