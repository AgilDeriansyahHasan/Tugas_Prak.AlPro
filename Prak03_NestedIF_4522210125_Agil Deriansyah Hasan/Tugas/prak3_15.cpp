#include <iostream>
using namespace std;

int main() {

    int agil ;
	int diskon ;
    cout << "Masukkan total harga pesanan: "; cin >> agil ;

    if (agil > 150000) {
        // Menghitung diskon 10%
        diskon = 0.10 * agil;

        if (agil > 100000) {
            cout << "Selamat Anda mendapatkan souvenir!" << endl;
        }

        // Menampilkan total harga setelah diskon
        cout << "Total harga setelah diskon: " << diskon << endl;
    } else {
        cout << "Total harga pesanan: " << agil << endl;
    }

    return 0;
}