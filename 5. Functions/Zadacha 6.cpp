#include <iostream>

int square(int x)
{
    return x * x;
}

int sumOfSquares(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += square(i);
    }return sum;
}

int main()
{
    int a;
    std::cin >> a;
    std::cout << sumOfSquares(a);
}
