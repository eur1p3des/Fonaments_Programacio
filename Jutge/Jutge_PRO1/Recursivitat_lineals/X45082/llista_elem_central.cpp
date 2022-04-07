#include <list>
#include "llista_elem_central.hpp"
using namespace std;


int elem_central_rec ( list<int>& aux, int element_central, int &contador, int tamany)
{
    if (!aux.empty())
    {
        if (tamany/2 == contador) element_central = aux.front();
        aux.pop_front();
        contador++;
        return elem_central_rec(aux, element_central, contador, tamany);
    }
    return element_central;
}

// Pre: l = L i la mida de L és senar 
// Post: El resultat es l'element central de L
int elem_central(const list<int> &l){
    list<int> aux = l;
    int tamany = aux.size()-1;
    int element_central=0, contador = 0;
    return elem_central_rec(aux, element_central, contador, tamany);
}

