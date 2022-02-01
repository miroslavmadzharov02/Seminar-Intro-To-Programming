#include <iostream>

int ackermann(int firstNum, int secondNum)
{
    if (firstNum == 0) return secondNum + 1;
    if (secondNum == 0) return ackermann(firstNum - 1, 1);
    return ackermann(firstNum - 1, ackermann(firstNum, secondNum - 1));
}

int main()
{
    int firstNum, secondNum;
    std::cout << "Enter first number:\n";
    std::cin >> firstNum;
    std::cout << "Enter first number:\n";
    std::cin >> secondNum;
    
    std::cout << ackermann(firstNum, secondNum);

    return 0;
}
