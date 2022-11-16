#include <iostream>

int main()
{
	const int maxItems = 5;

	//1. Create two arrays, one to store even numbers and the other odd numbers
	int oddNumbers[maxItems] = { 0 };
	int evenNumbers[maxItems] = { 0 };

	int oddCount = 0;
	int evenCount = 0;

	for (int i = 0; i < maxItems; i++)
	{
		//2. Ask user to enter a number
		int number = 0;
		std::cout << "Please enter a number: ";
		std::cin >> number;

		//3. Check if the number is odd or even and store accordingly
		if (number % 2 == 0)
		{
			evenNumbers[evenCount++] = number;
		}

		else
		{
			oddNumbers[oddCount++] = number;
		}
	}

	//4. Sum up both arrays and calculate their total values

	int totalOddNumbers = 0;
	int totalEvenNumbers = 0;

	std::cout << std::endl;
	
	for (int i = 0; i < maxItems; i++)
	{
		std::cout << oddNumbers[i] << ", ";
		totalOddNumbers += oddNumbers[i];
	}

	std::cout << std::endl;

	for (int i = 0; i < maxItems; i++)
	{
		std::cout << evenNumbers[i] << ", ";
		totalEvenNumbers += evenNumbers[i];
	}

	std::cout << std::endl << std::endl;
	std::cout << "The total odd number value is " << totalOddNumbers << std::endl;
	std::cout << "The total even number value is " << totalEvenNumbers << std::endl;

	system("pause");
	return 0;
}