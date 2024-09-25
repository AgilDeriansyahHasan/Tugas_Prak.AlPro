#include<iostream>
using namespace std ;

int main() {
    const int size = 5;
	int i,j ;
    char segitiga[size][2 * size - 1];

    cout << "Masukkan huruf untuk segitiga sama kaki terbalik :" << endl ;
    for (i = 0; i < size; ++i) {
        for (j = 0; j < 2 * size - 1; ++j) {
            if (j >= i && j < 2 * size - 1 - i) {
                cout << "Masukkan huruf baris " << i + 1 << " kolom " << j + 1 << ": ";
                cin >> segitiga[i][j];
            } else {
                segitiga[i][j] = ' ';
            }
        }
    }
	cout << "Segitiga sama kaki terbalik yang diinput:" << endl ;
    for (i = 0; i < size; ++i) {
        for (j = 0; j < 2 * size - 1; ++j) {
            cout << segitiga[i][j];
        }
		cout << '\n';
    }

    return 0;
}