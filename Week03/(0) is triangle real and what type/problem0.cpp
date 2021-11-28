using namespace std;
#include <iostream>

int main()
{
	int firstSide, secondSide, thirdSide;
	cin >> firstSide >> secondSide >> thirdSide;

	bool doesTriangleExist = firstSide + secondSide > thirdSide 
							 && secondSide + thirdSide > firstSide 
							 && firstSide + thirdSide > secondSide;

	if (doesTriangleExist)
	{
		cout << "Exists. ";
		if (firstSide == secondSide == thirdSide)
		{
			cout << "Equilateral.";
		}
		else if (firstSide == secondSide || secondSide == thirdSide || firstSide == thirdSide)
		{
			cout << "Isosceles.";
		}
		else
		{
			cout << "Scalene.";
		}
	}
	else
	{
		cout << "Invalid triangle.";
	}
}

