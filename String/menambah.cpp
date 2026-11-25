#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    
    // Menggunakan operator +
    string s3 = s1 + " " + s2;
    cout << s3 << endl;  // Output: Hello World
    

    // Menggunakan append()
    string s4 = s1;
    s4.append(" ").append(s2);
    cout << s4 << endl;  // Output: Hello World
    
    return 0;
}
