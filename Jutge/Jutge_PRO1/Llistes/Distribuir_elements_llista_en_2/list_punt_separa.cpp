#include <list>
#include "Punt.hpp"

/* Pre: lp1 i lp2 estan buides */
/* Post:
   lp1 conté els punts de lp amb la coordenada x estrictament menor que x,
   lp2 conté els punts de lp amb la coordenada x estrictament major que x,
   lp està buida.*/
void separa(list<Punt> &lp, float x, list<Punt> &lp1, list<Punt> &lp2){
      while (!lp.empty())
      {
         Punt punt = lp.front();
         if ( punt.coordenadax() > x)
         {
            lp2.push_back(lp.front());
            lp.pop_front();
         }
         if (punt.coordenadax() < x)
         {
            lp1.push_back(lp.front());
            lp.pop_front();
         }
         if (punt.coordenadax() == x)
         {
            lp.pop_front();
         }
      }
}
