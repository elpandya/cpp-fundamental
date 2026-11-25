#include <iostream>
#include <vector>
using namespace std;

float penjumlahan (vector <float> & arr){
    float total = 0;
    for (int i = 0; i< arr.size(); i++){
        total += arr[i];
    }
   return total;
}

float perkalian (vector <float> & arr){
    float total = arr[0];
    for (int i=1; i< arr.size(); i++){
        total *= arr[i];
    }
    return 0;
}

float pembagian (vector <float> & arr){
    float total = arr[0];
    for (int i=1; i< arr.size(); i++){
        total /= arr[i];
    }
    return 0;
}

int main () {
    vector <float> arr;
    string Operator;
    cout<< "\tsilahkan pilih operator +/-/x/:"<<endl;
    cin>> Operator;

    if (Operator == "+" || Operator == "-"){
    if (Operator == "+"){
        cout<< "Masukan angka yang ingin anda tambahkan: "<<endl;
    }
    else {
        cout<< "Masukan angka yang ingin anda kurangkan: "<<endl;
    }
    while (true){
        float x;
        cin>> x;
        if (cin.fail()){break;}
        arr.push_back(x);
    }}

    cout<< penjumlahan(arr);

    
    

    return 0;
}