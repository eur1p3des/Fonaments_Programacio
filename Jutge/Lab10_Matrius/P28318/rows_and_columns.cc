#include <iostream>
#include <vector>

using namespace std;


int main(){
  //Declarem les variables de files i columnes
  int ii, jj;
  
  //Demanem quantes files i comlumnes es volen per teclat.
  cin >> ii >> jj;

  //Declarem una matriu v de ii files i jj columnes;
  vector< vector< int > > v(ii, vector< int > (jj));

  //Creem la matriu v (ii x jj) demanant un valor per a cada casella
  for (int i = 0; i < ii; ++i){
    for (int j = 0; j < jj; ++j){
      cin >> v[i][j];
    }
  }

  //Creem la variable que ens dira si hem de mirar una fila o una columna
  string fc;

  //Demanem per teclat que s'informi de fila o columna i utilitzem un bucle per a fer les comprobacions.
  while ( cin >> fc ){
    
    //Condicional per a si l'entrada s es igual a fila
    if ( fc == "fila"){
      int i;
      cin >> i;
      cout << fc  << ' ' << i << ':';
      
      //Bucle que imprimeix la fila
      for (int j = 0; j < jj; ++j) {
        cout << ' ' << v[i - 1][j];
      }
      cout << endl;
    }
    
    //Condicional per a si l'entrada s es igual a columna
    else if ( fc == "columna" ) {
      int j;
      cin >> j;
      cout << fc << ' ' << j << ':';

      //Bucle que imprimeix la columna
      for (int i = 0; i < ii; ++i){
        cout << ' ' << v[i][j-1];
      }
      cout << endl;
    }

    //Condicional per a si no es compleix cap de les altres condicions anteriors
    else {
      int i, j;
      cin >> i >> j;
      
      //En cas que el programa doni error en aquesta linia, nomes cal elminiar els símbors [] que estan entre cometes
      cout << "Element [" << i << "] [" << j << "] : " << v[i-1][j-1] << endl;
    }

  }

}
