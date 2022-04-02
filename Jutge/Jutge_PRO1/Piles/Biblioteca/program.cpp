#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void unstack(stack <string>& pila) {
    if (pila.empty()) return;

    string llibre = pila.top();

    pila.pop();
    unstack(pila);

    cout << ' ' << llibre;
}

int main () {
    int n;
    cin >> n;

    cin.ignore();

    vector<stack<string> > llibres(n);
    for( int i = 0; i < (int)llibres.size(); ++i )
    {
        string llista_llibres;
        if (getline(cin, llista_llibres)) {
            stringstream SS(llista_llibres);
            for (string llibre; SS >> llibre;) llibres[i].push(llibre);
        
        }
    }

    cin.ignore();

    for (string action; cin >> action;) {
        if (action == "PRESTEC") {
            int pila;
            cin >> pila;
            --pila;

            if (pila >= 0 and pila < n and !llibres[pila].empty()) llibres[pila].pop();
        } else {
            string title;
            int pila;
            cin >> title >> pila;
            --pila;

            if (pila >= 0 and pila < n) llibres[pila].push(title);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << "Pila " << i+1 << ':';
        unstack(llibres[i]);
        cout << endl;
    }
}
