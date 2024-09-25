#include <iostream>
using namespace std;

int main() {
    char golongan;
    int gaji = 4000000;
    int lembur = 50000;
    int total ;
	
    cout << "Masukkan golongan pegawai (A/B): "; cin >> golongan;

    if (golongan == 'A' || golongan == 'a') 
	{
        total = gaji + (5 * lembur);
        cout << "Total gaji dengan lembur adalah: Rp." << total << endl;
    } 
	else 
	{
        total = gaji ;
        cout << "Total gaji  adalah: Rp." << total << endl;
    }

    return 0;
}
