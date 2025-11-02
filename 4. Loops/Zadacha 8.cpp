#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
	if (num1 < num2)
	{
		int tp = num1;
		num1 = num2;
		num2 = tp;
	}
	for (int i = num2; i > 0; i--)
	{
		if (num1 % i == 0 && num2 % i == 0) std::cout << i << " ";
	}
}

