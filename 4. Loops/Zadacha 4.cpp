#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    int num1save = num1, num2save = num2;
    int tmp;
    if (num1 < num2)
    {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    bool flag = false;
    while (!flag)
    {
        if (num1 % num2 == 0) { flag = true; break; }
        tmp = num1 % num2;
        num1 = num2;
        num2 = tmp;
    }
    std::cout << num1save * num2save / num2;
}

