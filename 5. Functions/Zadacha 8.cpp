#include <iostream>

long long Chisla(int a, int b)
{
    int res = 0;;
    while (a > 0 || b > 0)
    {
        if (a > 0 && b > 0)
        {
            res *= 100;
            res += (a % 10) * 10 + b % 10;
            a /= 10;
            b /= 10;
        }
        else if (a == 0)
        {
            res *= 10;
            res += b % 10;
            b /= 10;
        }
        else
        {
            res *= 10;
            res += a % 10;
            a /= 10;
        }
    }
    return res;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << Chisla(a, b);
}
