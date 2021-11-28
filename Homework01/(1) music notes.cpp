using namespace std;
#include <iostream>

int main()
{
	int firstTone, secondTone, firstOctave, secondOctave, 
		firstTonePosition = 0, secondTonePosition = 0, difference;

	cout << "Enter first tone:";
	cin >> firstTone;

	cout << "Enter first octave:";
	cin >> firstOctave;

	cout << "Enter second tone:";
	cin >> secondTone;

	cout << "Enter second octave:";
	cin >> secondOctave;

	firstTonePosition = firstTone;
	secondTonePosition = secondTone;

	for (int i = 1; i < firstOctave; i++)
	{
		firstTonePosition += 7;
	}

	for (int i = 1; i < secondOctave; i++)
	{
		secondTonePosition += 7;
	}

	if (firstTonePosition >= secondTonePosition)
	{
		difference = firstTonePosition - secondTonePosition;
	}
	else
	{
		difference = secondTonePosition - firstTonePosition;
	}

	if (difference > 8)
	{
		if (firstTone >= secondTone)
		{
			difference = firstTone - secondTone;
		}
		else
		{
			difference = secondTone - firstTone;
		}
	}

	switch (difference)
	{
	case 0:
		std::cout << "Prima -> normal sound";
		break;
	case 1:
		std::cout << "Sekunda -> dissonant sound";
		break;
	case 2:
		std::cout << "Terca -> most melodious sound";
		break;
	case 3:
		std::cout << "Kvarta -> normal sound";
		break;
	case 4:
		std::cout << "Kvinta -> hollow sound";
		break;
	case 5:
		std::cout << "Seksta -> normal sound";
		break;
	case 6:
		std::cout << "Septima -> dissonant sound";
		break;
	case 7:
		std::cout << "Oktava -> normal sound";
		break;
	default:
		break;
	}
}

