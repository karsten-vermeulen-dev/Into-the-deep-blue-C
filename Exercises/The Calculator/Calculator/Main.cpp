#include <iostream>
#include <string>

//Function for adding the numbers
int Add(int numberOne, int numberTwo)
{
	int result = numberOne + numberTwo;
	return result;

	//Better way to do this
	//return numberOne + numberTwo;
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
	system("cls");

	auto firstNumber{ 0 };
	auto secondNumber{ 0 };

	std::cout << "Please enter your first number: ";
	std::cin >> firstNumber;

	std::cout << "Please enter your second number: ";
	std::cin >> secondNumber;

	char operation;
	std::cout << "What would you like to do with the numbers ['+', '-', '*', '/']?";
	std::cin >> operation;

	int result = 0;

	if (operation == '+')
	{
		result = Add(firstNumber, secondNumber);
	}

	else if (operation == '-')
	{
		result = Subtract(firstNumber, secondNumber);
	}

	else if (operation == '*')
	{
		result = Multiply(firstNumber, secondNumber);
	}

	else if (operation == '/')
	{
		result = Divide(firstNumber, secondNumber);
	}

	std::cout << "The result is " << result << std::endl;

	/*std::cout << "Adding the two numbers will yield " << firstNumber + secondNumber << std::endl;
	std::cout << "Subtracting the two numbers will yield " << firstNumber - secondNumber << std::endl;
	std::cout << "Multiplying the two numbers will yield " << firstNumber * secondNumber << std::endl;
	std::cout << "Dividing the two numbers will yield " << firstNumber / secondNumber << std::endl;*/


	system("pause");
	return 0;
}