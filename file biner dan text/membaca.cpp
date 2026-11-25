#include <fstream>
#include <iostream>
using namespace std;

int main() {

    fstream file;
    file.open("mahasiswa.txt");
    // jika sudah ada filenya maka akan berhasil terbuka / true
    // jika tidak ada filenya maka tidak akan terbuka/  false

    if (file.is_open()) {
        string baris;
        int nomorBaris = 1;

        // Membaca setiap baris hingga akhir file
        while (getline(file, baris)) {
            cout << nomorBaris << ": " << baris << endl;
            nomorBaris++;
        }

        file.close();
    } else {
        cout << "Gagal membuka file." << endl;
        cout<<"membuat file baru "<<endl;
        file.open("mahasiswa.txt", ios::out | ios::app);
        file<<"hello"<<endl;
        file<<"hello"<<endl;
        file<<"hello"<<endl;
    }

    return 0;
}