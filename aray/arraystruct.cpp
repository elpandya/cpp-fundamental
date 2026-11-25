#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    float ipk;
};

int main() {
    const int jumlah = 3;
    Mahasiswa mhs[jumlah];
    
    // Input data mahasiswa
    for(int i = 0; i < jumlah; i++) {
        cout << "Masukkan data mahasiswa " << i+1 << ":" << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "NIM: ";
        cin >> mhs[i].nim;
        cout << "IPK: ";
        cin >> mhs[i].ipk;
        cout << endl;
    }
    
    // Menampilkan data dan mencari IPK tertinggi
    float maxIPK = 0;
    string namaTerbaik;
    
    cout << "Data Semua Mahasiswa:" << endl;
    for(int i = 0; i < jumlah; i++) {
        cout << "Nama: " << mhs[i].nama << ", NIM: " << mhs[i].nim 
             << ", IPK: " << mhs[i].ipk << endl;
        
        if(mhs[i].ipk > maxIPK) {
            maxIPK = mhs[i].ipk;
            namaTerbaik = mhs[i].nama;
        }
    }
    
    cout << "\nMahasiswa dengan IPK tertinggi: " << namaTerbaik 
         << " (IPK: " << maxIPK << ")" << endl;
    
    return 0;
}