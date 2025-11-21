#include <iostream>

void getArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int miniNOD(int num1, int num2)
{
	int tmp;
	if (num1 < num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	bool flag = false;
	while (!flag)
	{
		if (num1 % num2 == 0) { flag = true; break; }
		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}
	return num2;
}

int findNODofArray(int arr[], size_t size)
{

	for (size_t i = 0; i < size-1; i++)
	{
		int miniNod = miniNOD(arr[i], arr[i + 1]);
		arr[i] = miniNod;
		arr[i + 1] = miniNod;
	}

	return arr[size - 1];
}



int main()
{
	const size_t SIZE_OF_ARRAY = 16;

	unsigned countOfElements;

	do {
		std::cout << "Enter array: ";
		std::cin >> countOfElements;
	} while (countOfElements < 1 || countOfElements> SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	getArray(arr, countOfElements);

	std::cout << std::endl;
	std::cout << findNODofArray(arr, countOfElements);
	std::cout << std::endl;
}