#include <iostream>

using namespace std;

// Fungsi untuk Selection Sort
int a(int arr[], int c, int x) {
    
    for(int i=0; i<c ; i++){
        if(x<arr[i+1]){
            x=arr[i+1];
        }
    }
    return x;
}



int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data)/sizeof(data[0]);
    int max=data[0];

    cout<<"nilai maksimal : ";
    cout<<a(data,n,max);

    return 0;
}
