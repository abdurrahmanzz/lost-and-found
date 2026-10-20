/*
 * FILE:         src/main.cpp
 * PEMILIK:      Anggota D
 * TUJUAN:       Menyatukan modul dalam urutan ketergantungan dan menjalankan menu utama.
 * BERGANTUNG:   semua modul .cpp yang disertakan di bawah
 * DIPAKAI OLEH: sistem operasi saat program dijalankan
 * URUTAN KERJA: include modul, load data, menu tamu, menu pengguna
 * KONSEP YANG DIPERLUKAN: while, if/else, int, bool, fungsi
 */
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <ctime>

using namespace std;

#include "models/data.cpp"
#include "utils/string_utils.cpp"
#include "utils/date_utils.cpp"
#include "utils/id_utils.cpp"
#include "ui/input_helpers.cpp"
#include "storage/storage.cpp"
#include "auth/auth.cpp"
#include "items/items.cpp"
#include "claims/claims.cpp"
#include "ui/auth_screen.cpp"
#include "ui/item_screen.cpp"
#include "ui/claim_screen.cpp"

// FUNGSI: main   (flowchart: "Mulai" -> "loadAll" -> "Menu tamu/pengguna" -> "Keluar")
// TUJUAN: memulai data, mengarahkan layar, dan menjaga menu berjalan sampai pengguna keluar.
// TODO:
//  [ ] 1. Panggil loadAll; jika userCount 0, panggil loadDemoData agar contoh dapat dipakai.
//  [ ] 2. Ulangi menu tamu: Register, Login, Keluar; ambil pilihan dengan readInt.
//  [ ] 3. Saat Login berhasil (hasil >= 0), ulangi menu pengguna: Lapor temuan, Klaim barang, Laporan saya, Logout.
//  [ ] 4. Panggil fungsi layar sesuai pilihan; layar yang sukses mengubah data bertugas memanggil saveAll.
//  [ ] 5. Saat Logout kembali ke menu tamu; saat Keluar hentikan loop dan return 0.
// CONTOH: pilih 3 di menu tamu -> program berhenti normal.
// HATI-HATI: indeks 0 adalah login sukses; main tidak boleh berisi logika bisnis atau memakai cin/cout langsung.
// SELESAI JIKA: [ ] M-UI-1 lulus.
// JANGAN ubah nama, parameter, atau tipe return fungsi ini tanpa lapor semua pemilik modul.
int main() {
    loadAll();
    if (userCount == 0) {
        loadDemoData();
    }

    bool isRunning = true;
    while (isRunning) {
        printHeader("Lost and Found Management System");
        int guestChoice = readInt("1. Register\n2. Login\n3. Keluar\nPilih: ", 1, 3);

        if (guestChoice == 1) {
            showRegisterScreen();
        } else if (guestChoice == 2) {
            int userIndex = showLoginScreen();
            while (userIndex >= 0) {
                printHeader("Menu Pengguna");
                int userChoice = readInt("1. Lapor temuan\n2. Klaim barang\n3. Laporan saya\n4. Logout\nPilih: ", 1, 4);
                if (userChoice == 1) {
                    showReportFoundScreen(userIndex);
                } else if (userChoice == 2) {
                    showClaimFlowScreen(userIndex);
                } else if (userChoice == 3) {
                    showMyReportsScreen(userIndex);
                } else {
                    userIndex = -1;
                }
            }
        } else {
            isRunning = false;
        }
    }

    return 0;
}
