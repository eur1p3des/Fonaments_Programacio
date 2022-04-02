#include "Punt.hpp"
#include <stack>
#include <iostream>
using namespace std;

// Lectura i escriptura de piles de punt

ostream& operator<<(ostream&, stack<Punt>);
/* Pre: cert */
/* Post: s'han escrit els enters de la pila
   al canal estàndard de sortida */

istream& operator>>(istream&, stack<Punt> &);
/* Pre: cert */
/* Post: la pila passa a tenir els enters llegits del canal 
   estàndard d'entrada */

