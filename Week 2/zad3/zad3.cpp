#include <iostream>
using namespace std;

int main()
{
    int firstNum = 0;
    int secondNum = 0;

    cout << "First number:";
    cin >> firstNum;

    cout << "Second number:";
    cin >> secondNum;

    if (firstNum % secondNum == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

