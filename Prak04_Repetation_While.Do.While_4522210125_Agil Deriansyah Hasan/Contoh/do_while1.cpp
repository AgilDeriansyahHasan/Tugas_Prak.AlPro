#include <iostream>
using namespace std ;

int main()
{
	 int agil ;
	 agil = 1 ;
	 cout << endl ;
	 cout << "  Menampilkan Tulisan 2 Baris  " << endl ;
	 cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	 cout << endl ;
	do 
	 {
	  cout << " Urutan Yang Ke = " << agil << endl ;
	  cout << " Selamat Datang " << endl ;
	  cout << "---MinGW---" << endl ;
	  cout << endl ;
	  agil++ ;//agil = agil + 1 ;	
	 }
	 while ( agil <= 15) ;
	 cin.get () ;
}