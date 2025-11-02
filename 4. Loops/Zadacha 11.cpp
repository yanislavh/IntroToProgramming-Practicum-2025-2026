#include <iostream>

int main()
{
    int number;
    std::cin >> number;
	int sum = 0;

	for (int i = 1; i <= number; i++)
	{
		sum += i;
	}

	for (int i = 1; i < number; i++)
	{
		int temp;
		std::cin >> temp;
		sum -= temp;
	}

	std::cout << "The missing number is " << sum;
}
