using namespace std;
#include <iostream>

int main()
{
	int number = 0;
	bool isPrime = true;

	cin >> number;

	if (number == 0 || number == 1)
	{
		isPrime = false;
	}
	else
	{
		for (int i = 2; i <= number/2; i++)
		{
			if (number % i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}

	if (isPrime)
	{
		cout << number << " is a prime number.";
	}
	else
	{
		cout << number << " is not a prime number.";
	}
}
	