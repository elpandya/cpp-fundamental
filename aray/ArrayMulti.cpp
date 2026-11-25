#include <iostream>
#include <iomanip>
using namespace std;

const int SISWA = 4;
const int MATA_KULIAH = 3;
const int UJIAN = 2;

void hitungRataRata(int nilai[SISWA][MATA_KULIAH][UJIAN], 
                    double rataSiswa[SISWA], 
                    double rataMatkul[MATA_KULIAH]) {
    
    // Rata-rata per siswa
    for(int i = 0; i < SISWA; i++) {
        double total = 0;
        int count = 0;
        for(int j = 0; j < MATA_KULIAH; j++) {
            for(int k = 0; k < UJIAN; k++) {
                total += nilai[i][j][k];
                count++;
            }
        }
        rataSiswa[i] = total / count;
    }
    
    // Rata-rata per mata kuliah
    for(int j = 0; j < MATA_KULIAH; j++) {
        double total = 0;
        int count = 0;
        for(int i = 0; i < SISWA; i++) {
            for(int k = 0; k < UJIAN; k++) {
                total += nilai[i][j][k];
                count++;
            }
        }
        rataMatkul[j] = total / count;
    }
}

int main() {
    string namaSiswa[SISWA] = {"Ali", "Budi", "Citra", "Dewi"};
    string mataKuliah[MATA_KULIAH] = {"Matematika", "Fisika", "Kimia"};
    
    // Array 3D: [siswa][mata_kuliah][ujian]
    int nilai[SISWA][MATA_KULIAH][UJIAN] = {
        {{85, 90}, {78, 82}, {88, 92}},  // Ali
        {{75, 80}, {85, 88}, {79, 84}},  // Budi
        {{92, 95}, {87, 90}, {91, 93}},  // Citra
        {{80, 85}, {82, 86}, {84, 88}}   // Dewi
    };
    
    double rataSiswa[SISWA];
    double rataMatkul[MATA_KULIAH];
    
    hitungRataRata(nilai, rataSiswa, rataMatkul);
    
    // Menampilkan hasil
    cout << fixed << setprecision(2);
    cout << "LAPORAN NILAI SISWA\n";
    cout << "===================\n\n";
    
    // Tabel nilai
    cout << setw(10) << "Siswa";
    for(int j = 0; j < MATA_KULIAH; j++) {
        cout << setw(15) << mataKuliah[j];
    }
    cout << setw(15) << "Rata-rata" << endl;
    
    for(int i = 0; i < SISWA; i++) {
        cout << setw(10) << namaSiswa[i];
        double totalPerSiswa = 0;
        int count = 0;
        
        for(int j = 0; j < MATA_KULIAH; j++) {
            double totalMatkul = 0;
            for(int k = 0; k < UJIAN; k++) {
                totalMatkul += nilai[i][j][k];
                totalPerSiswa += nilai[i][j][k];
                count++;
            }
            cout << setw(15) << totalMatkul / UJIAN;
        }
        cout << setw(15) << rataSiswa[i] << endl;
    }
    
    cout << "\nRata-rata per Mata Kuliah:\n";
    for(int j = 0; j < MATA_KULIAH; j++) {
        cout << mataKuliah[j] << ": " << rataMatkul[j] << endl;
    }
    
    return 0;
}