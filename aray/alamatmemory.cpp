#include <iostream>
using namespace std;
int main(){
    int angka[5]={10,20,30,40,40};

    cout<<"elemen pertama(indeks 0)\t: "<<angka[0]<<endl;
    cout<<"elemen kedua(indeks 1)  \t: "<<angka[1]<<endl;
    cout<<"elemen ketiga(indeks 2) \t: "<<angka[2]<<endl;


    cout<<"Alamat Memory Array       \t: "<<&angka<<endl;
    cout<<"Alamat Memory Array pertama\t: "<<&angka[0]<<endl;
    cout<<"Alamat Memory Array kedua\t: "<<&angka[1]<<endl;
    cout<<"Alamat Memory Array ketiga\t: "<<&angka[2]<<endl;
    cout<<"Alamat Memory Array keempat\t: "<<&angka[3]<<endl;
    cout<<"Alamat Memory Array kelima\t: "<<&angka[4]<<endl;

}