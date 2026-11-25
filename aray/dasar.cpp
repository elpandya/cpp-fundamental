#include <iostream>
using namespace std;

int main() {

    // Deklarasi dan inisialisasi array
    //ARRAY 1 DIMENSI
    int angka[] = {10, 20, 30, 40, 50};

    
    // Menampilkan elemen array
    cout << "Elemen array: ";
    for(int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    
    cout<<endl;





    
    
/* 
    //ARRAY 2 DIMENSI
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Menampilkan matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
*/
    return 0;
}