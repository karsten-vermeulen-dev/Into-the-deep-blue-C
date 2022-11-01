#include <iostream>
#include <string>

//Function for adding the numbers
int Add(int numberOne, int numberTwo)
{
	return numberOne + numberTwo;
}

//Function for subtracting one number from another
int Subtract(int numberOne, int numberTwo)
{
	return numberOne - numberTwo;
}

//Function for multiplying two numbers
int Multiply(int numberOne, int numberTwo)
{
	return numberOne * numberTwo;
}

//Function for dividing two numbers
int Divide(int numberOne, int numberTwo)
{
	return numberOne / numberTwo;
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
		std::cout << "| 5. Exit               |" << std::endl;
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
		}

		else if (choice == 2)
		{
			std::cout << "Please enter your first number: ";
			std::cin >> firstNumber;

			std::cout << "Please enter your second number: ";
			std::cin >> secondNumber;

			result = Subtract(firstNumber, secondNumber);
			std::cout << "The result is " << result << std::endl;
		}

		else if (choice == 3)
		{
			std::cout << "Please enter your first number: ";
			std::cin >> firstNumber;

			std::cout << "Please enter your second number: ";
			std::cin >> secondNumber;

			result = Multiply(firstNumber, secondNumber);
			std::cout << "The result is " << result << std::endl;
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
		}

		else if (choice == 5)
		{
			isAppRunning = false;
		}
	}

	std::cout << "Thanks for using the Calculator. Goodbye." << std::endl;
	system("pause");
	return 0;
}