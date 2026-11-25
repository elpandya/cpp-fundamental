#include <iostream>
using namespace std;
int main (){

int a , b , c , d;
cout<<"input nilai mtk : ";
cin>> a ;
cout<<"input nilai ipa : ";
cin>> b;
cout<<"input nilai ips : ";
cin>> c;
cout<<"input nilai biologi : ";
cin>> d;

   
        if ( a>60 && a<70,b>60 && b<70,c>60 && c<70,d>60 && d<70)
    {
        cout<< a << "nilai mtk kurang!!" << endl;
        cout<< b << "nilai ipa kurang!!" << endl;
        cout<< c << "nilai ips kurang!!" << endl;
        cout<< d << "nilai biologi kurang!!" << endl;
    }
        if (a>70 && a<80,b>70 && b<80,c>70 && c<80,d>70 && d<80)
    {
        cout<< a << "nilai mtk cukup!!" << endl;
        cout<< b << "nilai ipa cukup!!" << endl;
        cout<< c << "nilai ips cukup!!" << endl;
        cout<< d << "nilai biologi cukup!!" << endl;
    }
        if (a>80 && a<90,b>80 && b<90,c>80 && c<90,d>80 && d<90) 
    {
        cout<< a << "nilai mtk baik!!" << endl;
        cout<< b << "nilai ipa baik!!" << endl;
        cout<< c << "nilai ips baik!!" << endl;
        cout<< d << "nilai biologi baik!!" << endl;
    }
        if (a>90 && a<100,b>90 && b<100,c>90 && c<100,d>90 && d<100) 
    {
        cout<< a << "nilai mtk sangat baik!!" << endl;
        cout<< b << "nilai ipa sangat baik!!" << endl;
        cout<< c << "nilai ips sangat baik!!" << endl;
        cout<< d << "nilai biologi sangat baik!!" << endl;
    }

        cout<<"seleasi"<< endl; 
    
cin.get();
return 0;
}