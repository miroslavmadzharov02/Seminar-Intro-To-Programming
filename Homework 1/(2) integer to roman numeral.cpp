using namespace std;
#include <iostream>

int main()
{
    int number = 0, digitHundreds, digitTens, digitOnes;

    cin >> number;

    cout << number << " -> ";

    digitHundreds = number / 100;
    digitTens = (number / 10) % 10;
    digitOnes = number % 10;

    //transform the hundreds digit if it exists
    if (number >= 100)   
    {
        if (digitHundreds == 9)
        {
            cout << "CM";
        }
        else if (digitHundreds >= 5)
        {
            cout << "D";

            for (int i = 0; i < digitHundreds - 5; i++)
            {
                cout << "C";
            }
        }
        else if (digitHundreds == 4)
        {
            cout << "CD";
        }
        else
        {
            for (int i = 0; i < digitHundreds; i++)
            {
                cout << "C";
            }
        }
    }

    //tranform the tens digit if it exists
    if (number>=10)         
    {
        if (digitTens == 9)
        {
            cout << "XC";
        }
        else if (digitTens >= 5)
        {
            cout << "L";

            for (int i = 0; i < digitTens - 5; i++)
            {
                cout << "X";
            }
        }
        else if (digitTens == 4)
        {
            cout << "XL";
        }
        else
        {
            for (int i = 0; i < digitTens; i++)
            {
                cout << "X";
            }
        }
    }

    //tranforms the ones digit
    if (digitOnes == 9)
    {
        cout << "IX";
    }
    else if (digitOnes >= 5)
    {
        cout << "V";

        for (int i = 0; i < digitOnes - 5; i++)
        {
            cout << "I";
        }
    }
    else if (digitOnes == 4)
    {
        cout << "IV";
    }
    else
    {
        for (int i = 0; i < digitOnes; i++)
        {
            cout << "I";
        }
    }
}

