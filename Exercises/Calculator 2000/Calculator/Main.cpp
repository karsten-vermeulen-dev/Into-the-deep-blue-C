#include <iostream>
#include <string>

enum class MenuItem
{
	Add = 1,
	Subtract,
	Multiply,
	Divide,
	Power,
	Exit
};

int Add(int firstNumber, int secondNumber)
{
	return firstNumber + secondNumber;
}

int Subtract(int firstNumber, int secondNumber)
{
	return firstNumber - secondNumber;
}

int Multiply(int firstNumber, int secondNumber)
{
	return firstNumber * secondNumber;
}

int Divide(int firstNumber, int secondNumber)
{
	if (secondNumber != 0)
	{
		return firstNumber / secondNumber;
	}

	else
	{
		std::cout << "Cannot divide by zero." << std::endl;
		return 0;
	}
}

int Power(int base, int exponent)
{
	int result = base;

	if (exponent == 0)
	{
		result = 1;
	}

	else if (exponent == 1)
	{
		result = base;
	}

	else
	{
		result *= Power(base, exponent - 1);
	}

	return result;
}

int main()
{
	bool isAppRunning = true;

	while (isAppRunning) 
	{
		system("cls");
		std::cout << "#=======================#" << std::endl;
		std::cout << "|      CALCULATOR       |" << std::endl;
		std::cout << "#=======================#" << std::endl;
		std::cout << "| 1. Add                |" << std::endl;
		std::cout << "| 2. Subtract           |" << std::endl;
		std::cout << "| 3. Multiply           |" << std::endl;
		std::cout << "| 4. Divide             |" << std::endl;
		std::cout << "| 5. Power              |" << std::endl;
		std::cout << "| 6. Exit               |" << std::endl;
		std::cout << "#=======================#" << std::endl;

		int choice = 0;
		std::cin >> choice;

		int result{ 0 };
		int firstNumber{ 0 };
		int secondNumber{ 0 };

		if (choice == 1)
		{
			std::cout << "Please enter your first number: ";
			std::cin >> firstNumber;

			std::cout << "Please enter your second number: ";
			std::cin >> secondNumber;

			result = Add(firstNumber, secondNumber);
			std::cout << "The result is " << result << std::endl;
			system("pause");
		}

		else if (choice == 2)
		{
			std::cout << "Please enter your first number: ";
			std::cin >> firstNumber;

			std::cout << "Please enter your second number: ";
			std::cin >> secondNumber;

			result = Subtract(firstNumber, secondNumber);
			std::cout << "The result is " << result << std::endl;
			system("pause");
		}

		else if (choice == 3)
		{
			std::cout << "Please enter your first number: ";
			std::cin >> firstNumber;

			std::cout << "Please enter your second number: ";
			std::cin >> secondNumber;

			result = Multiply(firstNumber, secondNumber);
			std::cout << "The result is " << result << std::endl;
			system("pause");
		}

		else if (choice == 4)
		{
			std::cout << "Please enter your first number: ";
			std::cin >> firstNumber;

			std::cout << "Please enter your second number: ";
			std::cin >> secondNumber;

			if (secondNumber == 0)
			{
				std::cout << "Cannot divide by zero." << std::endl;
			}

			else
			{
				result = Divide(firstNumber, secondNumber);
				std::cout << "The result is " << result << std::endl;
			}
			system("pause");
		}

		else if (choice == 6)
		{
			isAppRunning = false;
		}
	}

	std::cout << "Thanks for using the Calculator. Goodbye." << std::endl;
	
	return 0;
}