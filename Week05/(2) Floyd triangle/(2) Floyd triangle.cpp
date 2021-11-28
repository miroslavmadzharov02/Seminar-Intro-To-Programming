using namespace std;
#include <iostream>

void printFloydTriangle(int rows)
{
    int currentNum = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << currentNum << " ";
            currentNum++;
        }
        cout << endl;
    }
}

int main()
{
    int rows;

    cin >> rows;

    printFloydTriangle(rows);
}

