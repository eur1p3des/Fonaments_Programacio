#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matriu;

//DESC: A partir de les matrius "a" i "b", obtenim la matriu "c", la qual es la suma de les dues anteriors
//PRE: Matrius "a" i "b", a més del typedef Matrix
//POST: Retorna el valor de la matriu "c"
Matriu suma(const Matriu& a, const Matriu& b){
    Matriu c (a.size(), vector <int> (a.size()));
    int i = 0;

    while (i < a.size()){
        int j = 0;
        while (j < a[i].size()){
          //INV: c[i][j] conté la suma de a[i][j] i b[i][j]
          c[i][j] = a[i][j] + b[i][j];
          j++;
        }
        i++;
    }
    return c;
}



int main ()
{
    int n;
    while (cin >> n) {
        Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = suma(A, B);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
