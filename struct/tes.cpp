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
    for (int i=0 ; i<3 ; i++){

        cout << "Masukkan nim   : ";
            cin >> m1[i].nim;

            cin.ignore();

        cout << "Masukkan nama   : ";
            getline(cin, m1[i].nama);

        cout << "Masukkan nilai    : ";
            cin >> m1[i].nilai;

    cout<<endl;
    }
   
    for (int i=0 ; i<3 ; i++){
    if (m1[i].nilai>=60){
    cout << "\nNim : " << m1[i].nim;
    cout << ", nama : " << m1[i].nama;
    cout << ", nilai  : " << m1[i].nilai <<" lulus";
    }
    else if (m1[i].nilai<60){
    cout << "\nNim : " << m1[i].nim;
    cout << ", nama : " << m1[i].nama;
    cout << ", nilai  : " << m1[i].nilai<<" tidak lulus";
    }

    }
   


    return 0;
}

//m1[0] nim= 777, nama= yoo , nilai=60
//m1[1] nim= 999, nama= too, nilai=80
//m1[2] nim= 222, nama= roo, nilai=58