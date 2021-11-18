#include <iostream>

using namespace std;

int main() {

  // Declare the three needed values for the program to work
  int n, max, cube, max_cube;

  // Request the input of an integer for the max variable;
  // cout << "Input the max number of integers you want to calculate the cube of:" << endl;
  cin >> max;

  // Bucle that calculates those numbers
  for (n=0; n < max; n++){

    // Calculate the cube
    cube = n*n*n;

    //Show the result
    // cout << "The cube of" << n << "is" << endl;
    cout << cube << ",";
  }
  max_cube = max*max*max;
  cout << max_cube << endl;
}
