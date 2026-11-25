#include <iostream> //library cin, cout / input output
using namespace std;  //std::cout<<"masukan nama"<<std::endl;  cout<<"masukan nama"<<endl:
int main(){
    int n; 

    cout<<"masukan nilai atau panjang segitiga: ";
    cin>>n;

    for(int i=1; i<=n; i++){   //outer loop         i=      n=
        for(int j=1 ; j<=i; j++){  //inner loop     j=
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}