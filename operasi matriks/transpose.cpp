#include <iostream>
using namespace std;

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int T[2][2];

    // Transpose
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Output
    cout << "Hasil Transpose:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
}