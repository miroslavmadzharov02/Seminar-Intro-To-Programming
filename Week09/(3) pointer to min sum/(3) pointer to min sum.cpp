#include <iostream>

void enterArray(int* arr, const int& size)
{
    std::cout << "Enter array values:\n";
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int getSum(int* arr, const int& size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += *arr++;
    }
    return sum;
}

int* minSumArrs(int* arr1, const int& size1, int* arr2, const int& size2)
{
    if (getSum(arr1, size1) <= getSum(arr2, size2)) return arr1;
    return arr2;
}

int main()
{
    int size1;
    std::cout << "Enter array length\n";
    std::cin >> size1;
    int* arr1 = new int[size1];
    enterArray(arr1, size1);

    int size2;
    std::cout << "Enter array length\n";
    std::cin >> size2;
    int* arr2 = new int[size2];
    enterArray(arr2, size2);

    int* minPointer = nullptr;
    minPointer = minSumArrs(arr1, size1, arr2, size2);
    std::cout << *minPointer;

    delete[] arr1;
    delete[] arr2;
    return 0;
}
