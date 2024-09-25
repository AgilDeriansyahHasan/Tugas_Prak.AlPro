/* Nama : Agil Deriansyah Hasan
   Nim : 4522210125
   Materi : IF......Else
*/

#include <iostream>
using namespace std ;

int main()
{
	 //Deskripsi Variabel
	 int X_N ;
	 int X_P ;
	
	//Deskripsi
	cout << " Masukkan Nilai Bilangan Pembagi (N) = " ; cin >> X_N ;
	cout << " Masukkan Nilai Bilangan Pembagi (P) = " ; cin >> X_P ;
	cout << endl ;
	
	if (X_N % X_P == 0 )
		cout << " Jawabannya adalah Benar " << endl ;
	else 
		cout << " Jawabannya adalah Salah " << endl ;
		
}