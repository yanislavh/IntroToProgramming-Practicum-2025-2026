#include <iostream>
#include <cmath>

double duljina(double a, double b, double c, double d)
{
    double vX = c - a;
    double vY = d - b;
    return sqrt(vX * vX + vY * vY); // ne vqrvam tova s vektorite i s dyljinata na vektorite da moje da se napravi bez koren, a da si napisha sam koren xD shte mi dojde mnojichko
}

double Chisla(double a, double b, double c, double d, double e, double f)
{
    double ab = duljina(a, b, c, d);
    double ac = duljina(a, b, e, f);
    double bc = duljina(c, d, e, f);
    return ab + ac + bc;
}

int main()
{
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    std::cout << Chisla(a, b, c, d, e, f);
}
