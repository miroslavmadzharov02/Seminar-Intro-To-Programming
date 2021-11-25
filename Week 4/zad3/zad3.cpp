using namespace std;
#include <iostream>

int main()
{
	int count, num1 = 0, num2 = 1, nextItem = 0;

	cin >> count;

	if (count == 0)
	{
		cout << 0;
	}
	if (count == 1)
	{
		cout << 1;
	}
	else
	{
		for (int i = 0; i < count - 2; i++)
		{
			nextItem = num1 + num2;
			num1 = num2;
			num2 = nextItem;
		}

		cout << nextItem;
	}
}
