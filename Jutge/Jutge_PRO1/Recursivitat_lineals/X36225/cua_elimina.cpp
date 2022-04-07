#include "cua_elimina.hpp"

using namespace std;


//PRE: C, és una cua no buida.
//POST: Retorna els elements diferents al punt p de la cua c.
queue<Punt> elimina_puntsRec (queue<Punt>& c, queue<Punt>& q, Punt p )
{
    if (!c.empty())
    {
        if (c.front().coordenadax() != p.coordenadax() or c.front().coordenaday() != p.coordenaday())
        {
            q.push(c.front());
        }
        c.pop();
        return elimina_puntsRec(c, q, p);
    }
    return q;
}


// Pre: c = C i p = P 
// Post: retorna la cua C on s'han eliminat totes les aparicions del punt P 
queue<Punt> elimina_punts(queue<Punt> c, Punt p)
{
    queue<Punt> q;
     return elimina_puntsRec(c, q, p);
}

