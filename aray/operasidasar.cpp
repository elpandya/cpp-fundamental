#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = 5;
    
    // Mencari nilai maksimum
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Nilai maksimum: " << max << endl;
    
    // Menghitung rata-rata
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;
    cout << "Rata-rata: " << average << endl;
    
    // Mencari elemen tertentu
    int target = 8;
    bool found = false;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            found = true;
            cout << "Elemen " << target << " ditemukan di index " << i << endl;
            break;
        }
    }
    if(!found) {
        cout << "Elemen tidak ditemukan" << endl;
    }
    
    return 0;
}