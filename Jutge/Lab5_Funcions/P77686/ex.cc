#include <iostream>
using namespace std;

bool is_palindromic(int n) {
	int n1 = n, n0 = 0, num = 0;
	while (n != 0) {
		num = n % 10;
		n /= 10;
		n0 = num+(n0 * 10);
	}
	if (n1 == n0) return true;
	else return false;
}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}
