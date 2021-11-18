#include <iostream>
#include <sting>

using namespace std;

int main(){
  string primera, seq;
  int max = 1, cont = 1;

  cin >> primera;

  while (cin >> seq){
    if (primera != seq) { cont = 0; }
    else {
      cont++;
      if (cont > max) max = cont;
    }
  }
  cout << max << endl;
}
