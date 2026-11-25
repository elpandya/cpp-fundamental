#include <iostream>

using namespace std;

int main(){

    int arr[]={9,3,2,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

    for(int a=0; a<n ; a++){
        cout<<arr[a]<<" ";
    }
    return 0;
}
