using namespace std;
#include <iostream>

void printBinaryNumber(int number)
{
    int binary = 0, digitPos = 1;

	while (number > 0)
	{
		binary += digitPos * (number % 2);
		digitPos *= 10;
		number /= 2;
	}

	cout << binary;
}

int main()
{
    int number;

    cin >> number;

    printBinaryNumber(number);
}

