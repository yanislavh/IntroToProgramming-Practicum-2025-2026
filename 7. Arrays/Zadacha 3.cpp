#include <iostream>

void getArray(char arr[], size_t size)
{
	std::cin >> arr;
}

int checkCount(char arr[], size_t size, char symbol)
{
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == symbol)
		{
			count++;
			arr[i] = '*';
		}
	}
	return count;
}



int main()
{
	const size_t SIZE_OF_ARRAY = 150;

	char arr[SIZE_OF_ARRAY + 1];

	std::cout << "Enter string: ";
	getArray(arr, SIZE_OF_ARRAY);

	std::cout << "Enter a symbol: ";
	char symbol;
	std::cin >> symbol;

	std::cout << "The count is: " << checkCount(arr, SIZE_OF_ARRAY, symbol) << std::endl;
	std::cout << "The exit string is: " << arr;
}