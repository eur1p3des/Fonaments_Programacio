#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	if (a < b){
		while ( b >= a){
			cout << b << endl;
			b--;
		}
	} else if (b < a) {
		while (a >= b){
			cout << a << endl;
			a--;
		}
	} else {
		cout << a << endl;
	}

}
