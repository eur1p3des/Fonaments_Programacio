#include <stack>
using namespace std;

// Pre: p = P i q = Q i concatp es buida 
// Post: concatp conte a dalt els elements de P en 
// el mateix ordre, i a sota els elements de Q en el mateix
// ordre 
void concatena_piles(stack<int> &p, stack<int> &q, stack<int> &concatp)
{
   int a;
   if(!p.empty())
   {
      a = p.top();
      p.pop();
      concatena_piles(p,q,concatp);
      concatp.push(a);
   }
   if(!q.empty())
   {
      a = q.top();
      q.pop();
      concatena_piles(p, q, concatp);
      concatp.push(a);
   }
}
