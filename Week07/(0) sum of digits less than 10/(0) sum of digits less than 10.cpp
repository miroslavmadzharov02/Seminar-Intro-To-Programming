using namespace std;
#include <iostream>

const int MAX_SIZE = 100;

void enterArray(int arrayLength, int arr[MAX_SIZE])
{
	for (int i = 0; i < arrayLength; i++)
	{
		cin >> arr[i];
	}
}

void printArray(int arrayLength, int arr[MAX_SIZE])
{
	for (int i = 0; i < arrayLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int sumOfDigits(int number)
{
	int sum = 0, currentDigit = number % 10;

	do
	{
		sum += currentDigit;
		number /= 10;
		currentDigit = number % 10;
	} while (number > 0);

	return sum;
}

bool sumOfDigitsLessThanTenCheck(int number)
{
	if (sumOfDigits(number) < 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printArrayWithResults(int arrayLength, int arr[MAX_SIZE])
{
	int arrResults[MAX_SIZE], count = 0;
	for (int i = 0; i < arrayLength; i++)
	{
		if (sumOfDigitsLessThanTenCheck(arr[i]))
		{
			arrResults[count] = arr[i];
			count++;
		}
	}
	
	if (count == 0)
	{
		cout << "No numbers meet the condition";
	}
	else
	{
		printArray(count, arrResults);
	}
}

int main()
{
    int arrayLength, arr[MAX_SIZE];

    cin >> arrayLength;
	enterArray(arrayLength,arr);

	printArrayWithResults(arrayLength,arr);
}

