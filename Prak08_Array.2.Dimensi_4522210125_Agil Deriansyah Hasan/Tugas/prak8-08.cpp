#include<iostream>
using namespace std ;

int main() {
    int baris, kolom,i,j;

    cout << "Masukkan jumlah baris matriks: ";cin >> baris;

    cout << "Masukkan jumlah kolom matriks: ";cin >> kolom;

    int matrix[baris][kolom];

   cout << "Masukkan elemen matriks " << baris << "x" << kolom << endl ;
    for (i = 0; i < baris; ++i) {
        for (j = 0; j < kolom; ++j) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matriks yang diinput:" << endl ;
    for (i = 0; i < baris; ++i) {
        for (j = 0; j < kolom; ++j) {
            cout << matrix[i][j] << '\t';
        }
        cout << '\n';
    }

    // Menghitung dan menampilkan jumlah setiap kolom
    cout << "Jumlah setiap kolom:" << endl ;
    for (j = 0; j < kolom; ++j) {
        int jumlah = 0;
        for (i = 0; i < baris; ++i) {
            jumlah += matrix[i][j];
        }
        cout << "Kolom " << j + 1 << ": " << jumlah << endl ;
    }

    return 0;
}
