#include <iostream>

int main()
{
    int num;
    std::cin >> num;
	bool flag = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) flag = 1; break;
	}
	if (flag) std::cout << "Not Prime";
	else std::cout << "Prime";
}

