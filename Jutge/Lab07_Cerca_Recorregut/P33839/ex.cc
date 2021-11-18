#include <iostream>

using namespace std;

int main() {
	int number, sum = 0, remainder, mod = 10, val = 0;

	while (cin >> number) {
		val = number;
		while (number > 0) {
			// INV: La variable "val", no varia al llarg de l'execucijó del codi
			remainder = number % mod;
			sum = sum + remainder;
			number = number / mod;
		}
		cout << "The sum of the digits of " << val << " is " << sum << "." << endl;
		sum = 0;
	}
}