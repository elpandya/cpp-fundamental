#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;
    
    // Alokasi memori dinamis
    int *arr = new int[n];
    
    // Input elemen
    cout << "Masukkan " << n << " elemen: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Operasi pada array dinamis
    cout << "Elemen array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Membalik array
    cout << "Array setelah dibalik: ";
    for(int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Dealokasi memori
    delete[] arr;
    
    return 0;
}