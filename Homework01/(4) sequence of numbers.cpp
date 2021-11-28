using namespace std;
#include <iostream>

int main()
{
    
    int number, previousNumber, amountOfStars;

    cout << "Enter a positive integer n=";
    cin >> number;

    previousNumber = number;

    for (int i = 0; i < (number / 10) + 1; i++)
    {
        cout << "*";
    }

    cout << number << endl;

    if (number > 0)
    {
        while (number != 1)
        {
            amountOfStars = (previousNumber / 10) + 1;

            if (number % 2 != 0)
            {
                number = previousNumber * 3 + 1;
            }
            else
            {
                number = previousNumber / 2;
            }

            previousNumber = number;

            for (int i = 0; i < amountOfStars; i++)
            {
                cout << "*";
            }
            cout << previousNumber << endl;
        } 
    }
    else
    {
        cout << "Invalid input.";
    }
    
}

