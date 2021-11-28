using namespace std;
#include <iostream>

double pow(double base, int power)
{
    double result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    double base;
    int power;

    cin >> base >> power;

    cout << pow(base, power);
}

