#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    
    int data[n];
    int unik=0;
    // Input elemen array
    
    for(int i = 0; i < n; i++) {
        cout <<" elemen: ";
        cin >> data[i];
    }
    
    for (int i = 0; i < n ; i++) {
    for (int j = 0; j < n ; j++) {
      if (data[j] == data[j + 1]) {  // 5>3   te
       unik= unik+1;
      }
    }
  }
    cout<<unik;
    return 0;
}