#include <iostream>
using namespace std;

int main () {

    int a=2;
    int b=1;
    bool hasil1, hasil2;

    int c= 4;
    int d= 3;
    bool hasil3, hasil4;

    //komparasi, realtion exspression

    // sebanding
    hasil1 = (a==b);
    
    //tidak sebanding !=
    hasil2 = (a!=b);

    // kurang dari
    hasil3 = (c<d);

    //lebih dari
    hasil4 = (c>d);
    
    
    cout<< hasil1 << endl;
    cout<< hasil2 << endl;
    cout<< hasil3 << endl;
    cout<< hasil4 << endl;
    
    cin.get();
    return 0;
}