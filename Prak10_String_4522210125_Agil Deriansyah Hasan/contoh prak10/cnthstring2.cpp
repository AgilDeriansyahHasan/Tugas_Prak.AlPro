
#include<iostream>
using namespace std ;

int main() 
{
	char nama1[] = " Agil Deriansyah Hasan " ;
	char nama2[30] ;
	int agil ;
	
	cout << " Menyalin atau mengocpy STRING " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	for (agil=0; nama1[agil]; agil++)
		nama2[agil] = nama1[agil];
		nama2[agil] = '\0';
		cout << " Tulisan Asli yang Pertama adalah : " << nama1 << endl ;
		cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
		cout << " Tulisan Hasil dari Menyalin/Mengcopy : " << nama2 << endl ;
		cout << endl ;
		cin.get();
}