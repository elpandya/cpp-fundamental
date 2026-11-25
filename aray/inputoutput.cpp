#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    
    int arr[n];
    
    // Input elemen array
    cout << "Masukkan " << n << " elemen: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Output elemen array
    cout << "Elemen yang dimasukkan: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}