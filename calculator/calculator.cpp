#include <iostream>
using namespace std;

int main (){
    float a,b,hasil;
    char aritmatika;

    cout<<"selamat datang di program kalkulator \n";

    //input nilai
    cout<<"input nilai pertama      : ";
    cin>> a;
    cout<<"select operator +,-,/,*  : ";
    cin >> aritmatika;
    cout<<"input nilai kedua        : ";
    cin>> b;

    cout<<"\n answer    : ";
    cout<<a<<aritmatika<<b;
    
    if (aritmatika=='+'){
        hasil=a+b;
    } else if (aritmatika=='-'){
        hasil=a-b;
    } else if (aritmatika=='/'){
        hasil=a/b;
    } else if (aritmatika=='*'){
        hasil=a*b;
    } else {cout<<"operator is not recognised\n";}
    
    cout<<" = "<<hasil<<endl;
    
    cin.get();
    return 0;
}