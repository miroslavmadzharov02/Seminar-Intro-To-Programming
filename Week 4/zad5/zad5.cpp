using namespace std;
#include <iostream>

int main()
{
	int randomDigitNumber = 1, sumOfDigits = 0, singleDigit = 0;

	cin >> randomDigitNumber;

	while (randomDigitNumber > 0)
	{
		singleDigit = randomDigitNumber % 10;
		sumOfDigits += singleDigit;
		randomDigitNumber = randomDigitNumber / 10;
	}

	cout << sumOfDigits;
}
