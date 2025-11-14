#include <iostream>

long long toBinary(int number)
{
    long long binary = 0;
    long long mnojitel = 1;
    while (number > 0)
    {
        binary += mnojitel * (number % 2);
        mnojitel *= 10;
        number /= 2;
    }
    return binary;
}

int main()
{
    int number;
    std::cin >> number;
    long long result = toBinary(number);
    std::cout << result;
}
