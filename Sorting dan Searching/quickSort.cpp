#include <iostream>
using namespace std;

// Fungsi partition
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot diambil dari elemen terakhir
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;

            // Tukar arr[i] dan arr[j]
            swap(arr[i], arr[j]);
        }
    }

    // Tukar pivot ke posisi yang benar
    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// Fungsi Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {

        // Ambil index partition
        int pi = partition(arr, low, high);

        // Sort kiri dan kanan pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum sorting:\n";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "Array setelah sorting:\n";
    printArray(arr, size);

    return 0;
}