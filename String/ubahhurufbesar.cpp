#include <iostream>
#include <string>
#include <algorithm>	// untuk std::transform
#include <cctype>	// untuk toupper() dan tolower()
using namespace std;

int main() {
    string teks = "Hello World 123 Okee";

    // Konversi ke UPPERCASE
    string teksBesar = teks; // Salin teks asli
    transform(teksBesar.begin(), teksBesar.end(), teksBesar.begin(), ::toupper);
    cout << "Uppercase: " << teksBesar << endl;

    // Konversi ke lowercase
    string teksKecil = teks; // Salin teks asli
    transform(teksKecil.begin(), teksKecil.end(), teksKecil.begin(), ::tolower);
    cout << "Lowercase: " << teksKecil << endl;

    return 0;
}
