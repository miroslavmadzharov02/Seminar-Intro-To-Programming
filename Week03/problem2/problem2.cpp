using namespace std;
#include <iostream>

int main()
{
	int amountOfSmallLetters = 0, amountOfCapitalLetters = 0,
		amountOfDigits = 0, amountOfSymbols = 0;

	char symbol;

	for (int i = 0; i < 10; i++)
	{
		cin >> symbol;

		if (symbol >= 'a' && symbol <= 'z')
		{
			amountOfSmallLetters++;
		}
		else if (symbol >= 'A' && symbol <= 'Z')
		{
			amountOfCapitalLetters++;
		}
		else if (symbol >= 48 && symbol <= 57)
		{
			amountOfDigits++;
		}
		else
		{
			amountOfSymbols++;
		}
	}
	
	cout << "The amount of small letters is: " << amountOfSmallLetters << endl;
	cout << "The amount of capital letters is: " << amountOfCapitalLetters << endl;
	cout << "The amount of digits is: " << amountOfDigits << endl;
	cout << "The amount of symbols is: " << amountOfSymbols << endl;
}

