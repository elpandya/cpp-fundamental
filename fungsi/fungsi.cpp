#include <iostream>
#include <cmath> // library matematika
using namespace std;
    /*
    library cmath : referensi www.cppreference.com
    ceil(x)         <- Pembulatan ke atas
    cos(x)          <- Cosinus
    exp(x)          <- Eksponen
    fabs(x)         <- Nilai absolut dalam float
    floor(x)        <- Pembulatan ke bawah
    fmod(x)         <- Modulus dalam float
    log(x)          <- Logaritma dengan baris natural
    log10(x)        <- Logaritma dengan basis 10
    pow(x,y)        <- x pangkat y
    sin(x)          <- sinus
    sqrt(x)         <- akar kuadrat
    tan(x)          <- tangen
    */
int main (){

    int y;
    cout<<"masukan nilai: ";
    cin>>y;

    double a =sqrt(y);
    cout<<"akarnya adalah: "<<sqrt(y);
    cout<<"akarnya adalah: "<<a;        //hasilnya sama saja


    return 0;
}