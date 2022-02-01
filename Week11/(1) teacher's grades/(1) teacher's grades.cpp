#include <iostream>

void printRow(int length, int* arr)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void rowsOfGrades(int amountOfTeachers)
{
    int amountOfGrades[100];
    int** matrix = new int* [amountOfTeachers];
    for (int i = 0; i < amountOfTeachers; i++)
    {
        std::cout << "How many grades to enter:\n";
        std::cin >> amountOfGrades[i];
        matrix[i] = new int[amountOfGrades[i]];
        std::cout << "Enter grades:\n";
        for (int j = 0; j < amountOfGrades[i]; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < amountOfTeachers; i++)
    {
        std::cout << "Grades from teacher " << i << ": ";
        printRow(amountOfGrades[i], matrix[i]);
        std::cout << "\n";
    }

    for (int i = 0; i < amountOfTeachers; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main()
{
    int amountOfTeachers;

    std::cout << "How many teachers are there?\n";
    std::cin >> amountOfTeachers;

    rowsOfGrades(amountOfTeachers);

    return 0;
}
