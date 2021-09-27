#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Creation of a parameter
	int x;

	//Read a parameter
	cin >> x;
	//Usage of the conditionals if and else in a programme
	if (x > 30) {
		cout << "fa calor" << endl;
		if (x >= 100) {
			cout << "l'aigua bulliria" << endl;
		}
	} else if (x < 10){
		cout << "fa fred" << endl;
		if (x <=0) {
			cout << "l'aigua es gelaria" << endl;
		}
	} else {
		cout << "s'esta be" << endl;
	}
}
