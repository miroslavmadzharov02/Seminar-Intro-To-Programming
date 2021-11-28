using namespace std;
#include <iostream>

int main()
{
	int number = 1 , sum = 0;

	while (number != 0)
	{
		cin >> number;
		sum += number;
	}

	cout << sum;
}
