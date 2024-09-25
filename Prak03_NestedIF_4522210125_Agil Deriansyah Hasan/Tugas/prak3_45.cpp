#include <iostream>
using namespace std;

int main() {
    char pilihan;
    int agil1, agil2, agil3, total;

    // Meminta pengguna memilih antara Seri atau Paralel
    cout << "Pilih rangkaian (S/Seri atau P/Paralel): "; cin >> pilihan;

    switch (pilihan) {
        case 'S':
        case 's':
            cout << "Masukkan nilai resistansi r1: "; cin >> agil1;
            cout << "Masukkan nilai resistansi r2: "; cin >> agil2;
            cout << "Masukkan nilai resistansi r3: "; cin >> agil3;

            // Menghitung total resistansi dalam rangkaian Seri
            total = agil1 + agil2 + agil3;

            // Menampilkan hasil perhitungan
            cout << "Total RGAB dalam Seri adalah: " << total << endl;
            break;

        case 'P':
        case 'p':
            cout << "Masukkan nilai resistansi r1: "; cin >> agil1;
            cout << "Masukkan nilai resistansi r2: "; cin >> agil2;
            cout << "Masukkan nilai resistansi r3: "; cin >> agil3;

            // Menghitung total resistansi dalam rangkaian Paralel 
            total = agil1 * agil2 * agil3 ;
            
            // Menampilkan hasil perhitungan
            cout << " Total RGAB dalam Paralel adalah : " << total << endl ;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}	