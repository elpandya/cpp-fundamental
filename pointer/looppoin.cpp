#include <iostream>
using namespace std;

int main(){
    
    int arr[5]={32,79,45,10,23};
    int *r=arr;
    for(int a=0;a<5;a++){
        cout<< r[a]<<"\t";
    }
cout<<"\n"<<r<<endl;
    return 0;
}