#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
   // system("cls");
    ofstream file("data_mahasiswa.txt", ios::app);
    
    if (file.is_open()) {
        // Data dari variabel
        string nama = "Budi Santoso";
        int umur = 20;
        double ipk = 3.75;
        string jurusan = "Informatika";
        



        // Menulis data ke file
        file << "Data Mahasiswa" << endl;
        file << "==============" << endl;
        file << "Nama: " << nama << endl;
        file << "Umur: " << umur << " tahun" << endl;
        file << "IPK: " << ipk << endl;
        file << "Jurusan: " << jurusan << endl;
        
        file.close();
        cout << "Data mahasiswa berhasil disimpan." << endl;
    }
    
    return 0;
}
