#include <iostream>
#include <string.h>
#define agil_n 9
	
	using namespace std;
	
	int agil_i, agil_j, agil_k, agil_x;
	
	void agil1()
	{
		int agil_a[agil_n] = {23, 17, 14, 6, 13, 10, 1, 5, 7};
		cout << "Sebelum Dilakukan Pengurutan" << endl;
		cout << "<==========================>" << endl;
		cout << endl;
		for (agil_i=0; agil_i<=agil_n-1; agil_i++)
			cout << agil_a[agil_i] << "	";
			cout << endl;
			cout << endl;
	}
	void agil2()
	{
		int agil_a[agil_n];
		cout << "Step By Step Dilakukan Pengurutan" << endl;
		cout << "<===============================>" << endl;
		agil_k=0;
		while(agil_k<=agil_n-2){
															{
			agil_j=agil_k;
			agil_i=agil_k+1;
			while(agil_i<=agil_n-1)
			{
				if(agil_a[agil_i] > agil_a[agil_j])
					agil_j=agil_i;
					cout << agil_a[agil_i] << "	";
					agil_i++;
																}
		cout << endl;
		agil_x = agil_a[agil_j];
		agil_a[agil_j] = agil_a[agil_k];
		agil_a[agil_k] = agil_x;
		agil_k++;
		cout << endl; 
		cout << endl;
	}}}
	void agil3()
	{
		int agil_a[agil_n];
		cout << "Sesudah Dilakukan Pengurutan" << endl;
		cout << "<==========================>" << endl;
		cout << endl;
		for(agil_i=0; agil_i<=agil_n-1; agil_i++)
			cout << agil_a[agil_i] << "	";
	}
	int main()
	{
		agil1();
		agil2();
		agil3();
		cout << endl;
		return 0; }