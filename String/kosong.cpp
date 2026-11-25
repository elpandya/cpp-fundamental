#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks1 = "Hello";
    string teks2 = "";
    
    if (teks1.empty()) {
        cout << "teks1 kosong" << endl;
    } else {
        cout << "teks1 tidak kosong" << endl;  // Output ini
    }



    
    if (teks2.empty()) {
        cout << "teks2 kosong" << endl;  // Output ini
    } else {
        cout << "teks2 tidak kosong" << endl;
    }
    
    return 0;
}
