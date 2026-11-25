#include <iostream>
using  namespace std;

void cetaksegitiga(int a);

int main(){
    
   cetaksegitiga(5);
   cetaksegitiga(8);
    
    return 0;
}

void cetaksegitiga( int a ){
      for(int i=1; i<=a ; i++){
         for(int j=1; j<=i ; j++){
        cout<<"* ";
    }
    cout<<endl;
    }

}