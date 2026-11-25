#include <iostream>
using namespace std;

int main(){

    int a = 6;
    float b = 4;

    float hasil;

    //operator matematika +,-,*,/,%

    //operasi penjumlahan
    hasil = a + b ;
    cout<< a << " + " << b << " = " << hasil << endl;

    //operator pengurangan
    hasil = a - b ;
    cout<< a << " - " << b << " = " << hasil << endl;

    //operasi perkalian
    hasil = a * b ;
    cout<< a << " x " << b << " = " << hasil << endl;

    //operasi pembagian
    hasil = a / b ;
    cout<< a << " / " << b << " = " << hasil << endl;

    //operasi modulus
    /*hasil = a % b ;
    cout<< a << " / " << b << " = " << hasil << endl;
*/
    cin.get();
    return 0;
}