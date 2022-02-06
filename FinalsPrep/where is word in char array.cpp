#include <iostream>

int charArraySize(char word[])
{
    int count = 0, index = 0;
    while (word[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}

void seekWordInCharArr(char inputText[], char wordToSeek[])
{
    int wordToSeekIndex = 0;
    for (int i = 0; i < charArraySize(inputText); i++)
    {
        if (inputText[i] == wordToSeek[wordToSeekIndex])
        {
            if (wordToSeekIndex + 1 == charArraySize(wordToSeek))
            {
                std::cout << wordToSeek << " was found at index " << i - charArraySize(wordToSeek) + 1 << '\n';
                wordToSeekIndex = 0;
            }
            else wordToSeekIndex++;
        }
        else wordToSeekIndex = 0;
    }
}

int main()
{
    char inputText[100];
    std::cout << "Enter sentence:\n";
    std::cin.getline(inputText, 100);
    char wordToSeek[100];
    std::cout << "Enter word to look for:\n";
    std::cin.getline(wordToSeek, 100);

    seekWordInCharArr(inputText, wordToSeek);

    return 0;
}
