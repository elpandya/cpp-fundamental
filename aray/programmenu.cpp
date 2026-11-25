#include <iostream>
using namespace std;

// Fungsi untuk menampilkan array
void tampilkanArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi pencarian linear
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Fungsi bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int data[100];
    int n, pilihan, target, hasil;
    
    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    cout << "Masukkan " << n << " data: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    do {
        cout << "\n=== MENU PROGRAM ===" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Cari Data (Linear Search)" << endl;
        cout << "3. Urutkan Data (Bubble Sort)" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                cout << "Data: ";
                tampilkanArray(data, n);
                break;
                
            case 2:
                cout << "Masukkan data yang dicari: ";
                cin >> target;
                hasil = linearSearch(data, n, target);
                if (hasil != -1) {
                    cout << "Data ditemukan pada index: " << hasil << endl;
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
                
            case 3:
                bubbleSort(data, n);
                cout << "Data telah diurutkan: ";
                tampilkanArray(data, n);
                break;
                
            case 4:
                cout << "Terima kasih!" << endl;
                break;
                
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 4);
    
    return 0;
}