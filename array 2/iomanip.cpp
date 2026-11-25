#include <iostream>
#include <iomanip>   // untuk setprecision
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    float angka[n];
    float total = 0;

    // Input array
    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> angka[i];
        total += angka[i];
    }

    // Hitung rata-rata
    float rata = total / n;

    // Tampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "\nRata-rata = " << rata << endl;

    cout<<"nilai diatas rata rata: ";
      cout << fixed << setprecision(0);
    for(int i=0 ; i<n ; i++){
        if(angka[i]>rata){
            cout<<angka[i]<<" ";
        }
    }

    return 0;
}