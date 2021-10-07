#include <iostream>,<math.h>,<stdio.h>

using namespace std;

int main() {
	double number, exponent;
	int result;

	while (cin >> number >> exponent) {
		result = pow(number, exponent);
		cout << result << endl;
	}
}