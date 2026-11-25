#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Periksa jika target ada di tengah
        if (arr[mid] == target) {
            return mid;
        }
        
        // Jika target lebih besar, abaikan bagian kiri
        if (arr[mid] < target) {
            left = mid + 1;
        } 
        // Jika target lebih kecil, abaikan bagian kanan
        else {
            right = mid - 1;
        }
    }
    
    return -1; // Target tidak ditemukan
}

int main() {
    // Array harus terurut untuk binary search
    int data[] = {11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 22;
    
    int result = binarySearch(data, n, target);
    
    if (result != -1) {
        cout << "Data " << target << " ditemukan pada indeks ke-" << result << endl;
    } else {
        cout << "Data " << target << " tidak ditemukan dalam array" << endl;
    }
    
    return 0;
}
