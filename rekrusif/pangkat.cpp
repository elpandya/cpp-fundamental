#include <iostream>
using namespace std;

int pangkat (int n, int m){
    if (m == 1){
        return n;
    }

    return n * pangkat (n , m-1);
}

int main (){
    cout<< pangkat (10,2);
}