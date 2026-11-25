 #include <iostream>
 using namespace std;
 
int main() {
    
    int data[5] = {10, 20, 30, 40, 50};
    int cari = 100;
    bool ketemu = false;

    for (int i = 0; i < 5; i++) {
        if (data[i] == cari) {
             cout << "Data ditemukan di indeks ke-" << i << endl;
             ketemu = true;
                break;
                        }
    }
 
// ketemu != true
    if (ketemu!=true) 
    
    cout << "Data tidak ditemukan." << endl;
 
    return 0;

 }
