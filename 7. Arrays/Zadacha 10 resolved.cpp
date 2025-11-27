#include <iostream>

void getArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool checkPalindrom(int begin, int end, int arr[], size_t size)
{
	bool result = 0;
	for (size_t i = begin; i <= end; i++)
	{
		if (arr[i] != arr[end - (i - begin)] && i != end - (i - begin))
		{
			return 0;
		}
	}
	return 1;
}

bool checkArrPalindrome(int arr[], size_t size)
{
	int firstBegin = 0, secondBegin = 1, firstEnd = 0, secondEnd = size - 1;
	while (secondBegin != secondEnd)
	{
		if (checkPalindrom(firstBegin, firstEnd, arr, size) && checkPalindrom(secondBegin, secondEnd, arr, size))
		{
			return 1;
		}
		firstEnd++;
		secondBegin++;
	}
	return 0;
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

	std::cout << std::endl;
	std::cout << std::boolalpha << checkArrPalindrome(arr, countOfElements);
	std::cout << std::endl;
}