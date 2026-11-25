#include <iostream>

using namespace std;

// Fungsi untuk Selection Sort
void selectionSort(int arr[], int n) {
    //  int data[] = {64, 34, 25, 12, 22, 11, 90};
    for (int i = 0; i < n-1; i++) {
        // Temukan elemen minimum dalam b5agian yang belum terurut
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Tukar elemen minimum dengan elemen pertama bagian belum terurut
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Fungsi untuk menampilkan array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(data, n);

    selectionSort(data, n);

    cout << "Array setelah diurutkan: ";
    printArray(data, n);

    return 0;
}
