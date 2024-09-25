/* 
	Nama		: Agil Deriansyah Hasan
	NPM			: 4522210125
	Mata Kuliah : Prak. Algoritma dan Pemrograman
	Kelas       : B

Si Hotel 

Menggunakan Perintah Inputan

Materi :
-Selections/Seleksi
-Repetation/Pengulangan
-Array
-Function
-String/File
-Selection Sort - Descending */
	
#include <iostream> //Akses untuk Fungsi-Fungsi input/output
#include <string.h> //Akses Untuk Fungsi Manipulasi String 
using namespace std; //Untuk Mensederhanakan Penulisan

//variabel Global
//Array
char Nama[30], No_Telp[15], Email[30], Jumlah_Tamu[2], Tipe[10],Tipe_Kasur[20],Id_Kamar[5], pembayaran[20],menginap[20],hargakmr[10], harga[30], menu[20] ;
void Menu(); // Menu Utama Program

//Function : Menampilkan displayMenu Utama
void displayMenu() {
	cout << endl;
	cout << "==============================================================================" << endl;
	cout << "|                    Selamat Datang Di Hotel Deriansyah                      |" << endl;
	cout << "|                  Jln.Bintara14, No 25 Telp 087833160661                    |" << endl;
	cout << "|        Jl. Kp.Bojong, Kec. Bekasi Bar., Kota Bekasi, Jawa Barat, 17134     |" << endl;
	cout << "==============================================================================	" << endl;
	Menu(); //Memanggil Fungsi Menu untuk kembali Ke Menu Utama
}

//Function : Memamnggil Fungsi dari Hasil Pemesanan Kamar 
void Hasil_Pilih(){
	char NamaK[30], TipeK[20] ; //Variabel Lokal untuk menyimpan duplikat nama dan tipe
	cout << endl;
	cout << "==================================================" << endl;
	cout << "|               Data Pemesanan Kamar             |" << endl;
	cout << "==================================================" << endl;
	//String : Menduplikat nama ke NamaK, lalu mengubah NamaK menjadi huruf besar semua
	strcpy(NamaK,Nama);
	//String : Menduplikat nama ke TipeK, lalu mengubah TipeK menjadi huruf besar semua
	strcpy(TipeK,Tipe);
	strupr(TipeK);
	strupr(NamaK);
	cout << " Nama          : " << NamaK << endl;
	cout << " No Telp       : " << No_Telp << endl;
	cout << " Email         : " << Email << endl;
	cout << " Jumlah Tamu   : " << Jumlah_Tamu << endl;
	cout << " Tipe Kamar    : " << TipeK << endl;
	cout << " ID Kamar      : " << Id_Kamar << endl;
	cout << " Tipe Kasur    : " << Tipe_Kasur << endl;
	cout << " Menginap      : " << menginap << endl;
	cout << " Total Harga   : " << hargakmr << endl;
	cout << endl;
	Menu();}

//Fungcion : Memanggil Fungsi Untuk Melihat dan Memilih Tipe Kamar
void Pemilihan(){
	cout << "------------------------------------------------------------" << endl;
    cout << "|  No  |       Tipe Kamar        ||         Harga         |" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "|  1   |          Anggrek        ||    Rp. 500.000/Mlm    |" << endl;
    cout << "|  2   |          Mawar          ||    Rp. 300.000/Mlm    |" << endl;
    cout << "|  3   |          Melati         ||    Rp. 400.000/Mlm    |" << endl;
    cout << "|  4   |         Matahari        ||    Rp. 200.000/Mlm    |" << endl;
    cout << "|  5   |         Lavender        ||    Rp. 150.000/Mlm    |" << endl;
    cout << "------------------------------------------------------------" << endl;
	cout << endl ;
	cout << " Tipe Kamar           : "; fflush(stdin); cin.getline(Tipe, sizeof(Tipe));
	cout << " Tipe Kasur           : "; fflush(stdin); cin.getline(Tipe_Kasur, sizeof(Tipe_Kasur));
	cout << " ID Kamar             : "; fflush(stdin); cin.getline(Id_Kamar, sizeof(Id_Kamar));
	cout << " Menginap Berapa Hari : "; fflush(stdin); cin.getline (menginap, sizeof(menginap));
    cout << " Total Harga Kamar    : "; fflush(stdin); cin.getline (hargakmr, sizeof(hargakmr));
	cout << endl;
	Hasil_Pilih(); }

//Funcion : Memangil Fungsi Untuk Mengisi Form Biodata 
void Form_Kamar(){
	cout << "==================================================" << endl;
	cout << "|            Pengisian Form Biodata Diri         |" << endl;
	cout << "==================================================" << endl;
	cout << " Nama        : "; fflush(stdin); cin.getline(Nama, sizeof(Nama));
	cout << " No Telp     : "; fflush(stdin); cin.getline(No_Telp, sizeof(No_Telp));
	cout << " Email       : "; fflush(stdin); cin.getline(Email, sizeof(Email));
	cout << " Jumlah Tamu : "; fflush(stdin); cin.getline(Jumlah_Tamu, sizeof(Jumlah_Tamu));
	cout << "==================================================" << endl;
	cout << endl;
	Pemilihan();}

//Function : Memamnggil Fungsi dari Hasil Pemesanan Makanan 
void Hasil_Makan(){
	char NamaK[30], menuK[20];
	cout << endl ;
	cout << "==================================================" << endl;
	cout << "|              Data Pemesanan Makanan            |" << endl;
	cout << "==================================================" << endl;
	//String : Menduplikat nama ke NamaK, lalu mengubah NamaK menjadi huruf besar semua
	strcpy(NamaK,Nama);
	//String : Menduplikat menu ke MenuK, lalu mengubah MenuK menjadi huruf besar semua
	strcpy(menuK,menu);
	strupr(menuK);
	strupr(NamaK);
	cout << " Nama        : " << NamaK << endl;
	cout << " No Telp     : " << No_Telp << endl;
	cout << " Makanan     : " << menuK << endl;
	cout << " Tipe Kamar  : " << Tipe << endl;
	cout << " ID Kamar    : " << Id_Kamar << endl;
	cout << endl;
	Menu();}

//Funcion : Memangil Fungsi Untuk Mengisi Form Memesan Makanan
void pesan_makanan(){
	cout << " ================================================== " << endl;
	cout << " |  Silahkan Mengisi Form Untuk Memesan Makanan   | " << endl;
	cout << " ================================================== " << endl;
	cout << " Nama        : "; fflush(stdin); cin.getline(Nama, sizeof(Nama));
	cout << " No Telp     : "; fflush(stdin); cin.getline(No_Telp, sizeof(No_Telp));
	cout << " Makanan     : "; fflush(stdin); cin.getline(menu, sizeof(menu));
	cout << " Tipe Kamar  : "; fflush(stdin); cin.getline(Tipe, sizeof(Tipe));
	cout << " ID Kamar    : "; fflush(stdin); cin.getline(Id_Kamar, sizeof(Id_Kamar));
	Hasil_Makan();}

//Fungcion : Memanggil Fungsi Untuk Melihat dan Memilih Makanan dari Menu
void Makanan(){
	int jlmdt = 5 ;
	int a,b,c,p;
	int deri[jlmdt] = {20000, 25000, 30000, 50000, 40000}; //Array
	cout << endl;
	cout << "================================================" << endl;
	cout << "                 Menu Makanan                   " << endl;
	cout << "================================================" << endl;
    cout << "| No |     Makanan        ||       Harga       |" << endl;
	cout << "================================================" << endl;
    cout << "| 1 |    Nasi Goreng      ||  Rp. 20.000       |" << endl;
    cout << "| 2 |    Satay            ||  Rp. 25.000       |" << endl;
    cout << "| 3 |    Soto Betawi      ||  Rp. 30.000       |" << endl;
    cout << "| 4 |    Sop Buntut       ||  Rp. 50.000       |" << endl;
    cout << "| 5 |    Ayam Bakar Madu  ||  Rp. 40.000       |" << endl;
	cout << "================================================" << endl;
	cout << endl;
	cout << " ================================================== " << endl;
	cout << " |       Sebelum Pengurutan Harga Makanan         | " << endl;
	cout << " ================================================== " << endl;
	//Repetation (for) : Mencetak nilai akhir sebelum dilakukan pengurutan
	for (a = 0; a <= jlmdt-1; a++) 
		cout << deri[a] << " " ;
		cout << endl;
	for(b = 1; b <= jlmdt-1; b++) {
		a=b ;
		c=deri[a];
		while (a >= 0 && deri [a-1] < c) {
			deri[a] = deri [a-1];
			a--; }
		deri[a] = c; }
		cout << " ================================================== " << endl;
		cout << " |      Pengurutan Descending Harga Makanan       | " << endl;
		cout << " ================================================== " << endl;
	//Repetation (for) : Mencetak nilai akhir setelah dilakukan pengurutan
		for(a = 0; a <= jlmdt-1; a++) //Selection Sort Descending 
		cout << deri[a] << " " ;
		cout << endl ;
	cout << endl;
	pesan_makanan(); }	

//Function : Menu utama	
void Menu() {
	int pilih;
	cout << "==================================================" << endl;
	cout << "|                   Menu Pilihan                 |" << endl;
	cout << "==================================================" << endl;
	cout << "| 1. Pesan Kamar                                 |" << endl;
	cout << "| 2. Pesan Makanan Hotel                         |" << endl; 
	cout << "| 3. Keluar Dari Hotel                           |" << endl;
	cout << "==================================================" << endl;
	cout << " Masukkan angka yang dipilih [1/2/3] : "; cin >> pilih;
	cout << endl;
	//Selection (switch) : Memilih angka untuk proses function selanjutnya
	switch(pilih){
		case 1: Form_Kamar(); break;
		case 2: Makanan(); break;
		default: cout << "         Keluar Dari Hotel                 " << endl ;
			cout << " Terima Kasih Telah Menginap Di Hotel Deriansyah" << endl;
	cout << endl; } }

int main() {
	cout << endl;
	cout << "===========================================================" << endl;
	cout << "|     Tugas Besar Praktikum Algoritma dan Pemrograman     |" << endl;
	cout << "===========================================================" << endl;
	cout << "|                    Agil Deriansyah Hasan                |" << endl;
	cout << "|                        4522210125                       |" << endl;
	cout << "===========================================================" << endl;
	displayMenu();//Memanggil Fungsi displayMenu untuk menuju ke proses selanjutnya
	cin.get();}