 	#include <iostream>
	using namespace std ;

	int main ()
	{
		long int agiln,agilk,agilfakt_iter=1;
		cout << endl ;
		cout << " Menampilkan Rekursif - Faktoyial " << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
		cout << " Masukkan Sebuah Bilangan =5 " ; 
		cout << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
		for (agilk=1 ; agilk<=5 ; agilk++)
		{
			agilfakt_iter = agilfakt_iter * agilk ;
			cout << " Faktorial " << agilk << "! Step By Step = " << agilfakt_iter << endl ;
		}
		cin.get();
	}