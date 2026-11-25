#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 1) // base case
        return 1;
    else
        return n * faktorial(n - 1); // recursive call
}

int main() {
    int angka = 5;
    cout << "Faktorial dari " << angka << " = " << faktorial(angka) << endl;
    return 0;
}