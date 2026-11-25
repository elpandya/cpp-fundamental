#include <iostream>
using namespace std;

// Fungsi untuk linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}





int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 12;
    
    int result = linearSearch(data, n, target);
    
    if (result != -1) {
        cout << "Data " << target << " ditemukan pada indeks ke-" << result << endl;
    } else {
        cout << "Data " << target << " tidak ditemukan dalam array" << endl;
    }
    
    return 0;
}
