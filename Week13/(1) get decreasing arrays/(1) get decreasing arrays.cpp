#include <iostream>

void printArr(int* arr, const int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
}

bool isArrDescending(int* arr, const int& size)
{
	for (int i = 0; i < size - 1; i++) 
		if (arr[i] < arr[i + 1])  return false;
	return true;
}

void printDescendingArrays(int arrOfArrays[][3], const int& rows, const int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		if (isArrDescending(arrOfArrays[i], cols))
		{
			printArr(arrOfArrays[i], cols);
		}
	}
}

int main()
{
	int arrOfArrays[5][3] = { {5, 4, 3},
						{4, 5, 8},
						{3, 1, 0},
						{6, 7, 5},
						{8, 5, 90} };

	printDescendingArrays(arrOfArrays, 5, 3);
    return 0;
}
