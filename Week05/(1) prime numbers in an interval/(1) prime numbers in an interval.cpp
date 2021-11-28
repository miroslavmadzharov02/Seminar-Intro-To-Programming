using namespace std;
#include <iostream>

bool isPrime(int number)
{
	if (number == 0 || number == 1)
	{
		return false;
	}
	else
	{
		for (int i = 2; i <= number / 2; i++)
		{
			if (number % i == 0)
			{
				return false;
			}
		}
	}

	return true;
}

void printPrimeNumsInInterval(int leftBorder, int rightBorder)
{
	for (int i = leftBorder; i <= rightBorder; i++)
	{
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}
}

int main()
{
	int leftBorder, rightBorder;

	cin >> leftBorder >> rightBorder;

	printPrimeNumsInInterval(leftBorder, rightBorder);
}

