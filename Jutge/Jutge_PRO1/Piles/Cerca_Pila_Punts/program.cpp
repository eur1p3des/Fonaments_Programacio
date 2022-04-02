#include "stackIOpunt.hpp"
#include <iostream>
#include <stack>

using namespace std;

bool existeix(Punt p, stack<Punt> s)
{
	while (!s.empty())
	{
		if (p == s.top()) return true;
		s.pop();
	}
	return false;
}


int main(){
   stack<Punt> s;
   cin >> s;
   cout << s;
   Punt p;
   
   while (cin >> p)
   {
   	if(existeix(p, s)) cout << "El punt " << p << " es troba en la pila." << endl;
   	else cout << "El punt " << p << " no es troba en la pila." << endl;
   }
}
