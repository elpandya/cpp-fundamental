#include <iostream>
using namespace std;

// Membuat struct Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    const int MAX_MHS = 100;      // Maksimum jumlah mahasiswa yang bisa disimpan
    Mahasiswa data[MAX_MHS];     // Array of struct
    int n;                        // Jumlah mahasiswa yang ingin diinput

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // Validasi sederhana
    if (n > MAX_MHS || n <= 0) {
        cout << "Jumlah tidak valid." << endl;
        return 1;
    }

    // INPUT DATA MAHASISWA
    cout << "\n=== INPUT DATA MAHASISWA ===\n";
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;

        cout << "Nama (tanpa spasi): ";
        cin >> data[i].nama;   // kalau mau pakai spasi, bisa diganti getline

        cout << "Umur: ";
        cin >> data[i].umur;

        cout << "IPK : ";
        cin >> data[i].ipk;

        cout << endl;
    }

    // MENAMPILKAN DATA MAHASISWA
    cout << "\n=== DAFTAR MAHASISWA ===\n";
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : " << data[i].nama << endl;
        cout << "Umur : " << data[i].umur << endl;
        cout << "IPK  : " << data[i].ipk << endl;
        cout << endl;
    }

    return 0;
}
