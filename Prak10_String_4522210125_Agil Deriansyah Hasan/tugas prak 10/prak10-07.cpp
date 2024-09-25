#include <iostream>
#include <sstream>

using namespace std;

int main() {
    // Inisialisasi data
    int vint = 100;
    double vdbl = 25.8976;
    string vstring = "abcdef";

    // Membuat objek stringstream untuk memformat keluaran
    stringstream formattedOutput;

    // Memasukkan data ke dalam stringstream
    formattedOutput << "vint=" << vint << ", vdbl=" << vdbl << ", vstring=\"" << vstring << "\"";

    // Mendapatkan string hasil format
    string result = formattedOutput.str();

    // Menampilkan hasil
    cout << result << endl;

    return 0;
}
