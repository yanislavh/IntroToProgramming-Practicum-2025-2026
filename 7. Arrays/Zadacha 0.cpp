#include <iostream>

void getArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "arr[ " << i << " ]= ";
		std::cin >> arr[i];
	}
}

void printArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "arr[ " << i << " ]= " << arr[i] <<std::endl;
	}
}

int main()
{
	const size_t SIZE_OF_ARRAY = 100;

	unsigned countOfElements;

	do {
		std::cout << "Enter array: ";
		std::cin >> countOfElements;
	} while (countOfElements < 1 || countOfElements> SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	getArray(arr, countOfElements);

	std::cout << std::endl;

	printArray(arr, countOfElements);
}