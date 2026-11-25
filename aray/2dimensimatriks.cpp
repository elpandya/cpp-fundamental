#include <iostream>
using namespace std;

int main() {
    const int baris = 3;
    const int kolom = 3;
    int matriks[baris][kolom];
    
    // Input matriks
    cout << "Masukkan elemen matriks 3x3:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }
    
    // Output matriks
    cout << "\nMatriks yang dimasukkan:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Menjumlahkan diagonal utama
    int sumDiagonal = 0;
    for(int i = 0; i < baris; i++) {
        sumDiagonal += matriks[i][i];
    }
    cout << "Jumlah diagonal utama: " << sumDiagonal << endl;
    
    return 0;
}