#include <iostream>

long long sortNumber(long long number)
{
    long long res = 0;
    for (int i = 9; i >= 0; i--)
    {
        long long temp = number;
        int count = 0;
        while(temp > 0)
        {
            if (temp % 10 == i) count++;
            temp /= 10;
        }
        for (int j = 0; j < count; j++)
        {
            res *= 10;
            res += i;
        }
    }
    return res;
}

int main()
{
    long long num;
    std::cin >> num;
    std::cout << sortNumber(num);
}
