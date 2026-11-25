#include <iostream>
#include <string>
using namespace std;

int main (){
    
    string teks;

    cout<<"masukan kalimat: ";
    getline(cin,teks);
    
    int nilai= teks.find("saya");
    int length=teks.length();
    cout<<"kata saya di temukan pada indeks ke: "<<nilai<<endl;
    cout<<"panjang kalimat ini adalah"<<length<<endl;
    
}
