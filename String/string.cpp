#include <iostream>
#include <string>
using namespace std;

int main() {
    int umur;
    string nama;
    
    cout << "Masukkan umur: ";
    cin >> umur;
    
    // SOLUSI: Bersihkan buffer sebelum getline
    cin.ignore();  // Mengabaikan newline yang tertinggal
    
    cout << "Masukkan nama: ";
    getline(cin, nama);
    
    cout << "Umur: " << umur << ", Nama: " << nama << endl;
    
    return 0;
}