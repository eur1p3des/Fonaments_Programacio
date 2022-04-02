#include <iostream>
#include <stack>
using namespace std;


void escriu_de_cim_a_base(stack<int>& pila){
     while( not pila.empty()){
     	cout << pila.top() << " ";
	pila.pop();
     }
     cout << endl;
}

void escriu_de_base_a_cim(stack<int>& pila){
    stack<int> base_cima;
    while ( not pila.empty()){
    	base_cima.push(pila.top());
	pila.pop();
    }
    while (not base_cima.empty()){
    	cout << base_cima.top() << " ";
	base_cima.pop();
    }
    cout << endl;

}


int main() {
  int n;
  while (cin >> n) {
    stack<int> pila;
    while (n--) {
      int x;
      cin >> x;
      pila.push(x);
    }

    stack<int> copia = pila;
    escriu_de_cim_a_base(pila);
    escriu_de_base_a_cim(copia);
  }
}
