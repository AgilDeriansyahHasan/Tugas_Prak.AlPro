#include <iostream>
using namespace std ;

int main()
{
	int agil ;
	cout << endl ;
	cout << " Menampilkan Nilai Yang disukai    " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	cout << endl;
	cout << " Masukkan Nilai yang anda sukai ( 1 - 7 ) = " ; cin >> agil ;
	if ( agil == 1 )
		cout << " SATU " << endl ;
	else 
		if ( agil == 2 )
			cout << " DUA " << endl ;
		else
			if ( agil == 3 )
				cout << " TIGA " << endl ;
			else 
				if ( agil == 4 )
					cout << " EMPAT " << endl ;
				else
					if ( agil == 5 )
						cout << " LIMA " << endl ;
					else
						if ( agil == 6 )
							cout << " ENAM " << endl ;
						else
							if ( agil == 7 )
								cout << " TUJUH " << endl ;
							else
								cout << " ANGKA TIDAK Valid " << endl ;
	cin.get() ;	
} 