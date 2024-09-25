	#include <iostream>
	using namespace std ;

	int main ()
	{
		long int agiln,agilk,agilfakt_iter=1;
		cout << endl ;
		cout << " Menampilkan Rekursif - Faktoial " << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
		cout << " Masukkan Sebuah Bilangan = " ; cin >> agiln  ;
		cout << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
		for (agilk=1 ; agilk<=agiln ; agilk++)
		{
			agilfakt_iter = agilfakt_iter * agilk ;
			cout << " Faktorial Dari " << agilk << "! adalah = " << agilfakt_iter << endl ;
		}
		cin.get();
	}