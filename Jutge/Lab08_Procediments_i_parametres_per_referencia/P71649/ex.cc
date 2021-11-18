#include <iostream>

using namespace std;

void count_and_add(int& numb, int& sum) {
	int n;
	int num = 0, sum = 0;
	while (cin >> n) {
		num++;
		sum += n;
	}
}

int main() {
	int num, sum;
	count_and_add(num, sum);
	cout << num << ' ' << sum << endl;
}