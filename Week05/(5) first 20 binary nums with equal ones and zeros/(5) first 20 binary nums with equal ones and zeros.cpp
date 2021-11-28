using namespace std;
#include <iostream>

int getBinary(int number)
{
    int baseNumber = 0;
    int digitPos = 1;

    while (number > 0)
    {
        baseNumber += (digitPos * (number % 2));
        digitPos *= 10;
        number /= 2;
    }

    return baseNumber;
}

int zeroCount(int number)
{
    int zerosCount = 0;

    while (number > 0)
    {
        if (number % 10 == 0)
        {
            zerosCount++;
        }
        number /= 10;
    }

    return zerosCount;
}

int onesCount(int number)
{
    int onesCount = 0;

    while (number > 0)
    {
        if (number % 10 == 1)
        {
            onesCount++;
        }
        number /= 10;
    }

    return onesCount;
}

void printFirst20Nums()
{
    int number, count = 0, i = 1;

    while (count <= 20)
    {
        number = getBinary(i);
        if (zeroCount(number) == onesCount(number))
        {
            cout << number << endl;
            count++;
        }
        i++;
    }
}

int main()
{
    printFirst20Nums();
}