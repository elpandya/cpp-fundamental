#include <iostream>
using namespace std;

int main (){
    
    int a=10;
    int *c= &a;

    cout<<"alamat dari a adalah : "<<&a<<endl;
    cout<<"alamat dari c adalah : "<<&c<<endl;
    cout<<"nilai dari a : "<<a<<endl;
    cout<<"nilai dari c : "<<*c<<endl;
    cout<<"nilai dari c : "<<c<<endl;

    return 0;
}