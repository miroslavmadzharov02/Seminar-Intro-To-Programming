using namespace std;
#include <iostream>

int main()
{
	int number = 0;
	cin >> number;
	
	int positionOfZero = 0, numberOfPlus = 0, numberOfMinus = 0;

	for (int i = 0; i < number; i++)
	{

		if (positionOfZero == 0)
		{
			cout << 0;
			for (int i = 0; i < number-1; i++)
			{
				cout << '+';
			}
			cout << endl;
			positionOfZero++;
		}
		else if (positionOfZero != 0)
		{
			for (int i = 0; i < positionOfZero; i++)
			{
				cout << '-';
			}

			cout << 0;

			for (int i = 0; i < number - positionOfZero - 1; i++)
			{
				cout << '+';
			}
			
			cout << endl;
			positionOfZero++;
		}
	}
}
