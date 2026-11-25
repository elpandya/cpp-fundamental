#include <iostream>
using namespace std ;

int main () {
   
    int a=3;
    int b=2;
  
    bool hasil;
    // operator logika
    // and = kedua niali harus benar untuk menghasilkan true
    // true = 1
    // false = 0
    // and = &&
    cout<< "untuk and \n";
    hasil = (a == 3) and (b == 2); // true and true = 1
    cout<< hasil << endl;
    hasil = (a == 2) and (b == 2); // false and true = 0
    cout<< hasil << endl;
    hasil = (a == 3) and (b == 3); // true and false = 0
    cout<< hasil << endl;
    hasil = (a == 4) and (b == 1); // false and false = 0
    cout<< hasil << endl;


    /* or
    jika ada salah satu nilai yang true maka hasilnya true 
    jika tidak ada yang true maka hasilnya false 
    */
    cout<< "untuk or \n";
    hasil = (a == 3) or (b == 2); // true and true = 1
    cout<< hasil << endl;
    hasil = (a == 2) or (b == 2); // false and true = 1
    cout<< hasil << endl;
    hasil = (a == 3) or (b == 3); // true and false = 1
    cout<< hasil << endl;
    hasil = (a == 4) or (b == 1); // false and false = 0
    cout<< hasil << endl;



    cin.get();
    return 0;
}