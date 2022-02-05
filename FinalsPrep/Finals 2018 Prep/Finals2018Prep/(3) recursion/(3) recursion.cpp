#include <iostream>

int charArraySize(char* inputText)
{
    int count = 0;
    while (*inputText != '\0')
    {
        count++;
        inputText++;
    }
    return count;
}

int lengthDifference(char* firstText, char* secondText)
{
    if (charArraySize(firstText) > charArraySize(secondText)) return charArraySize(firstText) - charArraySize(secondText);
    else return charArraySize(secondText) - charArraySize(firstText);
}

void printBothTextsCombined(char* firstText, char* secondText, int index)
{
    if (index == charArraySize(firstText) && charArraySize(firstText) - charArraySize(secondText) == 0) return;
    if (charArraySize(firstText) > charArraySize(secondText) && index == charArraySize(secondText))
    {
        std::cout << firstText + (charArraySize(firstText) - charArraySize(secondText));
        return;
    }
    if (charArraySize(firstText) < charArraySize(secondText) && index == charArraySize(firstText))
    {
        std::cout << secondText + (charArraySize(secondText) - charArraySize(firstText));
        return;
    }
    std::cout << firstText[index] << secondText[index];
    printBothTextsCombined(firstText, secondText, ++index);
}

int main()
{
    char firstText[100];
    std::cout << "Enter first text:\n";
    std::cin.getline(firstText, 100);

    char secondText[100];
    std::cout << "Enter second text:\n";
    std::cin.getline(secondText, 100);

    printBothTextsCombined(firstText, secondText, 0);

    return 0;
}
