#include <iostream>
#include <vector>

using namespace std;


int main(){
  int n;

  // Declarem quantes sequencies de nombres volem entrar
  cin >> n;

  // Mentre que n sigui major a 0 es realitzara el bucle.
  while (n--){
    // Declarem un vector de tamany 1
    vector <int> v(1);
    
    // Declarem tres dades de tipus enter:
    // Cont: permetra llegir i insertar valors al vector
    // Occurrencies: Contarà cuants cops es dona en el vector que a < a+1
    // Value: Value conté el valor de la posició en el vector
    int pos = 0, occurrencies = 0, value;

    // Llegim el primer valor del vector
    cin >> v[0];
    
    // Mentre que el valor del vector en la posició pos sigui diferent a 0 s'executara el bucle.
    while ( v[pos] != 0 ){
      //Augmentem en 1 el valor de pos
      pos++;
      //Demanem el valor de value
      cin >> value;
      //Insertem value al vector v
      v.push_back(value);
    }
    
    // Mentre que i sigui menor al tamany del vector v s'executarà el bucle i s'augmentara i en 1
    for (int i = 1; i < v.size(); i++){
        // Si el valor anterior del vector en la posicio i es menor al valor de i occurrencies pasa a valdre el valor de occurrencies + 1
        if (v[i-1] < v[i]) occurrencies++;
    }
    
    //Mostrem per pantalla quantes parelles de nombres creixents hi ha, és a dir v[i] > v[i]-1
    cout << occurrencies << endl;
  
  }
}
