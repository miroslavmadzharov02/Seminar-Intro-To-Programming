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
    std::cout << "The new resized array is:\n";
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int* getResizedArray(int* arr, int newLength, int currentLength)
{
    int* resizedArr = new int[newLength];

    for (int i = 0; i < newLength; i++)
    {
        if (i >= currentLength)
        {
            resizedArr[i] = 0;
            continue;
        }
        resizedArr[i] = arr[i];
    }

    return resizedArr;
}

int main()
{
    int length, arr[100], newLength;

    std::cout << "Enter array length:\n";
    std::cin >> length;

    enterArray(length, arr);

    std::cout << "Enter new array length:\n";
    std::cin >> newLength;

    int* resizedArr = getResizedArray(arr, newLength, length);

    printArray(newLength, resizedArr);

    delete[] resizedArr;
    return 0;
}