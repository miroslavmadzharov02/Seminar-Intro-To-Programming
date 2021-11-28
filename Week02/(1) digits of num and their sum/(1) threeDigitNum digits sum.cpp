#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	cin >> number;

	short digit1, digit2, digit3;
	digit3 = number % 10;
	digit2 = (number / 10) % 10;
	digit1 = number / 100;

	int sum = digit1 + digit2 + digit3;

	cout << "first digit=" << digit1 << endl;

	cout << "sum=" << sum;

}

// unsigned (int) = only positive//

