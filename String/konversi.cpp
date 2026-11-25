#include <iostream>
#include <string>

using namespace std;

int main() {
    int angka = 123;

    string strAngka = to_string(angka);
    cout << "String angka: " << strAngka << endl;      // Output: 123

    // Menggabungkan dengan string lain
    string hasil = "Nilai: " + to_string(angka);
    cout << hasil << endl;  // Output: Nilai: 123


        string strAngka = "123";
    string strDesimal = "45.67";
    
    int angka = stoi(strAngka);
    double desimal = stod(strDesimal);
    
    cout << "Integer: " << angka << endl;     // Output: 123
    cout << "Double: " << desimal << endl;    // Output: 45.67
    
    // Operasi matematika setelah konversi
    int hasil = angka * 2;
    cout << "Hasil kali 2: " << hasil << endl;  // Output: 246



    
    return 0;
}
