#include <iostream>

int numInverse(int num)
{
    int res = 0;
    while(num > 0)
    {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}

int main()
{
    int num;
    std::cin >> num;
    std::cout << numInverse(num);
}
