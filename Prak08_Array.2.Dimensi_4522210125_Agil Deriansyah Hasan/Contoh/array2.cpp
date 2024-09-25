#include <iostream>
using namespace std ;

int main ()
{
	int Nilai [3][4] = {{11,22,33,44},{63,11,66,7},{22,28,11,7}} ;
	int agil_i,agil_j ; 
	cout << endl ;
	cout << " Menampilkan Array 2 Dimensi " << endl ;
	cout << " Dengan Ordo 3x4		  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	cout << endl ;
	cout << endl ;
	for (agil_i=0 ; agil_i<3;agil_i++)
	{
		for (agil_j=0; agil_j<4;agil_j++)
	cout << Nilai [agil_i][agil_j] << " " ;
	cout << endl ;
	}
	cin.get() ;
}