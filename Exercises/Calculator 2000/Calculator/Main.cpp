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

//======================================================================================================
int Add(int firstNumber, int secondNumber)
{
	return firstNumber + secondNumber;
}
//======================================================================================================
int Subtract(int firstNumber, int secondNumber)
{
	return firstNumber - secondNumber;
}
//======================================================================================================
int Multiply(int firstNumber, int secondNumber)
{
	return firstNumber * secondNumber;
}
//======================================================================================================
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
//======================================================================================================
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

	//============================================
	//Iterative method 1
	//============================================

	/*if (exponent == 0)
	{
		return 1;
	}

	int result = base;

	for (int i = 1; i < exponent; i++)
	{
		result *= base;
	}

	return result;*/

	//============================================
	//Iterative method 2
	//============================================

	/*if (exponent == 0)
	{
		return 1;
	}

	int result = base;

	while (exponent > 1)
	{
		result *= base;
		exponent--;
	}*/
}
//======================================================================================================
int DisplayMenu()
{
	system("cls");
	std::cout << "#=====================#" << std::endl;
	std::cout << "|   CALCULATOR 2000   |" << std::endl;
	std::cout << "#=====================#" << std::endl;
	std::cout << "| 1. Add              |" << std::endl;
	std::cout << "| 2. Subtract         |" << std::endl;
	std::cout << "| 3. Multiply         |" << std::endl;
	std::cout << "| 4. Divide           |" << std::endl;
	std::cout << "| 5. Power            |" << std::endl;
	std::cout << "| 6. Exit             |" << std::endl;
	std::cout << "#=====================#" << std::endl << std::endl;

	int input;

	do
	{
		std::cout << "Please enter an option: ";
		std::cin >> input;
	} while (input < (int)MenuItem::Add || input >(int)MenuItem::Exit);

	return input;
}
//======================================================================================================
void InputNumbers(int& firstNumber, int& secondNumber)
{
	std::cout << "Enter the first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter the second number: ";
	std::cin >> secondNumber;
}
//======================================================================================================
void ProcessInput(int input)
{
	int firstNumber{ 0 }, secondNumber{ 0 };

	switch (input)
	{
	case (int)MenuItem::Add:
	{
		InputNumbers(firstNumber, secondNumber);
		std::cout << "The result is: " << Add(firstNumber, secondNumber) << std::endl;
		break;
	}

	case (int)MenuItem::Subtract:
	{
		InputNumbers(firstNumber, secondNumber);
		std::cout << "The result is: " << Subtract(firstNumber, secondNumber) << std::endl;
		break;
	}

	case (int)MenuItem::Multiply:
	{
		InputNumbers(firstNumber, secondNumber);
		std::cout << "The result is: " << Multiply(firstNumber, secondNumber) << std::endl;
		break;
	}

	case (int)MenuItem::Divide:
	{
		InputNumbers(firstNumber, secondNumber);
		std::cout << "The result is: " << Divide(firstNumber, secondNumber) << std::endl;
		break;
	}

	case (int)MenuItem::Power:
	{
		InputNumbers(firstNumber, secondNumber);
		std::cout << "The result is: " << Power(firstNumber, secondNumber) << std::endl;
		break;
	}

	default:
	{
		std::cout << "Goodbye!" << std::endl;
		break;
	}
	};

	system("pause");
}
//======================================================================================================
void main()
{
	int input{ 0 };

	while (input != (int)MenuItem::Exit)
	{
		input = DisplayMenu();
		ProcessInput(input);
	}
}