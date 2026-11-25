
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    // Base case: faktorial dari 0 atau 1 adalah 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n! = n × (n-1)!
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka = 5;
    cout << "Faktorial dari " << angka << " = " << faktorial(angka) << endl;
    
    // Test beberapa nilai
    for (int i = 0; i <= 6; i++) {
        cout << i << "! = " << faktorial(i) << endl;
    }
    
    return 0;
}
