#include <iostream>
using namespace std;


int main(){
    int a=5;
    int &b=a;
    cout<<"alamat dari a adalah: "<<&a<<endl;
    cout<<"nilai dari a adalah: "<<a<<endl;
    cout<<"alamat dari b adalah: "<<&b<<endl;
    cout<<"nilai dari b adalah: "<<b<<endl;
    
  // jika mengubaha nialai dari salah satu variabel 
  //dengan alamat yang sama maka semua yang berada 
  //dialamat tersebut akan ikut berubah
  //contoh

    b=10;
    cout<<"alamat dari a adalah: "<<&a<<endl;
    cout<<"nilai dari a adalah: "<<a<<endl;
    cout<<"alamat dari b adalah: "<<&b<<endl;
    cout<<"nilai dari b adalah: "<<b<<endl;
    return 0;
}