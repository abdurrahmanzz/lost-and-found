/*
 * FILE:         src/models/data.cpp
 * PEMILIK:      Anggota A
 * TUJUAN:       Menyimpan semua data program dalam array paralel global.
 * BERGANTUNG:   string dari src/main.cpp
 * DIPAKAI OLEH: semua modul
 * URUTAN KERJA: pahami konstanta, data pengguna, data barang, lalu loadDemoData
 * KONSEP YANG DIPERLUKAN: array, string, int, bool
 */

const int MAX_USERS = 100;
const int MAX_FOUND = 200;
const int MAX_LOST = 200;
const int MAX_CLAIMS = 400;
const int MAX_LOGIN_ATTEMPTS = 3;
const int MAX_CLAIM_ATTEMPTS = 3;
const int MIN_PASSWORD_LENGTH = 6;

const string STATUS_AVAILABLE = "Tersedia";
const string STATUS_RETURNED = "Dikembalikan";

const int REG_OK = 0;
const int REG_EMPTY_FIELD = 1;
const int REG_USERNAME_HAS_SPACE = 2;
const int REG_DUPLICATE = 3;
const int REG_PASSWORD_SHORT = 4;
const int REG_PHONE_INVALID = 5;
const int REG_FULL = 6;

const int LOGIN_NOT_FOUND = -1;
const int LOGIN_WRONG_PASSWORD = -2;
const int LOGIN_LOCKED = -3;

const int ITEM_OK = 0;
const int ITEM_EMPTY_FIELD = 1;
const int ITEM_INVALID_DATE = 2;
const int ITEM_FUTURE_DATE = 3;
const int ITEM_FULL = 4;

const int CLAIM_APPROVED = 0;
const int CLAIM_WRONG_DETAIL = 1;
const int CLAIM_TOO_MANY_ATTEMPTS = 2;
const int CLAIM_ITEM_NOT_FOUND = 3;
const int CLAIM_NOT_AVAILABLE = 4;
const int CLAIM_OWN_ITEM = 5;
const int CLAIM_STORAGE_FULL = 6;

string userName[MAX_USERS], userPassword[MAX_USERS], userPhone[MAX_USERS];
int userFailed[MAX_USERS];
bool userLocked[MAX_USERS];
int userCount = 0;

int foundReporter[MAX_FOUND];
string foundName[MAX_FOUND], foundCategory[MAX_FOUND], foundLocation[MAX_FOUND], foundDate[MAX_FOUND], foundDescription[MAX_FOUND], foundSecret[MAX_FOUND], foundStatus[MAX_FOUND];
int foundCount = 0;

int lostReporter[MAX_LOST];
string lostName[MAX_LOST], lostCategory[MAX_LOST], lostLocation[MAX_LOST], lostDate[MAX_LOST], lostDescription[MAX_LOST];
int lostCount = 0;

int claimItem[MAX_CLAIMS], claimUser[MAX_CLAIMS], claimFailed[MAX_CLAIMS];
int claimCount = 0;

int searchResult[MAX_FOUND];
int searchResultCount = 0;

// FUNGSI: loadDemoData   (flowchart: "Data kosong?" -> "Isi contoh")
// TUJUAN: menyediakan dua pengguna dan dua barang temuan agar program dapat dicoba tanpa registrasi.
// TODO:
//  [ ] 1. Hanya isi data ini saat userCount, foundCount, dan lostCount masih 0.
//  [ ] 2. Isi dua pengguna pada indeks 0 dan 1, termasuk password, nomor, gagal=0, dan locked=false.
//  [ ] 3. Isi dua barang temuan pada indeks 0 dan 1; reporter harus menunjuk indeks pengguna yang valid.
//  [ ] 4. Isi semua array pasangan untuk setiap barang, beri STATUS_AVAILABLE, lalu atur userCount dan foundCount.
// CONTOH: user "andi" dan barang "Payung" dapat dipakai untuk mencoba menu klaim.
// HATI-HATI: satu record memakai indeks yang sama di semua array; jangan menaikkan count sebelum semua pasangan terisi.
// SELESAI JIKA: [ ] M-UI-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
void loadDemoData() {
    // Kerangka sengaja kosong. Isi bersama pemilik data setelah kontrak dipahami.
}
