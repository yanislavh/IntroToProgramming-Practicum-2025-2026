#include <iostream>

int primeNumber(int number,int start)
{
	for (int i = start + 1; i < number; i++) // start+ 1 za da moje da zapochne da tursi ot sledvashtoto chislo sled poslednoto prosto koeto e namerilo
	{
		if (number % i == 0) return i;
	}
	return -1; //ako nqma poveche prosti 
}

void addToArray(int primeNum, int countOfPN, int arr[], size_t size)
{
	int index = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0) { index = i; break; }
	}
	arr[index] = primeNum; 
	arr[index + 1] = countOfPN;
}

void printArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i+=2) //dobavqm 
	{
		if (arr[i] == 0) break;
		if (i != 0) std::cout << " * ";
		if (arr[i + 1] > 1) std::cout << arr[i] << "^" << arr[i + 1];
		else std::cout << arr[i];
	}
}

void Factorize(int number, int arr[], size_t size)  //trqbwa da polucha dvojka prosto i broj
{

	bool flag = 0;
	int count = 0;
	int prime = 2; //zapochvam s 2, koeto e naj malkoto prosto chislo
	while (!flag)
	{
		if (number % prime == 0)
		{
			count++;
			number /= prime;
		}
		else
		{
			if(count != 0) addToArray(prime, count, arr, size); //v masiva chetniq index e prostoto chislo a sledvashtiq sled nego necheten index e stepenta
			prime = primeNumber(number, prime);
			count = 0;
			if (prime == -1) flag = 1; //ako poluchi che nqma poveche prosti promenq flagovata promenliva
		}
	}
	printArray(arr, size);
}

int main()
{
	const size_t SIZE_OF_ARRAY = 64;

	int arr[SIZE_OF_ARRAY] = { 0 };

	int number;
	std::cin >> number;

	std::cout <<std::endl;
	Factorize(number, arr, SIZE_OF_ARRAY);
	std::cout << std::endl;
}