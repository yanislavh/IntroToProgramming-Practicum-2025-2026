#include <iostream>

void print(int num)
{
    std::cout << num << " "; 
}

bool Chisla(int a, int b)
{
    bool flag = 0;
    for (int i = a; i <= b; i++)
    {
        int temp = i;
        int test = 0;
        test = temp % 10; temp /= 10; test += 10 * (temp % 10); temp /= 100; test += 100 * (temp % 10); // znam che ne trqbva da e taka no mi se struva che za 4 cifreno e po dylgo da se pishe "preizpolzvaemo"
        if (test % 11 == 0) { print(i); flag++; }
    }
    return flag;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (Chisla(a, b) == 0) std::cout << "no such num";
}
