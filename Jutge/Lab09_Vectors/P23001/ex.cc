//Paraules consecutives repetides
#include <iostream>
#include <string>

using namespace std;

int main(){
  string inicial, seq;
  int max = 1, cont = 1;

  cin >> inicial;

  while (cin >> seq){
    if ( inicial != seq ){
      cont = 0;
      // Si no volguéssim que miri que les paraules consecutives que són igual que la primera, sino que volguesim comprobar quina es la sequencia mes llarga, haurem de descomentar el seguent codi:
      // inicial = seq;
    } else {
      cont++;
      if (cont > max) {
        max = cont;
      }
    }
  }
  cout << max << endl;
}
