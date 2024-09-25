#include <iostream>
using namespace std;

int main() {
	int agilBil;
	int bilangan;
    int agilting;
    int agil = 1;
	cout << "Masukkan jumlah bilangan: "; cin >> agilBil;
    do {
        cout << "Masukkan bilangan ke-" << agil << ": "; cin >> bilangan;

        if (agil == 1) {
            agilting = bilangan;
        } else {
            // Perbandingan dengan bilanganTertinggi
            if (bilangan > agilting) {
					agilting = bilangan;
            }
        }

        agil++;
    } while (agil <= agilBil);
    cout << "Bilangan tertinggi adalah: " << agilting << endl;

    return 0;
}