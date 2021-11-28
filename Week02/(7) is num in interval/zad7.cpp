using namespace std;

#include <iostream>

int main()
{
    int number = 0;
    int leftBorder = 0;
    int rightBorder = 0;

    cout << "number:";
    cin >> number;

    cout << "Left border:";
    cin >> leftBorder;

    cout << "Right border:";
    cin >> rightBorder;

    if (number>=leftBorder && number<=rightBorder)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

