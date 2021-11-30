using namespace std;
#include <iostream>

const int MAX_SIZE = 100;

void enterString(char str[MAX_SIZE])
{
    cin >> str;
}

int countSymbolInString(char str[MAX_SIZE], char symbol)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == symbol)
        {
            count++;
        }
    }

    return count;
}

void replaceSymbolInStringWithStars(char str[MAX_SIZE], char symbol)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == symbol)
        {
            str[i] = '*';
        }
    }
}

int main()
{
    char str[MAX_SIZE], symbol;

    enterString(str);
    cin >> symbol;

    cout << "The symbol appears " << countSymbolInString(str, symbol) << " times in the string." << endl;
    replaceSymbolInStringWithStars(str, symbol);
    cout << str;
}