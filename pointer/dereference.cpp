#include <iostream>
using namespace std;

int main() {

    int x = 10;       
    int *ptr = &x;     

    cout << "Nilai x        : " << x << endl;
    cout << "Alamat x       : " << &x << endl;

    cout << "Nilai ptr" << ptr << endl;
    cout << "Alamat ptr sendiri"<< &ptr << endl;
    cout << "Nilai lewat *ptr: " << *ptr << endl;



    return 0;
}
