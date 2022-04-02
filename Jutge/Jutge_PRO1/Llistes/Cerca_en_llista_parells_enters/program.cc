#include "LlistaIOParInt.hh"

using namespace std;

int main(){
    list<ParInt> l;
    int N, aparicions=0, suma=0;
    LlegirLlistaParInt(l);
    cin >> N;
    while (!l.empty())
    {
        ParInt p = l.front();
        int x = p.primer();
        int y = p.segon();
        if (x==N)
        {
            aparicions++;
            suma+=y;
        }
        l.pop_front();
    }
    cout << N << " " << aparicions << " " << suma << endl;
}