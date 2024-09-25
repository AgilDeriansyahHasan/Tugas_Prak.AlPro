#include <iostream>
using namespace std ;

int main ()
{
int agil ;
cout << endl ;
cout << "   Menampilkan Angka 1 s.d 7  " << endl;
cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
cout << endl ;
cout << " Masukkan Nilai yang anda sukai ( 1/2/3/4/5/6/7 ) = " ; cin >> agil ;
switch (agil)
{	
case 1 : cout << " SATU " << endl ; break ;
case 2 : cout << " DUA " << endl ; break ;
case 3 : cout << " TIGA " << endl ; break ;
case 4 : cout << " EMPAT " << endl ; break ;
case 5 : cout << " LIMA " << endl ; break ;
case 6 : cout << " ENAM " << endl ; break ;
case 7 : cout << " TUJUH " << endl ; break ;
default : cout << " Hari Tidak Valid" << endl ;
 }
cin.get();
} 