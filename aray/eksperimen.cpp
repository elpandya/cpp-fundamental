#include <iostream>
using namespace std;
int main (){
    int a;
    int b;
cout<<"masukan nomor pembilang: ";
cin>>a;
cout<<"masukan nomor penyebut: ";
cin>>b;
    for(int i=2; i<=10;i++){
        if(a%i==0 && b%i==0){
            a= a/i;
            b= b/i;
            for(int k=2; k<=10; k++){
                if(a%i==0 && b%i==0){
                    a= a/i;
                    b= b/i;
                    for(int j=2; j<=10; j++){
                        if(a%i==0 && b%i==0){
                            a= a/i;
                            b= b/i;
                        };
                    };
                };
                    
            };
        };
    }
    if(b==1){
        cout<<"hasil akhir : "<<a<<endl;
    }
    else{
    cout<<"hasil akhir : "<<a<<"/"<<b<<endl;
    }

    
    
    return 0;
}
