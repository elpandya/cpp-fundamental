#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Array sementara
    int L[n1], R[n2];

    // Copy data ke array sementara
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Gabungkan kembali
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Sisa elemen kiri
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Sisa elemen kanan
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort bagian kiri dan kanan
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan hasil sort
        merge(arr, left, mid, right);
    }
}

// Fungsi print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum sorting:\n";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "Array setelah sorting:\n";
    printArray(arr, size);

    return 0;
}