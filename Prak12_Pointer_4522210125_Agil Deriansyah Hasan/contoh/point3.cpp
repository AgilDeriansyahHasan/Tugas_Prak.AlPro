/* Nama : Agil Deriansyah Hasan
   Nim : 4522210125
   Date : 14 Desember 2022 
   Materi : Pointer
*/

#include <iostream>
using namespace std ;

int main()
{
	int agil=44;
	//insialisasi pointer deri dengan alamat address agil 
	int *deri = &agil ;
	//menampilkan alamat address agil dan has
	cout << endl ;
	cout << " Alamat Address [deri] = " << deri << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	cout << endl ;
	//inisialisasi syah dengan integer dab deri sebagai pointer 
	int syah = *deri;
	// menampilkan syah dan t
	cout << " Isi Variabel syah = " << syah << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	cout << endl ;
	cin.get ();
}