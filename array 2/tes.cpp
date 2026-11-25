#include <iostream>

using namespace std;

int main(){

    int arr[6];
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"masukan 6 elemen array: "<<endl;
    for (int i=0 ; i<6 ; i++){
        cin>>arr[i];
    }
  
  cout<<"array sebelum diurutkan : ";
    for(int a=0; a<n ; a++){
        cout<<arr[a]<<" ";
    }
    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
cout<<endl;
cout<<"array setelah diurutkan : ";
    for(int a=0; a<n ; a++){
        cout<<arr[a]<<" ";
    }
    return 0;
}
