#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {

    for (int i = 0; i < n-1; i++) {
        int x = i;

        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[x]){
                x = j;
            }
        }

        int temp = arr[x]; 
        arr[x]   = arr[i]; 
        arr[i] = temp;

    }
}

void print (int arr[], int n){
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "BEFORE" <<endl;
    print (arr,n);
    selectionSort(arr, n);
    cout<< "AFTER" <<endl;
    print (arr,n);
    
    return 0;
}
