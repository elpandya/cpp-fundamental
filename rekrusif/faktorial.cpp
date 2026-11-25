#include <iostream>
using namespace std;

int faktorial (int n){
    if (n == 1){
        return 1;
    }

    return n * faktorial (n-1);
}

int main () {
    int angka = 5;

    cout<< "Faktorial: ";
    cout<< faktorial(angka);

    return 0;
}