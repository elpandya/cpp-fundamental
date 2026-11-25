#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int* arr = new int[n]; // dynamic memory

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    delete[] arr; // harus dilepas
}
