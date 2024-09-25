
#include<iostream>
using namespace std ;

int main ()
{
	char nama[]="Agil Deriansyah Hasan" ;
	cout << " Tulisannya adalah " << nama << endl ;
	cout << endl;
	cout << " Karakter Pertama Diganti Dengan -S-" << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	nama [0] ='S' ;
	cout << " Hasil setelah Diganti Menjadi : " << nama << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	cin.get();
}