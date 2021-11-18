#include <iostream>
#include <string>

using namespace std;

int main(){
	string primera, seq;

	cin >> primera;

	int max = 1, cont = 1;

	while (cin >> seq) {
		// INV: 
		if (primera != seq) { cont = 0; }
		else {
			cont++;
			if (cont > max) { max = cont; }
		}
	}
	cout << max << endl;
}
