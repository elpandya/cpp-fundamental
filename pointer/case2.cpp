#include <iostream>
using namespace std;

struct Barang {
    string nama;
    int harga;
    int stok;
};

// Fungsi untuk mengubah stok barang
void updateStok(Barang* b) {
    cout << "Masukkan stok baru untuk " << b->nama << ": ";
    cin >> b->stok;
}

int main() {
    Barang b1 = {"Pensil", 2000, 50};

    cout << "Data awal:\n";
    cout << "Nama  : " << b1.nama << endl;
    cout << "Harga : " << b1.harga << endl;
    cout << "Stok  : " << b1.stok << endl;

    // Mengirim alamat struct ke fungsi
    updateStok(&b1);

    cout << "\nData setelah update:\n";
    cout << "Nama  : " << b1.nama << endl;
    cout << "Harga : " << b1.harga << endl;
    cout << "Stok  : " << b1.stok << endl;

    return 0;
}