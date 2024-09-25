#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/*Mendefinisikan Objek*/
	ofstream file_keluaran;
	
	/*Membuka file*/
	file_keluaran.open("bio.txt");
	cout<<"Sedang Merekam ... " << endl ;
	file_keluaran << "Nama 		: Agil Deriansyah Hasan	" << endl ;
	file_keluaran << "Alamat 	: Jl Bintara14 			" << endl ;
	file_keluaran << "Npm	 	: 4522210125			" << endl ;
	file_keluaran << "JK		: Laki-Laki				" << endl ;
	file_keluaran << "Thn Msk	: 2022					" << endl ;
	
	/*Menutup file*/
	file_keluaran.close();
}