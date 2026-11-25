#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaFile = "laporan_2025.pdf";

    // Ambil nama tanpa ekstensi (asumsikan ekstensi 3 karakter + titik)
    string namaTanpaEkstensi = namaFile.substr(0, namaFile.size() - 4);
    cout << "Nama file: " << namaTanpaEkstensi << endl;

    // Ambil hanya tahunnya, mulai dari indeks ke-8, sepanjang 4 karakter
    string tahun = namaFile.substr(8, 4);
    cout << "Tahun: " << tahun << endl;

    // Ambil substring dari tengah sampai akhir (hanya ekstensi)
    // Cari posisi titik terlebih dahulu
    size_t posisiTitik = namaFile.find('.');
    if (posisiTitik != string::npos) {
        string ekstensi = namaFile.substr(posisiTitik + 1);
        cout << "Ekstensi: " << ekstensi << endl;
    }

    return 0;
}

