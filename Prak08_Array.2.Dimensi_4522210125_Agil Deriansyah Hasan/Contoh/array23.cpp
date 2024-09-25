/* Nama : Agil Deriansyah Hasan
   Nim : 4522210125
   Date : 16  November 2022 
   Materi : Array
*/

#include <iostream>
using namespace std;
int agil_A[10][10], agil_B[10][10], agil_C[10][10];
int agil_iA, agil_iB, agil_jA, agil_jB;

int main ()
{
	int agil_i,agil_j,agil_k;
	cout << "Menampilkan Array/larik multi dimensi" << endl;
	cout << "Menampilkan Besar Baris dan Kolom Matriks A" << endl;
	cout << "~~~~~~~~~~~~~~~" << endl;
	cout << "Masukkan Jumlah Baris Matriks A = "; cin >> agil_iA;
	cout << "Masukkan Jumlah Kolom Matriks A = "; cin >> agil_jA;
	cout << "~~~~~~~~~~~~" << endl;
	cout << "Masukkan Jumlah Baris Matriks B = "; cin >> agil_iB;
	cout << "Masukkan Jumlah Kolom Matriks B = "; cin >> agil_jB;
	cout << "~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Menginput Isi Elemen Array Matriks A" << endl;
	for (agil_i=0; agil_i<agil_iA; agil_i++)			{
		for (agil_j=0; agil_j<agil_jA; agil_j++)	{
			cout << "Masukkan Isi Elemen ["<<agil_i+1<<"]["<<agil_j+1<<"] : ";
			cin >> agil_A[agil_i][agil_j];		}	}
	cout << endl;
	cout << "Menginput isi elemen array matriks b" << endl;
	for (agil_i=0; agil_i<agil_iB; agil_i++)			{
		for (agil_j=0; agil_j<agil_jB; agil_j++)	{
			cout << "Masukkan Isi Elemen{"<<agil_i+1<<"}{"<<agil_j+1<<"} : ";
			cin >> agil_B[agil_i][agil_j];	}	}
	cout << endl;
	cout << endl;
	cout << "Tampilan Isi Elemen Array Matriks A" << endl;
	cout << "~~~~~~~~~~~~~" << endl;
	cout << endl;
	for (agil_i=0; agil_i<agil_iA; agil_i++)			{
		for (agil_j=0; agil_j<agil_jA; agil_j++)
			cout << agil_A[agil_i][agil_j] << "    ";
			cout << endl;			}
	cout << endl;
	cout << endl;
	cout << "Tampilan Isi Elemen Array Matriks B" << endl;
	cout << "~~~~~~~~~~~~~" << endl;
	cout << endl;
	for (agil_i=0; agil_i<agil_iB; agil_i++)		{
		for (agil_j=0; agil_j<agil_jB; agil_j++)
			cout << agil_B[agil_i][agil_j] << "    ";
			cout << endl;			}
	//Perkalian Matriks
	for (agil_i=0; agil_i<agil_iA; agil_i++)
		for (agil_j=0; agil_j<agil_jA; agil_j++)
			for (agil_k=0; agil_k<agil_jA; agil_k++)
			{
				agil_C[agil_i][agil_j] = agil_C[agil_i][agil_j] + agil_A[agil_i][agil_k] * agil_B[agil_k][agil_j];
			}
	cout << endl;
	cout << endl;
	cout << "Tampilan Hasil Kali Dua Matriks " << endl;
	cout << "~~~~~~~~~~~~" << endl;
	for (agil_i=0; agil_i<agil_iA; agil_i++)
	{
		for (agil_j=0; agil_j<agil_jB; agil_j++)
		{
			cout << agil_C[agil_i][agil_j] << "     ";
		}
		cout << endl;
	}
	cin.get();
}