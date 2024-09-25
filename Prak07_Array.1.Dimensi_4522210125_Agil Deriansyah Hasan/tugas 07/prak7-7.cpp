#include <iostream>
using namespace std ;

int main() {
    int angka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int angkaGenap[10];
    int angkaGanjil[10];
    int countGenap = 0;
    int countGanjil = 0;
	int i ;

    for ( i = 0; i < 10; i++) {
        if (angka[i] % 2 == 0) {
            angkaGenap[countGenap] = angka[i];
            countGenap++;
        } else {
            angkaGanjil[countGanjil] = angka[i];
            countGanjil++;
        }
    }

    // Tampilkan angka genap
    cout << "Angka Genap: " << endl ;
    for (i = 0; i < countGenap; i++) {
        cout << angkaGenap[i] << " " <<  endl ;
    }
    cout << endl;

    // Tampilkan angka ganjil
    cout << "Angka Ganjil: " << endl ;
    for (i = 0; i < countGanjil; i++) {
        cout << angkaGanjil[i] << " " <<  endl ;
    }
    cout << endl;

    return 0;
}
