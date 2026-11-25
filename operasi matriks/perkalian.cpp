#include <iostream>
using namespace std;

int main() {
    int A[2][3] = {{1, 2}, {3, 4}};
    int B[3][2] = {{3,4},{5, 6}, {7, 8}};
    int C[2][2] = {0};

    // Perkalian matriks
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output
    cout << "Hasil Perkalian:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}