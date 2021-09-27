#include <iostream>

using namespace std;

int main() {

  // Declare the three needed values for the program to work
  int n, con, res;

  // Ask for a number:
  cin >> con;

  // Calculate the multiplication table
  for (n=0; n <= 10;n++){
    res = con*n;
    cout << con << "*" << n << " = " << res << endl;
  }
}
