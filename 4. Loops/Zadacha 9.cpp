#include <iostream>

int main()
{
    long long number, tNumber;
    std::cin >> number;

    int count = 0, maxNumber = -1;

    int test = 0;

    while (test <= 9)
    {
        int tCount = 0;
        tNumber = number;
        while (tNumber > 0)
        {
            if (tNumber % 10 == test) tCount++;
            tNumber /= 10;
        }
        if (tCount > count || (tCount == count && test > maxNumber))
        {
            count = tCount;
            maxNumber = test;
        }
        test++;
    }

    std::cout << maxNumber;
}
