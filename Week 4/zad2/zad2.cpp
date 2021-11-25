using namespace std;
#include <iostream>

int main()
{
	int count = 0, biggestNegative = INT_MIN, number = 0;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> number;
		if (number < 0)
		{
			if (biggestNegative < number)
			{
				biggestNegative = number;
			}
		}
	}

	cout << "The biggest negative number is: " << biggestNegative;
}
