#include <iostream>
#include <string>
using namespace std;

int main (){

    string a,b,c;
    
    cout<<"masukan nama depan: ";
    getline(cin,a);
    cout<<"masukan tengah : ";
    getline(cin,b);
    cout<<"masukan nama terakhir: ";
    getline(cin,c);

    cout<<a+" "+b+" "+c<<endl;

    return 0;
}