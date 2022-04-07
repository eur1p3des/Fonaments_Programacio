
#include <stack>
using namespace std;

/// Declaració de la funció que heu d'implementar.
stack<int> esborraSenars_rec( stack<int>& P, stack<int>& aux)
{
    if (!P.empty())
    {
        int primer = P.top();
        if( primer%2 == 0 )
        {
            aux.push(P.top());
        }
        P.pop();
        return esborraSenars_rec(P, aux);
    }
    return aux;
}


void esborraSenars (stack<int>& P)
{
    stack<int> aux;
    aux = esborraSenars_rec(P, aux);
    P = aux;
}
