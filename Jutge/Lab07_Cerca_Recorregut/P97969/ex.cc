#include <iostream>
#include <string>

using namespace std;

int main() {
	string frase;
	int as = 0;

	for  (int i = 0; i < frase.size();  i++)
	{
		if (frase.at(i) == 'a') {
			as += 1;
		}
	}
	cout << as << endl;
}