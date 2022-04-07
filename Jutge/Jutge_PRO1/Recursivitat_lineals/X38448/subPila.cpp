#include <iostream>
#include "subPila.hpp"

//PRE: p1 no pot ser buida, i p2 no pot ser buida. Per tant, el tamany2 (p2.size()) no hauria de ser 0
//POST: si la pila 2 es subpila de la pila 1, es retorna un true, altrament false
//Terminació: Quan la pila 1 estigui buida, es deixarà d'executar la recursivitat, i es retornarà true o false segons escaigui
bool subPila_rec( stack<int>& p1, stack<int>& p2, int& contador, const int tamany2)
{
    if (!p1.empty())
    {
        if (!p2.empty())
        {
            if (p1.top() == p2.top())
            {
                contador++;
                p2.pop();
            }
            else{
                contador = 0;
            } 
        }
        p1.pop();
        //HI: subPila_rec, ara rep p1, amb un element menys, p2 serà <= a p2 original, segons si el primer valor ja ha estat trobat, el contador valdrà 0 o contador+1, segons si ha aparescut el valor que busquem o no, i tamany2 al ser constant no tindrà variacions.
        return subPila_rec(p1, p2, contador, tamany2);
    }
    if (contador == tamany2) return true;
    return false;
}



// PRE: 
// POST: true sii p2 és una subpila de p1. 
bool subPila (stack<int> p1, stack<int> p2){
    int contador = 0;
    int tamany2 = p2.size();
    return subPila_rec(p1, p2, contador, tamany2);
}
