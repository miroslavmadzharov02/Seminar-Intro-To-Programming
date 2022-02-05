#include <iostream>

struct permutationArray
{
    int index = 0;
    char** permutations = new char* [100];
};

void addElement(permutationArray &perm, char* elementToAdd)
{
    perm.permutations[perm.index++] = elementToAdd;
}

void printElements(permutationArray& perm)
{
    for (int i = 0; i < perm.index; i++)
        std::cout << perm.permutations[i] << '\n';
}

void swapValues(char*& word, int firstIndex, int secondIndex)
{
    char temp = word[firstIndex];
    word[firstIndex] = word[secondIndex];
    word[secondIndex] = temp;
}

void permute(permutationArray& perm, char* word, int startingIndex, const int& wordLength)
{
    if (startingIndex == wordLength)
    {
        char* element = new char[4];
        for (int i = 0; i < 3; i++)
            element[i] = word[i];

        element[3] = '\0';
        addElement(perm, element);
    }
    for (int i = startingIndex; i < wordLength; i++)
    {
        swapValues(word, startingIndex, i);
        permute(perm, word, startingIndex + 1, wordLength);
        swapValues(word, startingIndex, i);
    }
}

int main()
{
    char* word = new char[4];
    for (int letter = 'a', i = 0; letter < 'd'; letter++, i++)
        word[i] = letter;
    word[3] = '\0';

    permutationArray perm;
    permute(perm, word, 0, 3);
    printElements(perm);

    for (int i = 0; i < perm.index; i++)
        delete[] perm.permutations[i];
    delete[] perm.permutations;
    return 0;
}
