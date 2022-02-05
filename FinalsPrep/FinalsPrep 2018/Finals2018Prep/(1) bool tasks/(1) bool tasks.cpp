#include <iostream>

bool isQuadrilateralPossible(const int& angle1, const int& angle2, const int& angle3, const int angle4)
{
	return angle1 + angle2 + angle3 + angle4 == 360;
}

bool isTensDigitLessThanSevenAndFactorOfThree(int number)
{
	int tensDigit = (number % 100) / 10;
	bool lessThanSeven = tensDigit < 7;
	bool factorOfThree = tensDigit % 3 == 0;
	return lessThanSeven && factorOfThree;
}

int main()
{
    int angles[4];
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Enter angle " << i + 1 << " value:\n";
		std::cin >> angles[i];
	}
	std::cout << std::boolalpha << isQuadrilateralPossible(angles[0], angles[1], angles[2], angles[3]) << '\n';

	int number;
	std::cout << "Enter number:\n";
	std::cin >> number;
	if (number < 10)
	{
		std::cout << number << " has no tens digit to check\n";
		return 0;
	}
	std::cout << std::boolalpha << isTensDigitLessThanSevenAndFactorOfThree(number);

    return 0;
}
