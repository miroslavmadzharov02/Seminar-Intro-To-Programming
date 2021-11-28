using namespace std;
#include <iostream>

int main()
{
    int threeDigitNum, onesDigit, tensDigit, hundredsDigit, numberOfRows, numberOfColumns, copyOfPreviousNum;

    cin >> threeDigitNum;
    copyOfPreviousNum = threeDigitNum;

    onesDigit = threeDigitNum % 10;
    tensDigit = (threeDigitNum / 10) % 10;
    hundredsDigit = threeDigitNum / 100;

    numberOfRows = tensDigit + hundredsDigit;
    numberOfColumns = onesDigit + hundredsDigit;

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int i = 0; i < numberOfColumns; i++)
        {
            if (copyOfPreviousNum % 5 == 0)
            {
                copyOfPreviousNum -= hundredsDigit;
            }
            else if (copyOfPreviousNum % 3 == 0)
            {
                copyOfPreviousNum -= tensDigit;
            }
            else
            {
                copyOfPreviousNum += onesDigit;
            }

            cout << copyOfPreviousNum << " ";
        }

        cout << endl;
    }
}

