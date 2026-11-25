#include <iostream>
#include <string>
using namespace std;

struct Rectangle {
    double panjang;
    double lebar;
};

// Fungsi untuk menghitung luas
double hitungLuas(Rectangle rect) {
    return rect.panjang * rect.lebar;  // Akses anggota dalam fungsi
}

// Fungsi untuk menghitung keliling
double hitungKeliling(Rectangle rect) {
    return 2 * (rect.panjang + rect.lebar);  // Akses anggota dalam fungsi
}




// Fungsi untuk menampilkan info rectangle
void tampilkanInfo(Rectangle rect) {
    cout << "Panjang : " << rect.panjang << " cm" << endl;
    cout << "Lebar   : " << rect.lebar << " cm" << endl;
    cout << "Luas    : " << hitungLuas(rect) << " cm²" << endl;
    cout << "Keliling: " << hitungKeliling(rect) << " cm" << endl;
}

int main() {
    Rectangle persegiPanjang = {10.5, 5.2};
    
    cout << "INFORMASI PERSEGI PANJANG" << endl;
    tampilkanInfo(persegiPanjang);
    
    cout << "\nSetelah diperbesar 2x:" << endl;
    persegiPanjang.panjang *= 2;
    persegiPanjang.lebar *= 2;
    tampilkanInfo(persegiPanjang);
    
    return 0;
}
