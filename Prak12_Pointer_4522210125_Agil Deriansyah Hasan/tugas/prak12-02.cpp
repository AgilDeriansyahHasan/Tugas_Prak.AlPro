#include <iostream>
using namespace std;

void tampilkanBulan(const char* namaBulan) {
    cout << "Bulan: " << namaBulan << endl;
}

int main() {
    int nomorBulan;

    cout << "Masukkan nomor bulan (1-12): "; cin >> nomorBulan;

    const char* namaBulan[] = {
        "Januari", "Februari", "Maret", "April",
        "Mei", "Juni", "Juli", "Agustus",
        "September", "Oktober", "November", "Desember"
    };

    // Menggunakan pointer untuk menampilkan bulan
    if (nomorBulan >= 1 && nomorBulan <= 12) {
        tampilkanBulan(namaBulan[nomorBulan - 1]);
    } else {
        cout << "Nomor bulan tidak valid." << endl;
        return 1;
    }

    return 0;
}
