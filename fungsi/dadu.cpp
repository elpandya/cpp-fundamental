#include <iostream>
#include <cstdlib> // library fungsi random
using namespace std;

int main(){
    
    for(int i=1; i<10;i++){
        cout<<rand()<<endl; // contoh penggunaan fungsi random
    }
    for(int i=1; i<10;i++){
        cout<<1+ (rand() %6)<<endl; // pembuatan fungsi random 1-6
    }

    //contoh pembuatan lempar dadu
    char lempar;
    while (true)
    {
        cout<<"lempar dadu ketik y tidak n: ";
        cin>> lempar;

        if(lempar=='y'){
            cout<<1+ (rand()%6)<<endl;
        }
        else if(lempar=='n'){
            break;
        }
        else {
            cout<<"warning anda harus memasukan hurus y/n"<<endl;
        }

    }
    

    return 0;
}