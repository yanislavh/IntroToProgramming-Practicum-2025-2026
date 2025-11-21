#include <iostream>

void getArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isZigZag(int arr[], size_t size)
{
	for (size_t i = 1; i < size - 1; i++)
	{
		if (!(arr[i] > arr[i - 1] && arr[i] < arr[i + 1]))
		{
			return 0;
		}
	}return 1;
}



int main()
{
	const size_t SIZE_OF_ARRAY = 128;

	unsigned countOfElements;

	do {
		std::cout << "Enter array: ";
		std::cin >> countOfElements;
	} while (countOfElements < 1 || countOfElements> SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	getArray(arr, countOfElements);

	std::cout <<std::endl;
	std::cout << std::boolalpha << isZigZag(arr, countOfElements);
}