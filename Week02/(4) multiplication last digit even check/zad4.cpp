using namespace std;

#include <iostream>

int main()
{
    int firstNum = 0;
    int secondNum = 0;

    cout << "First number:";
    cin >> firstNum;

    cout << "Second number:";
    cin >> secondNum;

    int multiply = firstNum * secondNum;
    int lastDigit = multiply % 10;
    bool isItEven = false;

    if (lastDigit%2==0)
    {
        isItEven = true;
    }

    cout << multiply << ", " << lastDigit << " - " << isItEven;
}

