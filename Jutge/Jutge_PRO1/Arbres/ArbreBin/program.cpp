#include "arbreBin.hpp"
#include "listIOint.hpp"
#include <stack>
#include <queue>
#include <list>
#include <iostream>
#include <string>
using namespace std;

// Aquest main és per provar la classe arbreBin instanciada amb int


int it_mida(const arbreBin<int> &a)
// Pre: a = A 
// Post: el resultat és el nombre de nodes de l'arbre A 
{
    stack<arbreBin<int>> p;
    
    p.push(a);
    int nnodes = 0;
  
    while (not p.empty()) {
        arbreBin<int> a1 = p.top();
        p.pop();
        if (not a1.es_buit()) {
          ++nnodes;
          if (not a1.fe().es_buit()) p.push(a1.fe());
          if (not a1.fd().es_buit()) p.push(a1.fd());
        }
    }
    return nnodes;
}

int mida(const arbreBin<int> &a)
// Pre: a = A 
// Post: el resultat és el nombre de nodes de l'arbre A 
{
    int nnodes;
    if (a.es_buit()) nnodes = 0;
    else{
        arbreBin<int> a1 = a.fe();
        arbreBin<int> a2 = a.fd();
        int y = mida(a1);
        int z = mida(a2);
        nnodes = y + z + 1;
    }
    return nnodes;
}

bool it_cerca(const arbreBin<int> &a, int x)
// Pre: a = A 
// Post: el resultat indica si x és a l'arbre A o no 
{
    stack<arbreBin<int>> p;
    
    p.push(a);
    bool trobat = false;
    
    while (not p.empty() and not trobat) {
        arbreBin<int> a1 = p.top();
        p.pop();
        if (not a1.es_buit()) {
          if (a1.arrel() == x) trobat = true;
          else {
                if (not a1.fe().es_buit()) p.push(a1.fe());
                if (not a1.fd().es_buit()) p.push(a1.fd());
          }
        }
    }
    return trobat;
}

int it_fulles(const arbreBin<int> &a)
// Pre: a = A 
// Post: el resultat és el nombre de fulles de l'arbre A 
{
    stack<arbreBin<int> > p;
    
    p.push(a);
    int nnodes = 0;
    
    while (not p.empty()) {
        arbreBin<int> a1 = p.top();
        p.pop();
        if (not a1.es_buit()) {
            if (a1.fe().es_buit() and a1.fd().es_buit()) ++nnodes;  // es fulla
            else {  // no es fulla
                if (not a1.fe().es_buit()) p.push(a1.fe());
                if (not a1.fd().es_buit()) p.push(a1.fd());
            }
        }
    }
    return nnodes;
}

list<int> it_preordre(const arbreBin<int> &a)
// Pre: a = A 
// Post: el resultat conté els nodes d'A recorreguts en preordre 
{
    stack<arbreBin<int>> p;
    
    p.push(a);
    list<int> l;
    
    while (not p.empty()) {
        arbreBin<int> a1 = p.top();
        p.pop();
        if (not a1.es_buit()) {
            l.insert(l.end(), a1.arrel());
            if (not a1.fd().es_buit()) p.push(a1.fd());
            if (not a1.fe().es_buit()) p.push(a1.fe());
        }
    }
    return l;
}

void amplada(const arbreBin<int> &a, list<int> &l)
// Pre: a = A, l es buida 
// Post: l conte els nodes d'A en ordre creixent respecte al 
// nivell al qual es troben, i els de cada nivell en ordre 
// d'esquerra a dreta 
{
    if (not a.es_buit()) {
        queue <arbreBin<int>> c;
        c.push(a);
        
        while (not c.empty()) {
            l.insert(l.end(),c.front().arrel());
            arbreBin<int> a1 = c.front().fe();
            arbreBin<int> a2 = c.front().fd();
            if (not a1.es_buit()) c.push(a1);
            if (not a2.es_buit()) c.push(a2);
            c.pop();
        }
    }
}

/*************************************************************************/

int main (){
	
    arbreBin<int> ar;
	cin >> ar;
    cout << ar << endl;
    
    //provem totes les operacions que hem definit
	
    cout << " Mida de l'arbre (it.): " << it_mida(ar) << endl;
	cout << " Mida de l'arbre (rec.): " << mida(ar) << endl;

	cout << " Entra l'enter que busques: ";
	int v;
    cin >> v;
	cout << v << endl;	
    if (it_cerca(ar, v)) cout << " El valor " << v << " es a l'arbre." << endl;
    else cout << " El valor " << v << "no es a l'arbre." << endl;
    
    cout << " Nombre de fulles de l'arbre: " << it_fulles(ar) << endl;
	
	cout << " Preordre: " << it_preordre(ar) << endl;
	
	list<int> la;
    amplada(ar, la);
    cout << " Amplada: " << la << endl;
}



 
