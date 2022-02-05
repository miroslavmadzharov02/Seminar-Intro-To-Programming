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
    int mainDiagProduct = 1, secondaryDiagProduct = 1;

    //topright === I quadrant
    for (int row = 0, col = lengthMatrix - smallMatrixLength; row < smallMatrixLength; row++, col++)
        mainDiagProduct *= matrix[row][col];
    for (int row = 0, col = lengthMatrix - 1; row < smallMatrixLength; row++, col--)
        secondaryDiagProduct *= matrix[row][col];
    const int firstQuadrantDifference = mainDiagProduct - secondaryDiagProduct;

    mainDiagProduct = 1, secondaryDiagProduct = 1;
    //bottomleft === III quadrant
    for (int row = lengthMatrix - smallMatrixLength, col = 0; row < lengthMatrix; row++, col++)
        mainDiagProduct *= matrix[row][col];
    for (int row = lengthMatrix - smallMatrixLength, col = smallMatrixLength - 1; row < lengthMatrix; row++, col--)
        secondaryDiagProduct *= matrix[row][col];
    const int thirdQuadrantDifference = mainDiagProduct - secondaryDiagProduct;

    mainDiagProduct = 1, secondaryDiagProduct = 1;
    //topleft === II quadrant
    for (int row = 0, col = 0; row < smallMatrixLength; row++, col++)
        mainDiagProduct *= matrix[row][col];
    for (int row = smallMatrixLength - 1, col = 0; col < smallMatrixLength; row--, col++)
        secondaryDiagProduct *= matrix[row][col];
    const int secondQuadrantDifference = mainDiagProduct - secondaryDiagProduct;

    mainDiagProduct = 1, secondaryDiagProduct = 1;
    //bottomright === IV quadrant
    for (int row = lengthMatrix - smallMatrixLength, col = lengthMatrix - smallMatrixLength; row < lengthMatrix; row++, col++)
        mainDiagProduct *= matrix[row][col];
    for (int row = lengthMatrix - 1, col = lengthMatrix - smallMatrixLength; col < lengthMatrix; row--, col++)
        secondaryDiagProduct *= matrix[row][col];
    const int fourthQuadrantDifference = mainDiagProduct - secondaryDiagProduct;

    bool firstThirdQuadrant = firstQuadrantDifference == thirdQuadrantDifference;
    bool secondFourthQuadrant = secondQuadrantDifference == fourthQuadrantDifference;

    return firstThirdQuadrant && secondFourthQuadrant;
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
        delete[] matrix[i];
    delete[] matrix;
    return 0;
}
