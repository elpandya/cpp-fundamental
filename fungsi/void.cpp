#include <iostream>
#include <string>
using  namespace std;

void nama( string a){
    cout<<"nama : "<<a<<endl;
    cout<<"nim : "<<endl;
    cout<<"prodi : "<<endl;
}
int main(){
    
   string x,y,z;
   cout<<"masukan nama: "<<endl; 
   getline(cin,x);
   cout<<"masukan nim: "<<endl; 
   cin>>y;
   cout<<"masukan prodi: "<<endl; 
    getline(cin,z);

    nama(x);
    return 0;
}