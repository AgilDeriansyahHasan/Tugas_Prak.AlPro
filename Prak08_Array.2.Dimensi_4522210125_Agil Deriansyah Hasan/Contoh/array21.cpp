#include <iostream>
using namespace std ;

int main () {
int nilai[4][4] ;
int agil_i,agil_j;
cout << endl;
cout << " Menampilkan Array 2 Dimensi " << endl;
cout << " Dengan Ordo 4x4 Melalui inputan " << endl ;
cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
cout << endl ;
cout << endl ;
for (agil_i=0 ; agil_i<4 ; agil_i++)		{
	for (agil_j=0 ; agil_j<4 ; agil_j++)	{
		cout << " Masukkan isi elemen[" << agil_i+1 <<"]["<< agil_j+1 << "] : " ;
		cin >> nilai[agil_i][agil_j] ;	 }   	}
cout << endl;
cout << " tampilan isi elemen " << endl ;
cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << endl ;
for (agil_i=0 ; agil_i<4 ; agil_i++) {
	for (agil_j=0 ; agil_j<4 ; agil_j++) 
	cout << nilai[agil_i][agil_j] << "  " ;
cout << endl ; }
cin.get() ;
}