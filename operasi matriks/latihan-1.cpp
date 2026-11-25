#include <iostream>
using namespace std;

int main() {
    int barisA, kolomA; 
    int barisB, kolomB;

    // Input ukuran matriks A
    cout << "Masukkan baris matriks A: ";
    cin >> barisA;
    cout << "Masukkan kolom matriks A: ";
    cin >> kolomA;

    // Input ukuran matriks B
    cout << "\nMasukkan baris matriks B: ";
    cin >> barisB;
    cout << "Masukkan kolom matriks B: ";
    cin >> kolomB;

    // Validasi
    if (kolomA != barisB) {
        cout << "\nError: Perkalian tidak bisa dilakukan!\n";
        cout << "Syarat: kolom A harus sama dengan baris B.\n";
        return 0;
    }

    int A[barisA][kolomA];
    int B[barisB][kolomB];
    int C[barisA][kolomB];

    // Input matriks A
    cout << "\nInput matriks A:\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cin >> A[i][j];
        }
    }

    // Input matriks B
    cout << "\nInput matriks B:\n";
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cin >> B[i][j];
        }
    }

    // Inisialisasi matriks hasil
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            C[i][j] = 0;
        }
    }


    // Tampilkan matriks A
    cout << "\nMatriks A:\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    // Tampilkan matriks B
    cout << "\nMatriks B:\n";
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

        // Perkalian matriks
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            for (int k = 0; k < kolomA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Tampilkan hasil
    cout << "\nHasil perkalian (A x B):\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}