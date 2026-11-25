#include <iostream>
#include <string>
using namespace std;

int main () {

    cout<< "kasus 1" <<endl;
        string a;
        cout<< "masukan kata atau kalimat : ";
        getline(cin,a);
        cout<< "jumlah karakter : " << a.length() <<endl;


    cout<< "kasus 1" <<endl;
        string b = "hello world";
        int kondisi = b.size();
        int jumlah = 0;
        for (int i = 0; i<kondisi; i++){
                if (b[i] == 'a' || b[i] == 'A'  ){
                    jumlah++;
                }
                else if (b[i] == 'i' || b[i] == 'I'){
                    jumlah++;
                }
                else if (b[i] == 'u' || b[i] == 'U'){
                    jumlah++;
                }
                else if (b[i] == 'e' || b[i] == 'E'){
                    jumlah++;
                }
                else if (b[i] == 'o' || b[i] == 'O'){
                    jumlah++;
                }
        }
        cout<< "jumlah huruf vokal : "<< jumlah <<endl;

    cout<< "kasus 2" <<endl;
        string  c = "alo";
        int cek = c.size();
        for (int i=0; i<3; i++){
            string transit;
            transit = c[i]; 
            c.erase(i,i+1);
            c.append(transit);
        }cout<< c;






return 0;
}