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

int* getCopyOfArray(int length, int* arrToBeCopied)
{
    int* copyArr = new int[length];

    for (int i = 0; i < length; i++)
    {
        copyArr[i] = arrToBeCopied[i];
    }

    return copyArr;
}

int main()
{
    int length, arr[100];

    std::cout << "Enter array length:\n";
    std::cin >> length;

    enterArray(length, arr);

    int* copyArr = getCopyOfArray(length, arr);

    printArray(length, copyArr);

    delete[] copyArr;
    return 0;
}