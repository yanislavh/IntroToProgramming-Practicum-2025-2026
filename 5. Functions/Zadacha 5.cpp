#include <iostream>

bool oneCircle(int a, int b, int c,int d)
{
    return (a * a + b * b) == (c * c + d * d);
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << (oneCircle(a, b, c, d) ? "yes" : "no");
}
