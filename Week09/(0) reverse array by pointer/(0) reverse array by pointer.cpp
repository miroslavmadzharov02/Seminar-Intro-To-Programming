#include <iostream>

void printArray(int* arr, const int& size)
{
	std::cout << "Array values are:\n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void reverse(int* arr, const int& size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}

int main()
{
    int arr[] = { 1,2,3,4,5 };
	reverse(arr, 5);
	printArray(arr, 5);

    return 0;
}
