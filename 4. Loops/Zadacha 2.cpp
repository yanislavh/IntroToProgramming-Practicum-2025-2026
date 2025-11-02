#include <iostream>

int main()
{
    int num;
    int poziciq;
    std::cin >> num >> poziciq;
    int del = 1;
    for (int i = 1; i < poziciq; i++)
    {
        del *= 10;
    }
    if ((num * 1.0) / del < 1) std::cout << "Dont have digit on index " << poziciq;
    else
    {
        for (int i = 1; i < poziciq; i++)
        {
            num /= 10;
        }

        std::cout << "The number on index " << poziciq << " is " << num % 10;
    }
}

