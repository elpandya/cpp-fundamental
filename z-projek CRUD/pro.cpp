#include <iostream>
#include <fstream>
#include <string>
#include <limits>   
using namespace std;


// TAMBAHKAN INI di atas, bersama iostream, fstream, string

int tampil()
{
    int input;

    while (true) {
        // system("cls");
        cout << "===========================" << endl;
        cout << "PROGRAM CRUD DATA MAHASISWA" << endl;
        cout << "1. Tambah data mahasiswa " << endl;
        cout << "2. tampilkan data mahasiswa" << endl;
        cout << "3. Ubah data mahasiswa" << endl;
        cout << "4. Hapus data mahasiswa" << endl;
        cout << "5. Selesai" << endl;
        cout << "===========================" << endl;
        cout << "Pilih 1-5 : ";

        if (!(cin >> input)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input harus berupa ANGKA 1-5!\n\n";
            continue; 
        }

        // Sampai sini, input sudah ANGKA.
        if (input < 1 || input > 5) {
            cout << "Pilihan hanya boleh 1 sampai 5!\n\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue; 
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return input;
    }
}

void cekdata(fstream & database){
 
    if(database.is_open()){
        cout<<"data base ditemukan"<<endl;
    }
    else{
        cout<<"data base tidak ditemukan"<<endl;
        database.open("data.txt");
    }
}
struct mahasiswa{
    float ipk;
    string nama;
    string nim;
    string jurusan;  
};

void tambahdata(fstream & database){
    mahasiswa addmhs;
    cout<<"Nama\t: ";
    getline(cin, addmhs.nama);
    database<<addmhs.nama<<"\t\t";
    cout<<"Nim\t: ";
    getline(cin, addmhs.nim);
    database<<addmhs.nim<<"\t\t";
    cout<<"Jurusan\t: ";
    getline(cin, addmhs.jurusan);
    database<<addmhs.jurusan<<endl;
    
}

int main (){
    fstream database;
    database.open("data.txt", ios::in);
    cekdata(database);

    int pilihan= tampil();
    
    char is_lanjut;

    database.close();
    enum option{
        tambah=1,
        tampilkan,
        ubah,
        selesai,
    };
    while(pilihan!=5){
        switch (pilihan){
            case 1:
               database.open("data.txt", ios::app);
                tambahdata(database);
                database.close();
            break;
            case 2:
                string penyimpanan;
                short nomor=1;
                database.open("data.txt", ios::in);
                while (getline(database, penyimpanan)){
                    cout<<nomor<<". "<<penyimpanan<<endl;
                    nomor++;
                }
            break;
        }
        label_yn:
        cout<<"Ketik y untuk lanjut, ketik n untuk berhenti: ";
        cin>>is_lanjut;
        if(is_lanjut=='y'|| is_lanjut=='Y'){
            pilihan=tampil();
        }
        else if(is_lanjut=='n'|| is_lanjut=='N'){
            pilihan=5;
            break;
        }
        else {
            cout<<"Huruf yang anda masukan tidak valid"<<endl;
            cout<<endl;
            goto label_yn;
        }
    }
    return 0;
}