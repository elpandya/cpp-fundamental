#include <iostream>
using namespace std;

int f (int x){
    int y;
    y = x*x;
    return y;
}

int main(){
   
    int hasil, input;

    cout<<"masukan nilai: ";
    cin>>input;

    hasil=f(input);
    cout<<hasil<<endl;
    cout<<f(input);
    return 0;
}