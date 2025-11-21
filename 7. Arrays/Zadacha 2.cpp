#include <iostream>

void getArray(char arr[], size_t size)
{
	std::cin >> arr;
}

bool checkBalance(char arr[], size_t size)
{
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == '(') count++;
		else if (arr[i] == ')') count--;
		if (count < 0) return 0;
	}
	if (count == 0) return 1;
	else return 0;
}



int main()
{
	const size_t SIZE_OF_ARRAY = 30;

	unsigned countOfElements;

	do {
		std::cout << "Enter array: ";
		std::cin >> countOfElements;
	} while (countOfElements < 1 || countOfElements> SIZE_OF_ARRAY);

	char arr[SIZE_OF_ARRAY + 1];
	getArray(arr, countOfElements);

	std::cout << std::boolalpha << checkBalance(arr, countOfElements);
}