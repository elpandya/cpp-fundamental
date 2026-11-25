#include <iostream>
using namespace std;

// Membuat struct bernama Mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    int nilai;
};

int main() {
    // Membuat variabel bertipe struct Mahasiswa
    Mahasiswa m1[3];

    // Mengisi data ke dalam anggota struct
    for (int i=0 ;i<3 ; i++){

        cout << "Masukkan nim   : ";
     cin >> m1[i].nim;
        cin.ignore();

         cout << "Masukkan nama   : ";
            getline(cin, m1[i].nama);

  

    cout << "Masukkan IPK    : ";
    cin >> m1[i].nilai;
    }
   
    for (int i=0 ;i<3 ; i++){
    cout << "\n=== DATA MAHASISWA ===\n";
    cout << "Nim : " << m1[i].nim << endl;
    cout << "nama : " << m1[i].nama << endl;
    cout << "nilai  : " << m1[i].nilai << endl;
    }
   


   

    return 0;
}
