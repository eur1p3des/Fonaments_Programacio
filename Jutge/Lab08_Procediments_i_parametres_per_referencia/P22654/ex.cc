#include <iostream>

using namespace std;

void decompose(int n, int& h, int& m, int& s) {
	s = n % 60;
	m = n / 60;
	h = m / 60;
	m = m % 60;
}

int main() {
	int n, s, m, h;
	while (cin >> n) {
		decompose(n, h, m, s);
		cout << h << ' ' << m << ' ' << s << endl;
	}
}