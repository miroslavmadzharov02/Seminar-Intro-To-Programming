#include <iostream>

void enterArray(int* arr, const int& size)
{
    std::cout << "Enter array values:\n";
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int* findNum(int* arr, const int& size, const int& numToFind)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == numToFind) return arr + i;
    }
    return nullptr;
}

int main()
{
    int size;
    std::cout << "Enter array length\n";
    std::cin >> size;

    int* arr = new int[size];
    enterArray(arr, size);

    int numToFind;
    std::cout << "Enter number to look for:\n";
    std::cin >> numToFind;

    std::cout << findNum(arr, size, numToFind);

    delete[] arr;
    return 0;
}
