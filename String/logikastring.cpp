#include <iostream>
#include <string>
using namespace std;

int main (){
    
    string pasword, confirm_pasword;

    cout<<"masukan pasword : ";
    cin>>pasword;
    cout<<"confirm pasword : ";
    cin>>confirm_pasword;

    if(pasword == confirm_pasword){
        cout<<"pasword berhasil"<<endl;
    }
    else {
        cout<<"pasword gagal"<<endl;
    }
    
    
    return 0;
}