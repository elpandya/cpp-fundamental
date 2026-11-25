#include <iostream>
using namespace std;


int main () {
    string nama_depan , nama_belakang, nama_akhir ;
        cout<<"Masukkan nama depan : " ;
        cin>>nama_depan ;
        cout<<"Nama belakang : " ;
        cin>> nama_belakang ;
        cout<<"Nama belakang 2 : ";
        cin >> nama_akhir ;
    
    short a , b , c , d;
     
    float hasil, hasil2 ;
        cout<<"input nilai mtk : ";
        cin>> a ;
        cout<<"input nilai ipa : ";
        cin>> b;
        cout<<"input nilai ips : ";
        cin>> c;
        cout<<"input nilai biologi : ";
        cin>> d;
        cout<< " "<< endl;

//nama lengkap  

if (nama_akhir == "no")
{
    cout<<"Nama lengkap : " <<nama_depan+" "+nama_belakang<<"\n" ;
} 
    else { cout<<"Nama lengkap : " <<nama_depan+" "+nama_belakang+" "+nama_akhir<<"\n" ;
};

   
 
//nilai a
    if (a<60)
        {cout<<"Nilai mtk tidak lulus"<<endl;}   
    else if (a>59 && a<70)
        { cout<<"Nilai mtk kurang"<< endl;}    
    else if (a>69 && a<80)
        { cout<<"Nilai mtk cukup"<< endl;}   
    else if (a>79 && a<90)
        { cout<<"Nilai mtk baik"<< endl;}
    else 
        { cout<<"Nilai mtk sangat baik"<< endl;};


//nilai b
    if (b<60)
        {cout<<"Nilai ipa tidak lulus"<<endl;}
    else if (b>59 && b<70)
        { cout<<"Nilai ipa kurang"<< endl;}      
    else if (b>69 && b<80) 
        { cout<<"Nilai ipa cukup"<< endl;}    
    else if (b>79 && b<90)
        { cout<<"Nilai ipa baik"<< endl;}
    else 
        {cout<<"Nilai ipa sangat baik"<< endl;};
   

//nilai c
    if (c<60)
        {cout<<"Nilai ips tidak lulus"<<endl;}
    else if (c>59 && c<70)
        { cout<<"Nilai ips kurang"<< endl;}    
    else if (c>69 && c<80)
        { cout<<"Nilai ips cukup"<< endl;}    
    else if (c>79 && c<90)
        { cout<<"Nilai ips baik"<< endl;}
    else 
        {cout<<"Nilai ips sangat baik"<< endl;};
 
//nilai d     
    if (d<60)
        {cout<<"Nilai biologi tidak lulus"<<endl;}
    else if (d>59 && d<70)
        { cout<<"Nilai biologi kurang"<<endl;}    
    else if (d>69 && d<80)
        { cout<<"Nila biologi cukup"<< endl;}    
    else if (d>79 && d<90)
        { cout<<"Nilai biologi baik"<< endl;}
    else 
        {cout<<"Nilai biologi sangat baik"<< endl;}

    hasil = a+b+c+d;
    hasil2 = hasil/4;
    cout<<"rata rata: "<<hasil2<<endl;
     
   
    cout<< ">>>>> Terima kasih telah mengisi data <<<<<";
    cout<< " ";


    return 0;
}