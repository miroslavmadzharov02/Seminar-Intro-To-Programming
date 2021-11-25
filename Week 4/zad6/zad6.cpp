using namespace std;
#include <iostream>

int main()
{
	int number = 0, power = 0, result = 1;

	cin >> number >> power;

	for (int i = 0; i < power; i++)
	{
		result *= number;
	}

	cout << result;
}
