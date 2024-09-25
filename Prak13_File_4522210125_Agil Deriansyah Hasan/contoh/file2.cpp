#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/*Mendeklerasi Array sebagai penyangga*/
	const int maks=80 ;
	char agil[maks+1];
	
	ifstream file_masukan("Bio.txt");
	
	/*Membaca Seluruh Data*/
	while(file_masukan)
	{
		file_masukan.getline(agil,maks);
		cout << agil << endl ;
	}
	
	/*Menutup File*/
	file_masukan.close();
}