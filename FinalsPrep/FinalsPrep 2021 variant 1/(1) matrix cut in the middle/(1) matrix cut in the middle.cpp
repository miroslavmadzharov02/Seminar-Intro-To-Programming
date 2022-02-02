#include <iostream>

void enterMatrixValues(int** matrix, const int& lengthMatrix)
{
    std::cout << "Enter matrix values:\n";
    for (int i = 0; i < lengthMatrix; i++)
    {
        matrix[i] = new int[lengthMatrix];
        for (int j = 0; j < lengthMatrix; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

bool isConditionMet(int** matrix, const int& lengthMatrix)
{
    const int smallMatrixLength = (lengthMatrix - 1) / 2;
    int topLeftSum = 0, topRightSum = 0, bottomLeftSum = 0, bottomRightSum = 0;

    //get topleft sum
    for (int i = 0; i < smallMatrixLength; i++)
        topLeftSum += matrix[i][i];
    
    //get topright sum
    for (int row = 0, col = smallMatrixLength + 1; row < smallMatrixLength; row++, col++)
        topRightSum += matrix[row][col];

    //get bottomleft sum
    for (int row = smallMatrixLength + 1, col = 0; row < lengthMatrix; row++, col++)
        bottomLeftSum += matrix[row][col];

    //get bottomright sum
    for (int i = smallMatrixLength + 1; i < lengthMatrix; i++)
        bottomRightSum += matrix[i][i];

    return std::abs(((topLeftSum + topRightSum + bottomLeftSum + bottomRightSum) / 4)) - std::abs(topLeftSum) == 0;
}

int main()
{
    int lengthMatrix;
    std::cout << "Enter size of the rows/columns of the matrix\n";
    std::cin >> lengthMatrix;
    if (lengthMatrix <= 3 || lengthMatrix % 2 == 0)
    {
        std::cout << "Invalid input.\n";
        return 0;
    }

    int** matrix = new int* [lengthMatrix];
    enterMatrixValues(matrix, lengthMatrix);
    std::cout << std::boolalpha << isConditionMet(matrix, lengthMatrix);

    for (int i = 0; i < lengthMatrix; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
