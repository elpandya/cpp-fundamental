 #include <iostream>
 using namespace std;
 
 int main() {
    
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    
    int data[n]; 
    // Input elemen array
    // int data[4] = { 2,  3,  6 , 8};
    for(int i = 0; i < n; i++) {
        cout <<" elemen: ";
        cin >> data[i];
    }


cout << "Data sebelum diurutkan: ";
  for (int i = 0; i < n; i++) {
  cout << data[i] << " ";
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (data[j] < data[j + 1]) {  // 5>3   te
        int temp = data[j];
        data[j] = data[j + 1];   
        data[j + 1] = temp;
      }
    }
  }

  cout<<endl;
  
  cout << "Data setelah diurutkan: ";
  for (int i = 0; i < n; i++) 
  cout << data[i] << " ";

  return 0;
}