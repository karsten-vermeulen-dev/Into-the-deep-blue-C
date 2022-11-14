#include <iostream>
#include <string>

//======================================================================================================
//Function declarations
//======================================================================================================

int PassByValue(int firstNumber, int secondNumber);                        //overloaded functions
float PassByValue(float* firstNumber, float* secondNumber);                //overloaded functions
short PassByValue(int* numArray, int size);                                //overloaded functions
long PassByRef(int& firstNumber, int& secondNumber, int& thirdNumber);
void FunctionLoop(int firstNumber, int secondNumber, bool flag = false);   //default arguments
int FunctionPointer(int firstNumber, int secondNumber);

//======================================================================================================
//Function definitions
//======================================================================================================

int PassByValue(int firstNumber, int secondNumber)
{
	int total = firstNumber + secondNumber;
	return total;
}
//======================================================================================================
float PassByValue(float* firstNumber, float* secondNumber)
{
	float total = (*firstNumber) + (*secondNumber);
	return total;
}
//======================================================================================================
short PassByValue(int* numArray, int size)
{
	int total = 0;

	for (int i = 0; i < size; i++)
	{
		total += numArray[i];
	}

	return total;
}
//======================================================================================================
long PassByRef(int& firstNumber, int& secondNumber, int& thirdNumber)
{
	int total = firstNumber + secondNumber + thirdNumber;
	return total;
}
//======================================================================================================
void FunctionLoop(int firstNumber, int secondNumber, bool flag)
{
	static int loopNum = 0;

	std::cout << "Loop #" << ++loopNum << std::endl;

	//Ff flag is true call the function again recursively
	//This will eventually cause an unwanted stack overflow
	if (flag)
	{
		FunctionLoop(firstNumber, secondNumber, flag);
	}
}
//======================================================================================================
int FunctionPointer(int firstNumber, int secondNumber)
{
	return firstNumber + secondNumber;
}
//======================================================================================================
int Fibonacci(int number)
{
	if (number == 1)
		return 0;
	else if (number == 2)
		return 1;
	else
		return Fibonacci(number - 1) + Fibonacci(number - 2);
}
//======================================================================================================
int main()
{
	//Pass by value and store result before outputting it
	int totalInt = PassByValue(10, 20);
	std::cout << "Total is: " << totalInt << std::endl;

	//Pass by value and store result before outputting it
	float firstFloat = 1.23f, secondFloat = 2.34f;
	float totalFloat = PassByValue(&firstFloat, &secondFloat);
	std::cout << "Total is: " << totalFloat << std::endl;

	//Pass by value and display returned result immediately
	int numArray[4] = { 10, 20, 30, 40 };
	std::cout << "Total is: " << PassByValue(numArray, 4) << std::endl;

	//Pass by reference (lvalue) and display returned result immediately
	int firstInt = 10000;
	int secondInt = 20000;
	int thirdInt = 30000;
	std::cout << "Total is: " << PassByRef(firstInt, secondInt, thirdInt) << std::endl;

	//Recursive function call 
	//Set last argument to 'true' to create a runtime error
	FunctionLoop(1, 10000);

	int(*functionPointer)(int, int);
	functionPointer = FunctionPointer;
	std::cout << "Total is: " << functionPointer(10, 20) << std::endl;

	std::cout << "The Fibonacci sequence of numbers..." << std::endl;

	const short total = 10;

	for (int i = 1; i <= total; i++)
	{
		std::cout << Fibonacci(i);
		(i == total) ? std::cout << "." : std::cout << ", ";
	}

	std::cout << std::endl << std::endl;

	system("pause");
	return 0;
}