#include <iostream>

using namespace std;

// Function to find the absolute value
int absolute(int n)
{

	// If the number is less than 0 make it positive
	if (n < 0)
	{
		n = (-1) * n;
	}

	// Print the absolute value
	return n;
}

// Driver Code
int main()
{

	// Given integer
	int n;
	cin >> n;

	// Function call
	cout << absolute(n) << "\n";
	return 0;
}
