#include <iostream>

using namespace std;

int main(){
  // Declare the necessary variables
  int n;
  bool first = true;

  // Loop that keeps working until user exists the program
  while (cin >> n){
      if(not first){
        cout << endl;
      }
      first = false;
      for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
          cout << n;
        }
        cout << endl;
      }
  }
}
