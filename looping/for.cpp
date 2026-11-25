# include <iostream>
# include <string>
using namespace std;

int main () {
system("cls"); /*
cout << "kasus 1"<< endl; //Menampilkan angka 1 sampai 10

    for (int i=1; i <= 10 ; i++){
        cout << i <<endl;
    }


cout << "\nkasus 2"<< endl; //Menghitung jumlah dari 1 sampai n
    
    int b, b2 = 0;
    cout<< "masukan nilai ke n : ";
    cin>> b;
    for (int i=1; i <= b; i++){
        b2 += i;
    }
    cout<< b2 <<endl;
    //atau
    cout << b*(b+1) /2 <<endl;


cout << "\nkasus 3"<< endl; //Menampilkan angka 1 sampai 5
    
    int c = 1;

    while (c <= 5){
        cout<< c <<endl;
        c++;
    }


cout << "\nkasus 4"<< endl; //Login sederhana

    string d, d2;
    cout<< "Buat akun" <<endl;
    cout<< "masukan username : ";
    cin>> d;
    cout<< "masukan pasword : ";
    cin>> d2;
    cout<< "Akun berhasil dibuat silahkan Login" <<endl;
    string d4, d5;
    do {
        cout<< "masukan username : ";
        cin>> d4;
        cout<< "masukan pasword : ";
        cin>> d5;       
    } while( d4 != d || d5 != d2);

cout<< "Login Berhasil!" <<endl;


cout << "\nkasus 5"<< endl;
    int e;
    cout<< "Daftar menu" <<endl;
    cout<< "1. Mie ayam" <<endl;
    cout<< "2. Bakso" <<endl;
    cout<< "3. Nasi Goreng" <<endl;
    do{
        cout<< "pilih menu 1-3 : ";
        cin>> e;
    } while (e <1 || e>3);
    switch (e) {
        case 1 :
            cout<< "Rp 12.000" <<endl;
            break;
        case 2 :
            cout<< "Rp 10.000" <<endl;
            break;
        case 3 :
            cout<< "Rp 15.000" <<endl;
            break;
    }
*/

cout << "\nkasus 6"<< endl;
    for (int i=1; i<=5; i++){
        for (int k=5; k>=i; k--){
            cout<< "*";
        }
        cout<<endl;
    }
cout << "\nkasus 7"<< endl;
    for (int i=1; i<=5; i++){
        for (int k=1; k<=i; k++){
            cout<< "*";
        }
        cout<<endl;
    }
cout << "\nkasus 8"<< endl;
    for (int i=1; i<=5; i++){
        for (int j=1; j<i; j++){
            cout<<" ";
        }
        for (int k=5; k>=i; k--){
            cout<< "*";
        }
        cout<<endl;
    }
cout << "\nkasus 9"<< endl;
    for (int i=1; i<=5; i++){
        for (int j=5; j>i; j--){
            cout<<" ";
        }
        for (int k=1; k<=i; k++){
            cout<< "*";
        }
        cout<<endl;
    }
cout << "\nkasus 10"<< endl;
    for (int i=1; i<=5; i++){
        for (int j=5; j>i; j--){
            cout<<" ";
        }
        for (int k=1; k<= 2*i-1; k++){
            cout<< "*";
        }
        cout<<endl;
    }
cout << "\nkasus 11"<< endl;
    for (int i=5; i>=1; i--){
        for (int j=5; j>i; j--){
            cout<<" ";
        }
        for (int k=2*i-1; k>=1 ; k--){
            cout<< "*";
        }
        cout<<endl;
    }
int n = 7;
cout << "\nkasus 12"<< endl;
    for (int i=1; i<=n; i++){
        for (int j=n; j>i; j--){
            cout<<" ";
        }
        for (int k=1; k<=2*i-1 ; k++){
            cout<< "*";
        }

        if (i==n){
        cout<<endl;
            for (int x=n-1; x>=1; x--){
                for (int y=n-1; y>=x; y--){
                    cout<< " ";
                }
                for (int z=1; z<=2*x-1; z++ ){
                    cout<< "*";
                }
                cout<<endl;
            }
        }
            
        cout<<endl;
    }

int a = 5;
cout << "\nkasus 13" << endl;
    for (int i=1; i<=a; i++){
        for (int j=a; j>i; j--){
            cout<<" ";
        }
       int q = 1;
        for (int k=1; k<= 2*i-1; k++){
            if (k<=i){
                cout<< q;
                q++;
            }
            else {
                if (q==k){
                    q--;
                }
                q--;
                cout<< q;
            }
        }
        cout<<endl;
    }


cout << "\nkasus 14"<< endl;
    int p = 5;
    for (int i=1; i<=p; i++){
        for (int j=1; j<=p; j++){
            if (i % 2 ==0 && j==1){
                cout<<" ";
            }
            cout<< "* " ;

        }
        cout<<endl;
    }
cout << "\nkasus 15"<< endl;
    int q = 6;
    for (int i=1; i<=q; i++){
        for (int j=1; j<=q; j++){
            if (j == i){
                cout<<" ";
            }
            else {
                cout<< "*"; 
            }
        }
        cout<<endl;
    }


cout << "\nkasus 16"<< endl;
    int h = 5;
    for (int i=1; i<=h; i++){
        for (int j=1; j<=i; j++){
            cout<< j <<" " ;

        }
        cout<<endl;
    }

    return 0;
}