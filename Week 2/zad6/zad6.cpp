using namespace std;
#include <iostream>

int main()
{
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;

    cout << "First number:";
    cin >> firstNum;

    cout << "Second number:";
    cin >> secondNum;

    cout << "Third number:";
    cin >> thirdNum;

    int maxNum = firstNum;
    int minNum = firstNum;

    if (maxNum<secondNum)
    {
        maxNum = secondNum;
    }
    if (maxNum<thirdNum)
    {
        maxNum = thirdNum;
    }

    if (minNum>secondNum)
    {
        minNum = secondNum;
    }
    if (minNum > thirdNum)
    {
        minNum = thirdNum;
    }

    cout << "max:" << maxNum << ", " << "min:" << minNum;
}

