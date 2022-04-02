#include "LlistaIOParInt.hh"

// Lectura i escriptura de llistes de int
/*
ostream& operator<<(ostream &os, const list<int> &l)
// Pre: cert 
// Post: s'han escrit els enters de la llista l al canal estàndard de sortida 
{
    os << "[";
    for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
        if (it!=l.begin()) os << ",";
        os << (*it);
    }
    os << "]" << endl;
    return os;
}

istream& operator>>(istream &is, list<int> &l)
// Pre: cert
// Post: la llista l passa a tenir els enters llegits del canal estàndard d'entrada
{
    int n;
    is >> n;
    list<int>::iterator it = l.begin();
    while (n>0) {
        int e;
        is >> e;
        l.insert(it,e);
        --n;
    }
    return is;
}*/

// Pre: l és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han afegit al final de l els parells llegits fins al 0 0 (no inclòs)
void LlegirLlistaParInt(list<ParInt>& l)
{
    ParInt p;
    while(p.llegir()) 
    {
        l.push_back(p);
    }
}

// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de l
void EscriureLlistaParInt(const list<ParInt>& l)
{
    list<ParInt> lc = l;
    while(!lc.empty())
    {
        ParInt p = lc.front();
        p.escriure();
        lc.pop_front();
    }
}