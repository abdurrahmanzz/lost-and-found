#include <string>

/*
 * FILE:         src/items/items.cpp
 * PEMILIK:      Anggota C
 * TUJUAN:       Mengelola laporan temuan, laporan hilang, dan hasil pencarian
 * tanpa layar. BERGANTUNG:   models/data.cpp, utils/string_utils.cpp,
 * utils/date_utils.cpp DIPAKAI OLEH: ui/item_screen.cpp dan ui/claim_screen.cpp
 * URUTAN KERJA: addFoundItem, addLostReport, listItemsByReporter,
 * searchAvailableItems KONSEP YANG DIPERLUKAN: array, string, for, if/else,
 * return
 */

// FUNGSI: addFoundItem   (flowchart: "Input barang" -> "Valid?" -> "Simpan")
// TUJUAN: memvalidasi dan menambah satu laporan barang temuan.
// TODO:
//  [ ] 1. Cek name, category, location, dateFound, dan secretDetail tidak
//  kosong; description boleh kosong. Jika ada yang kosong -> ITEM_EMPTY_FIELD.
//  [ ] 2. Jika isValidDate(dateFound) false -> ITEM_INVALID_DATE.
//  [ ] 3. Jika isFutureDate(dateFound) true -> ITEM_FUTURE_DATE.
//  [ ] 4. Jika foundCount sudah MAX_FOUND -> ITEM_FULL.
//  [ ] 5. Isi semua array found pada indeks foundCount; sanitizeField pada
//  semua teks dan set foundStatus menjadi STATUS_AVAILABLE. [ ] 6. Naikkan
//  foundCount hanya setelah semua pasangan terisi, lalu return ITEM_OK.
// CONTOH: tanggal masa depan -> ITEM_FUTURE_DATE dan foundCount tidak berubah.
// HATI-HATI: description satu-satunya teks opsional; satu record selalu memakai
// indeks sama di semua array paralel. SELESAI JIKA: [ ] M-ITEM-1, M-ITEM-2, dan
// M-ITEM-3 lulus. JANGAN ubah nama, parameter, atau tipe return fungsi ini
// tanpa lapor semua pemilik modul.
int addFoundItem(int reporterIndex, std::string name, std::string category,
                 std::string location, string dateFound,
                 std::string description, std::string secretDetail) {
  (void)reporterIndex; // hapus komentar ini setelah dipakai
  (void)name;          // hapus komentar ini setelah dipakai
  (void)category;      // hapus komentar ini setelah dipakai
  (void)location;      // hapus komentar ini setelah dipakai
  (void)dateFound;     // hapus komentar ini setelah dipakai
  (void)description;   // hapus komentar ini setelah dipakai
  (void)secretDetail;  // hapus komentar ini setelah dipakai
  return ITEM_FULL;
}

// FUNGSI: addLostReport   (flowchart: "Input hilang" -> "Valid?" -> "Simpan")
// TUJUAN: memvalidasi dan menambah satu laporan kehilangan.
// TODO:
//  [ ] 1. Cek name, category, location, dan dateLost tidak kosong; description
//  boleh kosong. [ ] 2. Jika tanggal tidak valid -> ITEM_INVALID_DATE; jika
//  masa depan -> ITEM_FUTURE_DATE. [ ] 3. Jika lostCount sudah MAX_LOST ->
//  ITEM_FULL. [ ] 4. Isi seluruh array lost pada indeks lostCount dengan
//  sanitizeField untuk semua teks. [ ] 5. Naikkan lostCount lalu return
//  ITEM_OK.
// CONTOH: lokasi kosong -> ITEM_EMPTY_FIELD.
// HATI-HATI: jangan memakai array found untuk laporan hilang dan jangan cout di
// sini. SELESAI JIKA: [ ] M-ITEM-1 dan M-ITEM-3 lulus. JANGAN ubah nama,
// parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int addLostReport(int reporterIndex, std::string name, std::string category,
                  std::string location, string dateLost,
                  std::string description) {
  (void)reporterIndex; // hapus komentar ini setelah dipakai
  (void)name;          // hapus komentar ini setelah dipakai
  (void)category;      // hapus komentar ini setelah dipakai
  (void)location;      // hapus komentar ini setelah dipakai
  (void)dateLost;      // hapus komentar ini setelah dipakai
  (void)description;   // hapus komentar ini setelah dipakai
  return ITEM_FULL;
}

// FUNGSI: searchAvailableItems   (flowchart: "Filter" -> "Loop temuan" ->
// "searchResult") TUJUAN: mengisi hasil pencarian hanya dengan barang berstatus
// Tersedia.
// TODO:
//  [ ] 1. Set searchResultCount=0 lalu loop i dari 0 sampai kurang dari
//  foundCount. [ ] 2. Lewati item jika foundStatus[i] bukan STATUS_AVAILABLE.
//  [ ] 3. Jika keyword tidak kosong, cocokkan ke foundName ATAU
//  foundDescription memakai containsIgnoreCase. [ ] 4. Jika category atau
//  location tidak kosong, cocokkan masing-masing tanpa membedakan huruf
//  besar/kecil. [ ] 5. Jika semua filter lolos, simpan i ke
//  searchResult[searchResultCount], lalu tambah count; return count setelah
//  loop.
// CONTOH: keyword "tas" menemukan "Tas Biru" tetapi tidak pernah menampilkan
// detail rahasia. HATI-HATI: string filter kosong berarti filter diabaikan;
// JANGAN pernah memakai foundSecret untuk pencarian atau layar. SELESAI JIKA: [
// ] M-ITEM-4 dan M-ITEM-5 lulus. JANGAN ubah nama, parameter, atau tipe return
// fungsi ini tanpa lapor semua pemilik modul.
int searchAvailableItems(std::string keyword, std::string category,
                         std::string location) {
  (void)keyword;  // hapus komentar ini setelah dipakai
  (void)category; // hapus komentar ini setelah dipakai
  (void)location; // hapus komentar ini setelah dipakai
  searchResultCount = 0;
  return 0;
}

// FUNGSI: listItemsByReporter   (flowchart: "User" -> "Loop temuan" ->
// "searchResult") TUJUAN: mengisi hasil bersama dengan semua barang temuan
// milik seorang pengguna.
// TODO:
//  [ ] 1. Set searchResultCount=0 dan loop semua found item.
//  [ ] 2. Jika foundReporter[i] sama dengan reporterIndex, simpan i ke
//  searchResult dan tambah count. [ ] 3. Return searchResultCount setelah loop.
// CONTOH: pengguna indeks 0 dengan dua temuan -> return 2.
// HATI-HATI: yang disimpan adalah indeks asli barang, bukan nomor tampilan
// indeks+1. SELESAI JIKA: [ ] M-ITEM-6 lulus. JANGAN ubah nama, parameter, atau
// tipe return fungsi ini tanpa lapor semua pemilik modul.
int listItemsByReporter(int reporterIndex) {
  (void)reporterIndex; // hapus komentar ini setelah dipakai
  searchResultCount = 0;
  return 0;
}
