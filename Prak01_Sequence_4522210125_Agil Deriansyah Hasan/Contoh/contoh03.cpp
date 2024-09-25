//contoh 03 - Praktikum Algoritma & Pemrograman
//input tanggal lahir dan bulan lahir

	#include<iostream>
	using namespace std;

	int main ()
	{
	int agil , deri ; 
	cout << endl;
	cout << " Menampilkan Nilai agil dan deri " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	cout << endl ;
	cout << " Masukkan Nilai agil =  " ;  
	cin >> agil ;
	cout << " Masukkan Nilai deri =  " ;
	cin >> deri ;
	agil = agil + 2 ;
	deri = deri - 4 ;
	cout << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	cout << " Nilai agil adalah  " << agil << endl ;
	cout << " Nilai deri adalah  " << deri << endl ;
	cin.get () ;
	}