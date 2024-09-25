//contoh 04 - Praktikum Algoritma & Pemrograman

	#include <iostream>
	#include <cmath>
	using namespace std;
	
	int main()
	{
	int agil ;
	float deri ;
	cout<< endl ;
	cout << "  Menampilkan nilai agil dan deri    " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << " Masukkan Nilai agil =  " ;
	cin >> agil ;
	agil = agil + 22 ;
	deri = sqrt (agil) ;
	cout << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	cout << " Nilai agil adalah  " << agil << endl ;
	cout << " Nilai deri adalah  " << deri << endl ;
	cin.get();
	}