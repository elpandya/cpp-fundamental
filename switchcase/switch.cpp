#include <iostream>
using namespace std;
int main (){
    
    int a;
    cout<<"input nilai = ";
    cin>>a;
   
    switch (a)
    {
    case 5:
        cout<<"benar itu adalah 5"<<endl;
        break;
    case 6:
        cout<<"benar itu adalah 4"<<endl;
        break;
    case 7:
        cout<<"benar itu adalah 4"<<endl;
        break;    
    case 8:
        cout<<"benar itu adalah 4"<<endl;
        break;             
    
    default: 
        cout<<"angka tidak ditemukan"<<endl;
    }
   
    cout<< "akhir dari program"<< endl;
   
    return 0;
}