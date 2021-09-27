#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Creation of a parameter 
	int x, y;
	
	//Read a parameter
	cout << "Escull un valor per al paràmetre x (NUMÈRIC)" << endl;
	cin >> x;

	cout << "Escull un valor per al paràmetre y (NUMÈRIC)" << endl;
	cin >> y;
	
	//Print results or commands
	cout << "Valor inicial de x:" << endl;
	cout << x << endl;

	cout << "Valor inicial de y" << endl;
	cout << y<< endl;
	
	//Usage of the conditionals if and else in a programme
	if (y > x){	
		cout << "Operació: x+y" << endl;
		cout << x + y << endl;
	} else {
		cout << "Operació: y*x" << endl;
		cout << y * x << endl;
	}

	//cout << "Operació: x - y" << endl;
	//cout << x - y << endl;
	
	//In order to make the division pop up with decimals, we will use float or double right before the first parameter
	//cout << "Operació: x / y" << endl;
	//cout << double(x) / y << endl;
	
	//cout << "Operació: x % y" << endl;
	//cout << x % y << endl;
}
