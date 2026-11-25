#include <iostream>
using namespace std;

int main () {
    int arr [] = {7,2,9,4,5};
    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    int indx = 0;
    int cek = -1;
        for (int i=0; i<n ; i++){
            if (arr[i]==target){
                indx = i;
                cek = 1;
                break;
            }
        }

        if (cek == -1) {
            cout<< "Nomer "<< target << " tidak ditemukan dalam array" <<endl;
        }
        else           {
            cout<< "Nomer "<< target << " berada dalam index ke "<< indx <<endl;
        }


return 0;
}