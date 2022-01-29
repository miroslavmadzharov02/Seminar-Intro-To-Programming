#include <iostream>

void printArray(int* arr, const int& size)
{
    std::cout << "Array values are:\n";
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void bubbleSort(int*& arr, const int& size)
{
    int temp = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int* combinedArray(int* arr1, const int& sizeArr1, int* arr2, const int& sizeArr2)
{
    int* combinedArr = new int[sizeArr1 + sizeArr2];
    for (size_t i = 0; i < sizeArr1; i++)
    {
        combinedArr[i] = arr1[i];
    }
    for (size_t i = sizeArr1, j = 0; i < sizeArr1 + sizeArr2; i++, j++)
    {
        combinedArr[i] = arr2[j];
    }
    bubbleSort(combinedArr, sizeArr1 + sizeArr2);
    return combinedArr;
}

int main()
{
    int arr1[] = { 1,2,3,4,5,7,100 };
    int arr2[] = { 1,6,22,33,44,55 };

    int* combinedArr = combinedArray(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int));
    printArray(combinedArr, sizeof(arr1) / sizeof(int) + sizeof(arr2) / sizeof(int));

    delete[] combinedArr;
    return 0;
}
