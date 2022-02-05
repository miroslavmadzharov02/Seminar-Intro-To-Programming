#include <iostream>

void printMatrixBottomUp(const int matrix[][3], const int& matrixLength)
{
    for (int row = matrixLength - 1; row >= 0; row--)
    {
        for (int col = 0; col < matrixLength; col++)
            std::cout << matrix[row][col] << ' ';
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printMatrixMirrored(const int matrix[][3], const int& matrixLength)
{
    for (int row = 0; row < matrixLength; row++)
    {
        for (int col = matrixLength - 1; col >= 0; col--)
            std::cout << matrix[row][col] << ' ';
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printMatrixReversed(const int matrix[][3], const int& matrixLength)
{
    for (int row = matrixLength - 1; row >= 0; row--)
    {
        for (int col = matrixLength - 1; col >= 0; col--)
            std::cout << matrix[row][col] << ' ';
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printMatrixTransposed(const int matrix[][3], const int& matrixLength)
{
    for (int col = 0; col < matrixLength; col++)
    {
        for (int row = 0; row < matrixLength; row++)
            std::cout << matrix[row][col] << ' ';
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printMatrixReverseTransposed(const int matrix[][3], const int& matrixLength)
{
    for (int col = matrixLength - 1; col >= 0; col--)
    {
        for (int row = 0; row < matrixLength; row++)
            std::cout << matrix[row][col] << ' ';
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printMatrixTransposedBottomUp(const int matrix[][3], const int& matrixLength)
{
    for (int col = 0; col < matrixLength; col++)
    {
        for (int row = matrixLength - 1; row >= 0; row--)
            std::cout << matrix[row][col] << ' ';
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printMatrix(const int matrix[][3], const int& matrixLength)
{
    printMatrixBottomUp(matrix, matrixLength);
    printMatrixMirrored(matrix, matrixLength);
    printMatrixReversed(matrix, matrixLength);
    printMatrixTransposed(matrix, matrixLength);
    printMatrixReverseTransposed(matrix, matrixLength);
    printMatrixTransposedBottomUp(matrix, matrixLength);
}

int main()
{
    const int matrix[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    printMatrix(matrix, 3);

    return 0;
}
