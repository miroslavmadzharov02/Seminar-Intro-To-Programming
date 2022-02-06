#include <iostream>

void enterMatrixValues(int** matrix, const int& rowsAmount, const int& colsAmount)
{
    std::cout << "Enter matrix values:\n";
    for (int row = 0; row < rowsAmount; row++)
    {
        matrix[row] = new int[colsAmount];
        for (int col = 0; col < colsAmount; col++)
            std::cin >> matrix[row][col];
    }
}

void printMatrixValues(int** matrix, const int& rowsAmount, const int& colsAmount)
{
    std::cout << "Sorted matrix values are:\n";
    for (int row = 0; row < rowsAmount; row++)
    {
        for (int col = 0; col < colsAmount; col++)
            std::cout << matrix[row][col] << " ";
        std::cout << '\n';
    }
}

void bubbleSortArr(int* arr, const int& length)
{
    int temp = 0;
    for (int i = 0; i < length - 1; i++)
        for (int j = 0; j < length - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void sortMatrixValues(int** matrix, const int& rowsAmount, const int& colsAmount)
{
    int* arrMatrixValues = new int[rowsAmount * colsAmount];
    int index = 0;
    for (int row = 0; row < rowsAmount; row++)
        for (int col = 0; col < colsAmount; col++)
            arrMatrixValues[index++] = matrix[row][col];

    bubbleSortArr(arrMatrixValues, rowsAmount * colsAmount);

    index = 0;
    for (int row = 0; row < rowsAmount; row++)
        for (int col = 0; col < colsAmount; col++)
            matrix[row][col] = arrMatrixValues[index++];
    delete[] arrMatrixValues;
}

int main()
{
    int rowsAmount, colsAmount;
    std::cout << "Enter matrix rows amount:\n";
    std::cin >> rowsAmount;
    std::cout << "Enter matrix columns amount:\n";
    std::cin >> colsAmount;

    int** matrix = new int*[rowsAmount];
    enterMatrixValues(matrix, rowsAmount, colsAmount);
    sortMatrixValues(matrix, rowsAmount, colsAmount);
    printMatrixValues(matrix,rowsAmount,colsAmount);

    for (int row = 0; row < rowsAmount; row++)
        delete[] matrix[row];
    delete[] matrix;
    return 0;
}
