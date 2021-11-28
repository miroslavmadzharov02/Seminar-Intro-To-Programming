using namespace std;
#include <iostream>

int absolute(int number)
{
	if (number >= 0)
	{
		return number;
	}
	else
	{
		return number * -1;
	}
}

double pow(double base, int power)
{
	if (power == 0)
	{
		return 1;
	}
	double result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= base;
	}

	return result;
}

int minOf2Nums(int num1, int num2)
{
	return num1 < num2 ? num1 : num2;
}

int maxOf2Nums(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

int maxOf3Nums(int num1, int num2, int num3)
{
	return maxOf2Nums(maxOf2Nums(num1, num2), num3);
}

int minOf3Nums(int num1, int num2, int num3)
{
	return minOf2Nums(minOf2Nums(num1, num2), num3);
}

bool isAlphabet(char symbol)
{
	return (symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122);
}

bool isDigit(char symbol)
{
	return symbol >= 48 && symbol <= 57;
}

int main()
{
	int number, power, firstNum, secondNum;
	double base;

	cout << "Test abs(): ";
	cin >> number;
	cout << "|" << number << "| = " << absolute(number) << endl;

	cout << "Test power(). Enter base:";
	cin >> base;
	cout << endl;
	cout << "Enter power:";
	cin >> power;

	cout << pow(base, power);
	
	cout << endl;
	cout << "Test minOf2Nums: Enter first number:";
	cin >> firstNum;
	cout << "Enter second number:";
	cin >> secondNum;
	cout << "Minimal number is: " << minOf2Nums(firstNum,secondNum);

	cout << endl;
	cout << "Test maxOf2Nums: Enter first number:";
	cin >> firstNum;
	cout << "Enter second number:";
	cin >> secondNum;
	cout << "Maximal number is: " << maxOf2Nums(firstNum, secondNum);


}

