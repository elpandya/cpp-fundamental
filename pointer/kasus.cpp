#include <iostream>
using namespace std;

// Fungsi untuk mengubah nilai menggunakan pointer
void updateNilai(int* ptrNilai) {
    cout << "Masukkan nilai baru: ";
    cin >> *ptrNilai;   // Mengubah nilai yang ditunjuk pointer
}

int main() {
    int nilai = 80;

    cout << "Nilai awal: " << nilai << endl;

    // Mengirim alamat variabel ke fungsi
    updateNilai(&nilai);

    cout << "Nilai setelah diperbarui: " << nilai << endl;

    return 0;
}