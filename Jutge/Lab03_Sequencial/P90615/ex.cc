#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Creation of a parameter
	int x, y, z;

	//Read a parameter
	cin >> x >> y >> z;
	//Usage of the conditionals if and else in a programme
	if ((y > x and y > z) or (y == x and y > z) or (y == z and y > x)){
		cout << y << endl;
	} else if ((x > y and x > z) or (x == y and x > z) or (x == z and x > y)){
		cout << x << endl;
	} else {
		cout << z << endl;
	}
}
