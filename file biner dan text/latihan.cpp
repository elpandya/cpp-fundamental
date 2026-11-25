#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file_keluaran("hello.txt");
    file_keluaran << "Halo, Dunia File!" << endl;
    file_keluaran << "Ini adalah baris kedua." << endl;
    file_keluaran.close();
    
    // MEMBACA dari file  
    ifstream file_masukan("hello.txt");
    string baris;
    
    cout << "Isi file hello.txt:" << endl;
    while (getline(file_masukan, baris)) {
        cout << baris << endl;
    }
    file_masukan.close();
    
    return 0;
}
