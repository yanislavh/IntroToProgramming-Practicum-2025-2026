#include <iostream>

void getArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "arr[ " << i << " ]= ";
		std::cin >> arr[i];
	}
}

bool arrTest(int arr[], size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			return 1;
		}
	}return 0;
}

int main()
{
	const size_t SIZE_OF_ARRAY = 500;

	unsigned countOfElements;

	do {
		std::cout << "Enter array: ";
		std::cin >> countOfElements;
	} while (countOfElements < 1 || countOfElements> SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	getArray(arr, countOfElements);

	std::cout << std::endl;

	std::cout << std::boolalpha << arrTest(arr, countOfElements);
}