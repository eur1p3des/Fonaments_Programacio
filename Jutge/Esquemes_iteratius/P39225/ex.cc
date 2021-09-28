#include <iostream>
using namespace std;

int main() {
	int x, n, c = 1, k = 0;
	cin >> n;
	while( cin>>x and x != -1) {
		if (c == n) {
			k = x;
		}
		c++;
	}
	cout << "At the position " << n << " there is a(n) " << k << "." << endl;
}
