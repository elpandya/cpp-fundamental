#include <iostream>
using namespace std;

void kotak(int v){
    for(int i=1; i<=v;i++){
        for(int j=1; j<=v ;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void segitigasiku1(int v){
    for(int i=1; i<=v;i++){
        for(int j=1; j<=i ;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void segitigasiku2(int v){
    for(int i=1; i<=v;i++){
        for(int j=v; j>=i ;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void segitiga11(int v){
    for(int i=1; i<=v;i++){
        for(int j=v; j>i ;j--){
            cout<<" ";
        }
        for(int k=1 ; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void segitiga22(int v){
    for(int i=1; i<=v;i++){
        for(int j=1; j<i ;j++){
            cout<<" ";
        }
        for(int k=v ; k>=i ; k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void piramida(int v){
    for(int i=1; i<=v;i++){
        for(int j=v; j>i ;j--){
            cout<<" ";
        }
        for(int k=1 ; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int lpersegi(int v){
    return v*v;
}
int kpersegi(int v){
    return v*4;
}
int lppanjang(int v,int w){
    return v*w;
}
int kppanjang(int v,int w){
    return (2*v)+(2*w);
}
int ljjgenjang(int v,int w){
    return v*w;
}
int kjjgenjang(int v,int w, int x){
    return v+w+x;
}
float lsegitiga(int v,int w){
    return 0.5*v*w;
}
float tsegitiga(float l,int w){
    return (2*l)/w;
}
int ksegitiga(int v,int w, int x){
    return v+w+x;
}
float lketupat(int v,int w){
    return 0.5*v*w;
}
int kketupat(int v,int w, int x, int y){
    return v+w+x+y;
}
float llayang(int v,int w){
    return 0.5*v*w;
}
int klayang(int v,int w, int x, int y){
    return v+w+x+y;
}
float ltrapesium(int v,int w, int t){
    return 0.5*(v+w)*t;
}
int ktrapesium(int v,int w, int x, int y){
    return v+w+x+y;
}
float ttrapesium(int l,int w, int x){
    return l*2/(w+x);
}
float klingkaran(int v){
    float pi=3.14;
    return 2*pi*v;
}
float llingkaran(int v){
    float pi=3.14;
    return pi*v*v;
}
int factorial(int w){
    if(w==0){
        return 1;
    }
    return w*factorial(w-1);
}
int pangkat(int w, int x){
    int q=w;
    for (int i=1; i<x ; i++){
        q=q*w;
    }
    return q;
}
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    
    return -1; // Target tidak ditemukan
}
