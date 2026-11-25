#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int kiri = 0;
    int kanan = n - 1;
    //n=7
    //arr[]={12, 23, 34, 45, 56, 67, 89};
    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;
        
        if (arr[tengah] == target) {
            return tengah;
        } else if (arr[tengah] < target) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
    return -1;
}

int main() {
    int data[] = {12, 23, 34, 45, 56, 67, 89}; // Data harus terurut
    int n = sizeof(data) / sizeof(data[0]);
    int target = 56;
    
    int hasil = binarySearch(data, n, target);
    
    if (hasil != -1) {
        cout << "Data ditemukan pada index: " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    
    return 0;
}