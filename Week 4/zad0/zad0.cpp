using namespace std;
#include <iostream>

int main()
{
	int number = 0, factorial = 1;

	cout << "n=";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}

	cout << number << "! is: " << factorial;
}


