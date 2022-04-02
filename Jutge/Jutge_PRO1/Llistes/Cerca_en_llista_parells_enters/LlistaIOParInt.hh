#include <list>
#include <iostream>
#include "ParInt.hh"
using namespace std;

// Lectura i escriptura de llistes de int
/*
ostream& operator<<(ostream &os, const list<int> &l);
// Pre: cert 
// Post: s'han escrit els enters de la llista l al canal estàndard de sortida 

istream& operator>>(istream &is, list<int> &l);
// Pre: cert 
// Post: la llista l passa a tenir els enters llegits del canal estàndard d'entrada */

void LlegirLlistaParInt(list<ParInt>& l);
// Pre: l és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han afegit al final de l els parells llegits fins al 0 0 (no inclòs)

void EscriureLlistaParInt(const list<ParInt>& l);
// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de l