#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat = "Saya sedang belajar pemrograman C++.";
    string cariKata = "belajar";

    // Cari posisi substring
    size_t posisi = kalimat.find(cariKata);

    // Periksa hasil pencarian
    if (posisi != string::npos) {
        cout << "Kata '" << cariKata << "' ditemukan pada indeks: " << posisi << endl;
    } else {
        cout << "Kata '" << cariKata << "' tidak ditemukan." << endl;
    }

    return 0;
}
