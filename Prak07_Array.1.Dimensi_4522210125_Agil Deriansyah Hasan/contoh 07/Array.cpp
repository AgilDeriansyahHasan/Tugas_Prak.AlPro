
	#include <iostream>
	using namespace std ;
	
	int main () 
{
		const int agilDt = 3 ;
		int Nilai [agilDt] = {22,7,1966} ;
		int agil, Total = 0 ;
		cout << endl;
		cout << " Menginput Array 1 Dimensi " << endl;
		cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
		for( agil=0 ; agil < agilDt ; agil++ )
		{
			cout << " Isi Elemen KE- " << agil+1 << ":" << Nilai[agilDt] << endl;
			Total = Total + Nilai[agil] ;
		}
		cout << endl ;
		cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
		cout << " Total dari Penjumlahan = " << Total << endl;
		cin.get();
}