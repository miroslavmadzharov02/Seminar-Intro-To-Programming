using namespace std;
#include <iostream>

int main()
{
	int number = 0;
	int maxValue = number;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Enter number " << i << " : ";
		cin >> number;

		if (number > maxValue)
		{
			maxValue = number;
		}
	}

	cout << "The biggest number is: " << maxValue << endl;
}

