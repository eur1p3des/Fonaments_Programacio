#include "esborraSenars.hpp"
using namespace std;

//PRE: Rep la pila P.
//POST:  Retorna la mateixa pila P, però només amb els elements parells.
//TERMINACIÓ: Quan la pila P ha estat buidada, aquesta s'omple amb els valors parells. I s'acaba l'execució.
void esborraSenars (stack<int>& P)
{
    int a;
    bool trobat = false;
    if (!P.empty())
    {
        int primer = P.top();
        if( primer%2 == 0 )
        {
            a = P.top();
            trobat = true;
        }
        P.pop();
        //HI: La pila cada cop és més petita fins a estar buida.
        esborraSenars(P);
    }
    if (trobat == true) P.push(a);
}
