#include <iostream>

bool isDigit(char symbol)
{
    if (symbol >= 48 && symbol <= 57) return true;
    return 0;
}

bool isUpper(char sym)
{
    if (sym >= 65 && sym <= 90) return true;
    return 0;
}

bool isLower(char sym)
{
    if (sym >= 97 && sym <= 122) return true;
    return 0;
}

bool isAlpha(char sym)
{
    if (isUpper(sym) || isLower(sym)) return true;
    return 0;
}

bool isAlnum(char sym)
{
    if (isAlpha(sym) || isDigit(sym)) return true;
    return 0;
}

char capitalize(char sym)
{
    if (isAlpha(sym)) return sym - 32;
    return sym;
}

char MakeLower(char sym)
{
    if (isAlpha(sym)) return sym + 32;
    return sym;
}

int parseInt(char sym)
{
    if (isDigit(sym)) return sym - 48;
    return -1;
}

char parseInt(int sym)
{
    if (sym == parseInt(sym+48)) return sym + 48;
    return 0; //ne razbiram kakvo se iska tuk chestno kazano
}

int myLog(int a, int b)
{
    //nqmam nikakva predstava chestno kazano zashtoto log ne se smqta lesno osobeno s proizvola osnova
    return 0;
}

int myPow(int a, int b)
{
    int result = a;
    for (int i = 0; i < b-1; i++)
    {
        result *= a;
    }
    return result;
}

int myCeil(double num)
{
    int res = num;
    if (((int)(num * 10)) % 10 == 0) return res;
    return res + 1;
}

int myFloor(double num)
{
    int res = num;
    return res;
}

double myAbs(double num)
{
    return (num > 0) * num + (num < 0) * (-num);
}

int main()
{
    //char symbol;
    double a, b;
    std::cin >> a >> b;
    std::cout << myCeil(a) << " " << myAbs(b);
    //std::cout << parseInt(symbol);
}
