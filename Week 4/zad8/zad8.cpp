using namespace std;
#include <iostream>

int main()
{
	char letter = 64;
	
	for (int i = 0; i < 26; i++)
	{
		letter++;

		if (letter == 'A' || letter == 'E' || letter == 'I' 
			|| letter == 'O' || letter == 'U' || letter == 'Y')
		{
			continue;
		}

		cout << letter;
	}
}
