 #include <iostream>
 using namespace std;
 
 int main() {
  
  int data[5] = {5, 3, 4, 1, 2};
  int n = 5;
  
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (data[j] > data[j + 1]) {  // 5>3   te
        int temp = data[j];
        data[j] = data[j + 1];   
        data[j + 1] = temp;
      }
    }
  }
  
  cout << "Data setelah diurutkan: ";
  for (int i = 0; i < n; i++) 
  cout << data[i] << " ";

  return 0;
}