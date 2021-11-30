using namespace std;
#include <iostream>

const int MAX_SIZE = 100;

void enterArray(int arrayLength, double arr[MAX_SIZE])
{
	for (int i = 0; i < arrayLength; i++)
	{
		cin >> arr[i];
	}
}

int numInArrayCount(int arrayLength, double arr[MAX_SIZE], double numberToFind)
{
	int count = 0;

	for (int i = 0; i < arrayLength; i++)
	{
		if (numberToFind == arr[i])
		{
			count++;
		}
	}

	return count;
}

void printCountOfNumInArray(int arrayLength, double arr[MAX_SIZE], double numberToFind)
{
	int count = numInArrayCount(arrayLength, arr, numberToFind);

	if (count == 0)
	{
		cout << "The number is not found in the array.";
	}
	else
	{
		cout << "The number is found " << count << " times in the array." << endl;
	}
}

void printIndexesOfNumInArray(int arrayLength, double arr[MAX_SIZE], double numberToFind)
{
	if (numInArrayCount(arrayLength, arr, numberToFind) != 0)
	{
		cout << "The number " << numberToFind << " is found at indexes: ";

		for (int i = 0; i < arrayLength; i++)
		{
			if (numberToFind == arr[i])
			{
				cout << i << " ";
			}
		}
	}
}

int main()
{
	int arrayLength;
	double arr[MAX_SIZE];

	cin >> arrayLength;
	enterArray(arrayLength, arr);

	double numberToFind;
	cout << "What number to search for? ";
	cin >> numberToFind;

	printCountOfNumInArray(arrayLength, arr, numberToFind);
	printIndexesOfNumInArray(arrayLength, arr, numberToFind);
}

