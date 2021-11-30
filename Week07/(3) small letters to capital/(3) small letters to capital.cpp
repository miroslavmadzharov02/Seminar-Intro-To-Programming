using namespace std;
#include <iostream>

const int MAX_SIZE = 100;

void enterString(char str[MAX_SIZE])
{
    cin >> str;
}

void printTransformedString(char str[MAX_SIZE])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a' - 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }

        cout << str[i];
    }
}

int main()
{
    char str[MAX_SIZE];

    enterString(str);

    printTransformedString(str);
}

