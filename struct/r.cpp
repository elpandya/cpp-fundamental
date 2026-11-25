#include <iostream>
using namespace std;

int main(){

int  n;
cout<<"masukan nilai n: ";
cin>>n;

int data[n];

for(int i=0; i<n; i++){
    cout<<"elemen ke "<<i+1<<": ";
    cin>>data[i];
}
for(int i=0; i<n; i++){
    cout<<"array sebelum diurutkan"<<data[i]<<": ";
    cin>>data[i];
}


    return 0;
}