using namespace std;
#include <iostream>

int main()
{
	int kilometers = 0, amountOfMoneySpent = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> kilometers;

		if (kilometers <= 100)
		{
			amountOfMoneySpent += kilometers * 10;
		}
		else if (kilometers > 100 && kilometers <= 500)
		{
			amountOfMoneySpent += kilometers * 8;
		}
		else if (kilometers > 500 && kilometers <= 1000)
		{
			amountOfMoneySpent += kilometers * 6;
		}
		else if (kilometers > 1000)
		{
			amountOfMoneySpent += kilometers * 5;
		}
	}

	cout << amountOfMoneySpent;
}

