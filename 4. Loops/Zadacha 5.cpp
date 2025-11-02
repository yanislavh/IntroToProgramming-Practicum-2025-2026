#include <iostream>

int main()
{
    long long num;
    std::cin >> num;
    int result = 0;
    bool flag = false;
    int stepen = 0;
    while (!flag)
    {
        int mnojitel = 1;
        if (num / 1 == 0) flag = true;
        if (stepen == 0) result += num % 10 * 1;
        else {
            for (int i = 0; i < stepen; i++)
            {
                mnojitel *= 2;
            }
            result += mnojitel * (num % 10);
        }
        num /= 10;
        stepen++;
    }
    std::cout << result;
}

