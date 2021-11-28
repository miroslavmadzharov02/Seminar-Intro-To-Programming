﻿using namespace std;
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

int main()
{
    int number;

    cin >> number;

	if (isPrime(number))
	{
		cout << number << " is prime.";
	}
	else
	{
		cout << number << " is not prime.";
	}
}

