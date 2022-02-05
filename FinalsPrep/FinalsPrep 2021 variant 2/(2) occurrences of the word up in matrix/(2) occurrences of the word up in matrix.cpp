#include <iostream>

void enterMatrixValues(char** matrix, const int& rows, const int& cols)
{
    std::cout << "Enter matrix values:\n";
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new char[cols];
        for (int j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

int searchHorizontallyLeftToRight(char** matrix, const int& rows, const int& cols)
{
    int count = 0;
    for (int row = 0; row < rows; row++)
        for (int col = 0; col < cols; col++)
            if (col + 1 != cols)
            if (matrix[row][col] == 'u' && matrix[row][col + 1] == 'p') count++;
    return count;
}

int searchHorizontallyRightToLeft(char** matrix, const int& rows, const int& cols)
{
    int count = 0;
    for (int row = rows - 1; row >= 0; row--)
        for (int col = cols - 1; col >= 0; col--)
            if (col - 1 >= 0)
            if (matrix[row][col] == 'u' && matrix[row][col - 1] == 'p') count++;
    return count;
}

int searchVerticallyTopToBottom(char** matrix, const int& rows, const int& cols)
{
    int count = 0;
    for (int col = 0; col < cols; col++)
        for (int row = 0; row < rows; row++)
            if (row + 1 != rows)
            if (matrix[row][col] == 'u' && matrix[row + 1][col] == 'p') count++;
    return count;
}

int searchVerticallyBottomToTop(char** matrix, const int& rows, const int& cols)
{
    int count = 0;
    for (int col = cols - 1; col >= 0; col--)
        for (int row = rows - 1; row >= 0; row--)
            if (row - 1 >= 0)
            if (matrix[row][col] == 'u' && matrix[row - 1][col] == 'p') count++;
    return count;
}

int main()
{
    int rows, cols;

    std::cout << "Enter matrix rows amount:\n";
    std::cin >> rows;
    std::cout << "Enter matrix columns amount\n";
    std::cin >> cols;
    if (rows > 10 || cols > 10)
    {
        std::cout << "Out of bounds input\n";
        return 0;
    }

    char** matrix = new char* [rows];
    enterMatrixValues(matrix, rows, cols);
    std::cout << searchHorizontallyLeftToRight(matrix, rows, cols) + searchHorizontallyRightToLeft(matrix, rows, cols)
        + searchVerticallyTopToBottom(matrix, rows, cols) + searchVerticallyBottomToTop(matrix, rows, cols);

    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
    return 0;
}
