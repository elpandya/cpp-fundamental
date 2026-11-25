#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;
    int *ptr= &n;
    int *r= new int;
    *r=10;
    int* arr = new int[n]; // dynamic memory

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }cout<<endl;

    for (int i = 0; i < n; i++) {
        cout<< arr[i]<<" ";
    }

    cout<<"\n"<<arr[0];
    cout<<"\n"<<&arr[0];
    cout<<"\n"<<&n;
    cout<<"\n"<<ptr;
    cout<<"\n"<<&ptr;
    cout<<"\n"<<*ptr;
    cout<<"\n"<<r;
    cout<<"\n"<<&r;
    cout<<"\n"<<*r;

    delete[] arr; // harus dilepas
}
