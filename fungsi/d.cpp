#include <iostream>
using namespace std;
void contohMemoryLeak1() {
    int *ptr = new int(100); // Alokasi memori
    cout << "Nilai: " << *ptr << endl;
    // Lupa: delete ptr;
    // Memori 4 byte (ukuran int) tidak pernah dibebaskan
}

int main() {
    contohMemoryLeak1();
    // Setelah fungsi selesai, ptr sudah tidak ada, 
    // tetapi memori yang dialokasikan masih tertahan
    return 0;
}
