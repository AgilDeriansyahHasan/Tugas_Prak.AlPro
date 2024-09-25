#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/*Mendefinisikan Objek*/
	ofstream file_keluaran;
	
	/*Membuka file*/
	file_keluaran.open("BIO_4522210125_AGIL_DERIANSYAH_HASAN.txt");
	cout<<"Sedang Merekam ... " << endl ;
	file_keluaran << "Nama 		: Agil Deriansyah Hasan	" << endl ;
	file_keluaran << "Alamat 	: Jl Bintara14 			" << endl ;
	file_keluaran << "Npm	 	: 4522210125			" << endl ;
	file_keluaran << "Usia		: 19 Tahun				" << endl ;
	file_keluaran << "Hobby		: Bulu Tangkis			" << endl ;
	file_keluaran << "Status	: Pelajar				" << endl ;
	
	/*Menutup file*/
	file_keluaran.close();
}