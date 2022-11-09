#include <bitset>
#include <iostream>

//======================================================================================================
//Function demonstrating the use of the '=' operator
//======================================================================================================
void Assignment()
{
	int firstNumber = 0;
	int secondNumber = 0;

	std::cout << "Enter your first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter your second number: ";
	std::cin >> secondNumber;

	firstNumber = secondNumber * 2;
	secondNumber = firstNumber + 3;

	std::cout << "The first number is now : " << firstNumber << std::endl;
	std::cout << "The second number is now : " << secondNumber << std::endl;

	int result = 0;
	result = secondNumber = firstNumber;

	std::cout << "The first number is now : " << firstNumber << std::endl;
	std::cout << "The second number is now : " << secondNumber << std::endl;
	std::cout << "The result is now : " << result << std::endl;
}
//======================================================================================================
//Function demonstrating the use of the '+', '-', '*', '/' and '%'  operators
//======================================================================================================
void Arithmetic()
{
	//TODO - Add examples
}
//======================================================================================================
//Function demonstrating the use of the '++' and '--' operators
//======================================================================================================
void IncrementDecrement()
{
	//TODO - Add examples
}
//======================================================================================================
//Function demonstrating the use of the '==' and '!=' operators
//======================================================================================================
void Equality()
{
	//TODO - Add examples
}
//======================================================================================================
//Function demonstrating the use of the '<', '>', '<=' and '>=' operators
//======================================================================================================
void Relational()
{
	//TODO - Add examples
}
//======================================================================================================
//Function demonstrating the use of the '&&' and '!' operators
//======================================================================================================
void LogicalAndNot()
{
	bool isRaining = false;
	bool isBusRunning = false;

	std::cout << "Use boolean values (0/1) to answer the questions." << std::endl;
	std::cout << "Is it raining? ";
	std::cin >> isRaining;
	std::cout << "Do you have a bus service running? ";
	std::cin >> isBusRunning;

	//If it is raining AND there are NO buses, then you cannot work, otherwise you can
	if (isRaining && !isBusRunning)
	{
		std::cout << "You cannot go to work." << std::endl;
	}

	else
	{
		std::cout << "You can go to work." << std::endl;
	}

	//If it is raining AND there are buses, then just take an umbrella along
	if (isRaining && isBusRunning)
	{
		std::cout << "Take an umbrella." << std::endl;
	}

	//If it is NOT raining AND there are NO buses, then take a walk to work
	if (!isRaining && !isBusRunning)
	{
		std::cout << "Enjoy the sun and have a nice day." << std::endl;
	}
}
//======================================================================================================
//Function demonstrating the use of the '||' operator
//======================================================================================================
void LogicalOr()
{
	bool isCarDiscounted = false;
	bool isBonusReceived = false;

	std::cout << "Use boolean values (0/1) to answer the questions." << std::endl;
	std::cout << "Is there a big discount on your favorite car? ";
	std::cin >> isCarDiscounted;
	std::cout << "Did you receive a fantastic bonus? ";
	std::cin >> isBonusReceived;

	//If car is discounted in price OR you received a bonus
	//then you can buy yourself a car, otherwise you cannot
	if (isCarDiscounted || isBonusReceived)
	{
		std::cout << "Congratulations, you can buy that car!" << std::endl;
	}

	else
	{
		std::cout << "Sorry, waiting a while is a good idea." << std::endl;
	}
}
//======================================================================================================
//Function demonstrating the use of the '&', '|' and '~' operators
//======================================================================================================
void BitwiseAndOrNot()
{
	unsigned short firstNumber = 0;
	unsigned short secondNumber = 0;

	std::bitset<8> resultBits;
	std::bitset<8> firstNumberBits;
	std::bitset<8> secondNumberBits;

	std::cout << "Enter your first number [0 - 255]: ";
	std::cin >> firstNumber;
	std::cout << "Enter your second number [0 - 255]: ";
	std::cin >> secondNumber;

	firstNumberBits = firstNumber;
	secondNumberBits = secondNumber;

	std::cout << "The first number " << firstNumber << " in binary is " << firstNumberBits << std::endl;
	std::cout << "The second number " << secondNumber << " in binary is " << secondNumberBits << std::endl << std::endl;

	resultBits = ~firstNumber;
	std::cout << "Bitwise NOT of " << firstNumber << " is " << resultBits
		<< " which in decimal is " << resultBits.to_ulong() << std::endl;

	resultBits = ~secondNumber;
	std::cout << "Bitwise NOT of " << secondNumber << " is " << resultBits
		<< " which in decimal is " << resultBits.to_ulong() << std::endl << std::endl;

	resultBits = firstNumber & secondNumber;
	std::cout << "Bitwise AND of " << firstNumber << " & " << secondNumber << " is " << resultBits
		<< " which in decimal is " << resultBits.to_ulong() << std::endl << std::endl;

	resultBits = firstNumber | secondNumber;
	std::cout << "Bitwise OR of " << firstNumber << " | " << secondNumber << " is " << resultBits
		<< " which in decimal is " << resultBits.to_ulong() << std::endl << std::endl;

	resultBits = firstNumber ^ secondNumber;
	std::cout << "Bitwise XOR of " << firstNumber << " ^ " << secondNumber << " is " << resultBits
		<< " which in decimal is " << resultBits.to_ulong() << std::endl << std::endl;
}
//======================================================================================================
//Function demonstrating the use of the '<<' and '>>' operators
//======================================================================================================
void BitwiseShift()
{
	unsigned short number = 0;
	std::bitset<16> numberBits;

	std::cout << "Enter a number: ";
	std::cin >> number;

	numberBits = number;

	std::cout << "The number " << number << " in binary is " << numberBits << std::endl << std::endl;

	//Shifting the bits 1 unit to the right will halve the number
	numberBits = number >> 1;
	std::cout << "The number is now " << numberBits.to_ulong() << " which in binary is " << numberBits << std::endl << std::endl;

	//Shifting the bits 2 units to the right will quarter the number
	numberBits = number >> 2;
	std::cout << "The number is now " << numberBits.to_ulong() << " which in binary is " << numberBits << std::endl << std::endl;

	//Shifting the bits 1 unit to the left will double the number
	numberBits = number << 1;
	std::cout << "The number is now " << numberBits.to_ulong() << " which in binary is " << numberBits << std::endl << std::endl;

	//Shifting the bits 2 units to the left will quadruple the number
	numberBits = number << 2;
	std::cout << "The number is now " << numberBits.to_ulong() << " which in binary is " << numberBits << std::endl << std::endl;
}
//======================================================================================================
void main()
{
	system("cls");

	//Assignment();
	//Arithmetic();
	//IncrementDecrement();
	//Equality();
	//Relational();
	//LogicalAndNot();
	//LogicalOr();
	//BitwiseAndOrNot();
	//BitwiseShift();

	system("pause");
}