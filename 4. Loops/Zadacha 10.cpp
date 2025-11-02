#include <iostream>

int main()
{
    int nums = 0;

    while (nums < 2)
    {
        std::cin >> nums;
    }

    int number = 0, tNumber = 0, test;

    while (nums != 0)
    {
        std::cin >> test;
        if (test > tNumber)
        {
            tNumber = test;
        }
        if (tNumber > number) 
        {
            int temp = number;
            number = tNumber;
            tNumber = temp;
        }
        nums--;
    }

    std::cout << "First number is " << number << ", second number is " << tNumber;
}
