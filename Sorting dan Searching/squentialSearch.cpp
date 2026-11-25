#include <iostream>
using namespace std;



int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};
   int target = 15;
   int n = sizeof(arr)/sizeof(arr[0]);
   int cek = -1;
   int result;
   
   for (int i=0; i<n; i++){
        if(arr[i]==target){
            result = i;
            cek = 1;
            break;
        }
   }

   if (cek!=-1){
    cout<< "data ditemukan pada indek ke-"<<result<<endl;
   }

   else {
        cout<< "data ditemukan pada indek ke-"<<result<<endl;
   }
}