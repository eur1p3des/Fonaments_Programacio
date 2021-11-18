#include <iostream>
using namespace std;

int main(){
  // Declare the needed variables
  int x, n, max;

  // Loop that keeps working until user ends program
  while (cin >> x){
    cin >> max;
    for (int i = 1; i < x; i++){
      cin >>n;
      if (n > max){
        max = n;
      }
    }
    cout << max << endl;
  }
}
