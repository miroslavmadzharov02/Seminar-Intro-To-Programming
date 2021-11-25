using namespace std;

#include <iostream>

int main()
{
    int firstSide = 0;
    int secondSide = 0;
    int thirdSide = 0;

    cout << "First side:";
    cin >> firstSide;

    cout << "Second side:";
    cin >> secondSide;

    cout << "Third side:";
    cin >> thirdSide;

    bool isSimilarityPossible = false;

    if (firstSide+secondSide>thirdSide && firstSide+thirdSide>secondSide && secondSide+thirdSide>firstSide)
    {
        isSimilarityPossible = true;
    }

    cout << isSimilarityPossible;
}
