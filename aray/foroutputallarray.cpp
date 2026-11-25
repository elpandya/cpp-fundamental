#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50,};
    
    // Menggunakan for loop
    cout << "Menggunakan for loop:" << endl;
    for(int i = 0; i < 6; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    } 
    
    // Menggunakan range-based for loop (C++11)
    cout << "\nMenggunakan range-based for loop:" << endl;
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}