#include <iostream>
using namespace std;

int main() {
    const int baris = 3;
    const int kolom = 3;
    int matriks[baris][kolom];
    
// Input matriks
    cout << "Masukkan elemen matriks 3x3:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    int a= matriks[0][0];
    int b= matriks[0][1];
    int c= matriks[0][2];
    int d= matriks[1][0];
    int e= matriks[1][1];
    int f= matriks[1][2];
    int g= matriks[2][0];
    int h= matriks[2][1];
    int i= matriks[2][2];
    


 // Output matriks
    cout << "\nMatriks yang dimasukkan:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
    
    
    
    
    int det= a*e*i + b*f*g + c*d*h -(c*e*g + a*f*h + b*d*i);
    int kali[3][3]= {
        {(a*a+ d*d + g*g),(a*b+ d*e + g*h),(a*c+ d*f + g*i)},
        {(b*a+ e*d + h*g),(b*b+ e*e + h*h),(b*c+ e*f + h*i)},
        {(c*a+ f*d + i*g),(c*b+ f*e + i*h),(c*c+ f*f + i*i)},
    } ;
    cout<<"determinan dari matriks tersebut adalah = "<<det;
    cout<<endl;
    
    cout<<endl;
    cout<<"tranfos dari matriks tersebut adalah"<<endl;
    cout<<a<<"\t"; cout<<d<<"\t"; cout<<g<<endl;
    cout<<b<<"\t"; cout<<e<<"\t"; cout<<h<<endl;
    cout<<c<<"\t"; cout<<f<<"\t"; cout<<i<<endl;
      cout<<endl;
      
    cout<<"A x A transpos "<<endl;
    
    cout<<a<<"\t"; cout<<b<<"\t"; cout<<c<<"\t\t";
    cout<<a<<"\t"; cout<<d<<"\t"; cout<<g<<endl;
    cout<<d<<"\t"; cout<<e<<"\t"; cout<<f<<"\t\t";
    cout<<b<<"\t"; cout<<e<<"\t"; cout<<h<<endl;;
    cout<<g<<"\t"; cout<<h<<"\t"; cout<<i<<"\t\t";
    cout<<c<<"\t"; cout<<f<<"\t"; cout<<i<<endl;
    
    
    cout<<"adalah "<<endl;
    
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << kali[i][j] << "\t";
        }
        cout << endl;
    }
        
//menentukan metriks ortogonal atau tidak
// Menjumlahkan diagonal utama
    int d2 = kali[0][2]+kali[1][1]+kali[2][0];
    
    
    if(kali[0][0]==1 && kali[1][1]==1 && kali[2][2]==1 && d2==1){
        cout<<"matriks tersebut adalah ortogonal karena A x A transpose = I"<<endl;
    }
    else{
        cout<<"matriks tersebut tidak ortogonal karena A x A transpose != I"<<endl;
    }

//MENENTUKAN INVERS MATRIKS
 cout << endl;
 
 cout << endl;
    int minor[3][3]= {
        {((e*i)-(f*h)),-1*((d*i)-(f*g)),((d*h)-(e*g))},
        {-1*((b*i)-(c*h)),((a*i)-(c*g)),-1*((a*h)-(b*g))},
        {((b*f)-(c*e)),-1*((a*f)-(c*d)),((a*b)-(d*e))},
    } ;
    cout<<"Minor dan kofaktor: "<<endl;
     for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << minor[i][j] << "\t";
        }
        cout << endl;
    }
    
//menentukan adjoin 
int adj[3][3];
     for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
             adj[i][j]=minor[i][j];
        }
    }
    cout<<endl;
    
    cout<<"Adjoin: "<<endl;
    cout<<adj[0][0]<<"\t"; cout<<adj[1][0]<<"\t"; cout<<adj[2][0]<<endl;
    cout<<adj[0][1]<<"\t"; cout<<adj[1][1]<<"\t"; cout<<adj[2][1]<<endl;
    cout<<adj[0][2]<<"\t"; cout<<adj[1][2]<<"\t"; cout<<adj[2][2]<<endl;
    cout<<"Adjoin: "<<endl;

    
    /* for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << minor[i][j] << "\t";
        }
        cout << endl;
    }*/
    
    return 0;
}