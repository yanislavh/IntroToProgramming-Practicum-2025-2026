#include <iostream>

bool checkArrPerm(char arr1[], char arr2[], size_t size)
{
	int countArr1 = 0;
	int countArr2 = 0;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (arr1[i] == arr1[j]) countArr1++;
		}
		for (size_t j = 0; j < size; j++)
		{
			if (arr1[i] == arr2[j]) countArr2++;
		}
		if (countArr1 != countArr2)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	const size_t SIZE_OF_ARRAY = 256;

	char arr1[SIZE_OF_ARRAY];
	char arr2[SIZE_OF_ARRAY];

	std::cin >> arr1;
	std::cin >> arr2;

	std::cout << std::endl;
	std::cout << std::boolalpha << checkArrPerm(arr1, arr2, SIZE_OF_ARRAY);
	std::cout << std::endl;
}