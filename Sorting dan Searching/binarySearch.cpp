#include <iostream>
using namespace std;

int main () {
    int arr [] = {1,2,3,4,5,6,7,8,9};
    int right = sizeof(arr)/sizeof(arr[0])-1 ;
    int left = 0;
    int target = 6;
    int result = 0;
    int cek = -1;

        while (left <= right){
            int mid = (left + right) / 2;
            if (arr[mid] == target){
                result = mid;
                cek = 1;
                break;
            }
            else if (arr[mid] < target){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        if (cek != -1){
            cout<< "angka " << target << " berada di index ke " << result;
        }
        else {
            cout<< "angka " << target << " tidak ditemukan dalam array";
        }



return 0;
}