#include <iostream>

using namespace std;

int main()
{
	//Creation of a parameter 
	int x;
	
	//Read a parameter
	cout << "Escull un valor per al paràmetre x (NUMÈRIC)" << endl;
	cin >> x;

	//Print results or commands
	cout << "Valor inicial de x:" << endl;
	cout << x << endl;

	cout << "Valor de x amb una operació:" << endl;
	cout << "Operació: x+1" << endl;
	cout << x+1 << endl;

	cout << "Valor de x amb varies operacions:" << endl;
	cout << "Exemple 1:" << endl;
	cout << "Operació: 2*x+1" << endl;
	cout << 2*x+1 << endl;
	cout << "Exemple 2:" << endl;
	cout << "Operació: 2*(x+1)" << endl;
	cout << 2*(x+1) << endl;
}
