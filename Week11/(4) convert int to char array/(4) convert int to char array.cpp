#include <iostream>

int digitsOfNum(int number)
{
    int count = 0;
    while (number)
    {
        number /= 10;
        count++;
    }
    return count;
}

char* intToCharArray(int number)
{
    const int digits = digitsOfNum(number);

    char* str = new char[digits + 1];
    for (int i = digits - 1; i >= 0; i--)
    {
        str[i] = number % 10 + '0';
        number /= 10;
    }
    str[digits] = '\0';
    return str;
}

int main()
{
    int number;
    std::cin >> number;

    char* strOfNumber = intToCharArray(number);
    std::cout << strOfNumber;

    delete[] strOfNumber;
    return 0;
}
