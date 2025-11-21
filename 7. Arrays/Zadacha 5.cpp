#include <iostream>

void getArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int sumOfDistinct(int arr[], size_t size)
{
	int sum = 0;
	for (int i = 0; i <= 9; i++)
	{
		int count = 0;
		for (size_t j = 0; j < size; j++)
		{
			if (arr[j] == i)
			{
				count++;
			}
		}
		if (count == 1) sum += i;
	}
	return sum;
}



int main()
{
	const size_t SIZE_OF_ARRAY = 64;

	unsigned countOfElements;

	do {
		std::cout << "Enter array: ";
		std::cin >> countOfElements;
	} while (countOfElements < 1 || countOfElements> SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	getArray(arr, countOfElements);

	std::cout <<std::endl;
	std::cout << sumOfDistinct(arr, countOfElements);
}