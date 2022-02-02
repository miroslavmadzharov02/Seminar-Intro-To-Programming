#include <iostream>

void enterCharArray(char* letters, const int& length)
{
    std::cout << "Enter letters:\n";
    for (int i = 0; i < length; i++)
        std::cin >> letters[i];
    letters[length] = '\0';
}

void enterIntArray(int* numbers, const int& length)
{
    std::cout << "Enter numbers:\n";
    for (int i = 0; i < length; i++)
        std::cin >> numbers[i];
}

bool isConditionMet(char* letters, int* numbers, const int& length)
{
    char alphabet['j' - 'a' + 1];
    alphabet['j' - 'a'] = '\0';
    for (char i = 'a', j = 0; i <= 'j'; i++, j++)
        alphabet[j] = i;

    for (int i = 0; i < length; i++)
        if (letters[i] != alphabet[numbers[i]]) return false;

    return true;
}

int main()
{
    int length;
    std::cout << "Enter length:\n";
    std::cin >> length;

    char* letters = new char[length + 1];
    enterCharArray(letters, length);
    int* numbers = new int[length];
    enterIntArray(numbers, length);

    std::cout << std::boolalpha << isConditionMet(letters, numbers, length);

    delete[] letters;
    delete[] numbers;
    return 0;
}
