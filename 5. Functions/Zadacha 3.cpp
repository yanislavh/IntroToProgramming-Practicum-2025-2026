#include <iostream>


int getLength(long long number)
{
    int len = 0;
    while (number / 1 > 0)
    {
        len++;
        number /= 10;
    }
    return len;
}

int main()
{
    int num;
    std::cin >> num;
    std::cout << getLength(num);
}
