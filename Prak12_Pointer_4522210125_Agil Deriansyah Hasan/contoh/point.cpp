/* Nama : Agil Deriansyah Hasan
   Nim : 4522210125
   Date : 14 Desember 2022 
   Materi : Pointer
*/

#include <iostream>
using namespace std ;

int main()
{
	int agil,*deri,**syah ;
	agil = 44 ;
	//insialisasi pointer deri dengan alamat address agil
	deri = &agil ;
	//insialisasi pointer syah dengan isi variabel dalam gexa 
	syah = &deri ;
	//menampilkan isi variabel, address dan isi variabel dalam hexa agil
	cout << endl ;
	cout << " Isi Variabel [agil - *deri - **syah] = " << agil << " - " << *deri << " - " << *syah << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	cout <<  endl ;
	cout << " Isi Variabel [&agil - &deri - &syah] = " << &agil << " - " << &deri << " - " << &syah << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	cout <<  endl ;
	cout << " Isi Variabel Hexa [agil - deri - syah] = " << agil << " - " << deri << " - " << syah << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	cout <<  endl ;
	cin.get() ;
}
	