#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "apple";
    string s2 = "banana";
    string s3 = "apple";
    
    // Menggunakan operator
    if (s1 == s2) {
        cout << "s1 sama dengan s2" << endl;
    } else {
        cout << "s1 tidak sama dengan s2" << endl;  // Output ini
    }
    

    if (s1 == s3) {
        cout << "s1 sama dengan s3" << endl;  // Output ini
    } else {
        cout << "s1 tidak sama dengan s3" << endl;
    }
    
    // Menggunakan compare()
    int hasil = s1.compare(s2);
    if (hasil == 0) {
        cout << "s1 sama dengan s2" << endl;
    } else if (hasil < 0) {
        cout << "s1 kurang dari s2" << endl;  // Output ini
    } else {
        cout << "s1 lebih dari s2" << endl;
    }
    
    return 0;
