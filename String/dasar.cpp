#include <iostream>
#include <string>
#include <algorithm> // reverse
using namespace std;

int main (){
system("cls");
    cout<< "1. deklarasi" <<endl;
        string data_1 = "elgin";
        cout<< data_1 <<endl;


/*  cout<< "2. input karakter" <<endl;
        string data_2;
        cout<< "masukan nama anda : " ;
        getline(cin,data_2); // menggunakan getline supaya kata setelah spasi bisa terbaca
        //cin.ignore(); // supaya tidak membaca enter sebagai input
*/

    cout<< "\n3. akses karakter " <<endl;
        string data_3 = "abcde fghij";
        cout<< "index ke 0 : "<< data_3[0] <<endl;
        cout<< "index ke 6 : "<< data_3[6] <<endl;
        cout<< "index ke 10 : "<< data_3[10] <<endl;
        cout<< "index ke 10 : "<< data_3.at(10) <<endl;


    cout<< "\n4. menggabungkan" <<endl;
        string data_4 = "elgin";
        string data_5 = "pandya";
        string data_6 = "adinata";
        cout<< data_4 + data_5 + " " + data_6 <<endl;

    cout<< "\n5. Fungsi" <<endl;
        cout<< "panjang : "<< data_4.length() <<endl;
        cout<< "panjang : "<< data_5.length() <<endl;
        cout<< "panjang : "<< data_6.size() <<endl;

    cout<< "\n6. Fungsi" <<endl;
        string data_7 = "hello";
        cout<< data_7 <<endl;
        cout<< data_7.append(" world") <<endl;

    cout<< "\n7. Fungsi" <<endl;
        string data_8 = "hello";
        string data_9 = "world";
        cout<< data_8.erase(3) <<endl;
        cout<< data_9.erase(0,3) <<endl;


    cout<< "\n8. Fungsi" <<endl;
        string data_10 = "abcdefghijklmnopqrstuvwxyz";
        cout<< data_10.substr(1) <<endl;
        cout<< data_10.substr(1,5) <<endl;

    cout<< "\n9. Fungsi" <<endl;
        string data_11 = "abcdefghijklmnopqrstuvwxyz";
        cout<< data_11.find("abc") <<endl;
        cout<< data_11.find("xyz") <<endl;
        cout<< data_11.find("efghijk") <<endl;

    cout<< "\n10. Fungsi" <<endl;
        string data_12 = "aiueo";
        cout<< data_12 <<endl;
        reverse(data_12.begin(), data_12.end());
        cout<< data_12 <<endl;
        

    


  
    


    





return 0;
}