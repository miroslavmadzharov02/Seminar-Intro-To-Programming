#include <iostream>

struct Point
{
    int x;
    int y;
};

void enterGridValues(int** grid, const int& length)
{
    std::cout << "Enter grid values:\n";
    for (int i = 0; i < length; i++)
    {
        grid[i] = new int[length];
        for (int j = 0; j < length; j++)
            std::cin >> grid[i][j];
    }
}

void printGridValues(int** grid, const int& length)
{
    std::cout << "Grid values are:\n";
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            std::cout << grid[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void enterStartingCoordinates(Point& point)
{
    std::cout << "Enter starting X:\n";
    std::cin >> point.x;
    std::cout << "Enter starting Y:\n";
    std::cin >> point.y;
}

void dfs(int** &grid, int row, int col, const int& length)
{
    if (row < 0 || row >= length || col < 0 || col >= length || grid[row][col] != 1) return;
    else
    {
        grid[row][col] = 2;
        dfs(grid, row + 1, col, length);
        dfs(grid, row - 1, col, length);
        dfs(grid, row, col + 1, length);
        dfs(grid, row, col - 1, length);
    }
}

bool areThereUnreachableOnes(int** grid, const int& length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
            if (grid[i][j] == 1) return true;
    }
    return false;
}

int main()
{
    int length;
    std::cout << "Enter square length:\n";
    std::cin >> length;

    Point startingPoint;
    enterStartingCoordinates(startingPoint);

    int** grid = new int* [length];
    enterGridValues(grid, length);
    dfs(grid, startingPoint.x, startingPoint.y, length);
    if (areThereUnreachableOnes(grid, length))
    {
        std::cout << -1;
        return 0;
    }
    printGridValues(grid, length);

    return 0;
}
