#include <iostream>
#include <list>

using namespace std;


list<int> elimina_invalids( list<int> &valids, int valor)
{
    list<int> validats;
    int cont = 1;
    while (!valids.empty())
    {
        if (valids.front() == valor and cont == 1)
       {
            valids.pop_front();
            cont++;
        }
        else{
            validats.push_back(valids.front());
            valids.pop_front();
        }
    }
    
    return validats;
}

int maxim( list<int> valids)
{
    int maxim = 0;
    while(!valids.empty())
    {
        if (valids.front() >= maxim) maxim = valids.front();
        valids.pop_front();
    }
    return maxim;
}

int minim( list<int> valids)
{
    int minim = valids.front();
    while(!valids.empty())
    {
        if (valids.front() <= minim) minim = valids.front();
        valids.pop_front();
    }
    return minim;
}

float mitjana( list<int> valids)
{
    int suma = 0, contador = 0;
    while (!valids.empty())
    {
        suma += valids.front();
        contador++;
        valids.pop_front();
    }
    float mitja = float(suma)/float(contador);
    return mitja; 
}


int main(){
    list<int> valids;
    int codi, valor;
    while (cin >> codi >> valor and (codi != 0) and (valor != 0))
    {
        if (codi == -1)
        {
            valids.push_back(valor);
            cout << minim(valids) << " " << maxim(valids) << " " << mitjana(valids) << endl;
        }
        
        if (codi == -2)
        {
            valids = elimina_invalids(valids, valor);
            if (valids.empty()) cout << "0" << endl;
            else  cout << minim(valids) << " " << maxim(valids) << " " << mitjana(valids) << endl;
        }
    }
} 
