//string dapat menyimpan angka tetapi string menganggap nomor sebagai teks


#include <iostream>
using namespace std;
int main (){
    
    string a,b,c;
    string contoh = "deklarasi";
    string nama ("contoh deklarasi"); // contoh deklarasi string
   
    cout<<"masukan nama anda : ";
    getline(cin,a);
    cout<<"masukan Prodi : ";
    getline(cin,b);
    cout<<"masukan nama NIM : ";
    getline(cin,c);
    

    cout<<"Nama\t:"<<a<<endl;
    cout<<"NIM\t:"<<b<<endl;
    cout<<"Prodi\t:"<<c<<endl;
 
cout<<nama;
    cout<<"\n"<<contoh<<endl;
    return 0;
}