#include <iostream>

void enterArray(int length, int arr[])
{
    std::cout << "Enter array values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

void printArray(int length, int arr[])
{
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int* getHalfOfArray(int length, int* arr)
{
    static int resultArr[50];

    for (int i = 0; i < length / 2; i++)
    {
        resultArr[i] = arr[i];
    }

    return resultArr;
}

int main()
{
    int length, arr[100], * halfArr;

    std::cout << "Enter array length:\n";
    std::cin >> length;

    enterArray(length, arr);

    halfArr = getHalfOfArray(length, arr);

    printArray(length / 2, halfArr);

    return 0;
}