#include <iostream>
#include <string>

int main()
{
	//=========================================
	//Pointers to variables in stack space
	//=========================================

	//Create an int variable and a pointer to the int
	int intNum = 100;
	int* intPointer = &intNum;

	//Change the int data via the pointer
	*intPointer += 100;

	//display the data in the pointer and variable (directly and indirectly)
	std::cout << "The address of \"intPointer\" is: " << intPointer << std::endl;
	std::cout << "The data inside \"intNum\" is (direct access): " << intNum << std::endl;
	std::cout << "The data inside \"intNum\" is (indirect access): " << *intPointer << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//====================================================================

	//Create a float variable and a pointer to the float
	float floatNum = 10.123f;
	float* floatPointer = &floatNum;

	//Change the float data via the pointer
	*floatPointer -= 1.002f;

	//Display the data in the pointer and variable (directly and indirectly)
	std::cout << "The address of \"floatPointer\" is: " << floatPointer << std::endl;
	std::cout << "The data inside \"floatNum\" is (direct access): " << floatNum << std::endl;
	std::cout << "The data inside \"floatNum\" is (indirect access): " << *floatPointer << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//====================================================================

	//Access data from int variable using the pointer
	int myNum = 10 * (*intPointer);

	//Display the data in the variable directly
	std::cout << "The data inside \"myNum\" is (direct access): " << myNum << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//====================================================================

	std::string myName = "Karsten Vermeulen";
	std::string* ptr1 = &myName;
	std::string* ptr2 = ptr1;

	std::cout << "The address of \"myName\" is: " << ptr1 << " or " << ptr2 << std::endl;
	std::cout << "The name inside \"myName\" is (indirect access): " << *ptr1 << std::endl;
	std::cout << "The name inside \"myName\" is (indirect access): " << *ptr2 << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//====================================================================

	//Create a short variable and a pointer to the short int
	short int smallNum = -123;
	short int* smallNumPointer = &smallNum;

	//Display the size of the variable and the pointer to it
	std::cout << "The size of the variable \"smallNum\" is: " << sizeof(smallNum) << " bytes" << std::endl;
	std::cout << "The size of the pointer \"smallNumPointer\" is: " << sizeof(smallNumPointer) << " bytes" << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//====================================================================

	//=========================================
	//Constants & pointers 
	//=========================================

	int number1 = 100;
	int number2 = 200;

	//Pointer to constant data can change addresses but NOT the data they point to
	const int* constPointer1 = &number1;
	constPointer1 = &number2;

	//UNCOMMENT TO DEMO COMPILER ERROR
	//*constPointer1 = -100;
	//int* anotherPointer = constPointer1;

	//Constant pointer to data can NOT change addresses but can change the data it points to
	int* const constPointer2 = &number1;

	//Data in variable may be changed
	*constPointer2 = -100;

	//UNCOMMENT TO DEMO COMPILER ERROR
	//constPointer2 = &number2;

	//Constant pointer to constant data can NOT change the address NOR the data it points to
	const int* const constPointer3 = &number1;

	//UNCOMMENT TO DEMO COMPILER ERROR
	//constPointer3 = &number2;
	//*constPointer3 = -100;

	//=========================================
	//Pointers to variables in heap space
	//=========================================

	//Create an int pointer and allocate space on the heap for an int 'object'
	int* intPointerHeap = new int;

	//Change the int data via the pointer
	*intPointerHeap = 10;

	//Access the heap data and use it in an algorithm and assign result to a variable
	int myNumber = (*intPointerHeap) * (*intPointerHeap);

	//display the data in the pointer and variable (directly and indirectly)
	std::cout << "The address of \"intPointerHeap\" is: " << intPointerHeap << std::endl;
	std::cout << "The data being referenced by \"intPointerHeap\" is: " << *intPointerHeap << std::endl;
	std::cout << "The final value of \"myNumber\" is: " << myNumber << std::endl;

	//Remove int data from heap
	delete intPointerHeap;

	//Nullify the pointer for future use
	intPointerHeap = nullptr;

	//UNCOMMENT TO DEMO MEMORY LEAKS
	/*while (true)
	{
		long long int* longPointer = new long long int;
	}*/

	std::cout << "-----------------------------------------------------------------------" << std::endl << std::endl;

	struct Data
	{
		int age = 0;
		std::string name;
	};

	Data* myData = new Data;
	myData->age = 41;
	myData->name = "Karsten";

	std::cout << "Here are the details for the lecturer:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "Name: " << myData->name << std::endl;
	std::cout << "Age:  " << myData->age << std::endl << std::endl;

	//=========================================
	//Array of pointers
	//=========================================

	//Create some regular integer variables
	short num1 = 10;
	short num2 = 20;
	short num3 = 30;

	//Create an array of pointers
	short* pointers[3];

	//Make sure each array element
	//references one of the above ints
	pointers[0] = &num1;
	pointers[1] = &num2;
	pointers[2] = &num3;

	//Make changes to the integers 
	//using the pointers in the array
	*pointers[0] = -10;
	*pointers[1] = -20;
	*pointers[2] = -30;

	//Display the new data using the pointers
	std::cout << *pointers[0] << std::endl;
	std::cout << *pointers[1] << std::endl;
	std::cout << *pointers[2] << std::endl << std::endl;

	//Display the new data using the ints
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl << std::endl;

	//Create an int object on the heap and 
	//point to it using the pointer array
	for (auto& p : pointers)
	{
		static int i = 0;
		p = new short;
		*p = (i++) * 10;
	}

	//Display the new data using the pointers
	std::cout << *pointers[0] << std::endl;
	std::cout << *pointers[1] << std::endl;
	std::cout << *pointers[2] << std::endl;

	//Loop through all pointers in the array 
	//and free the objects from the heap
	for (auto& p : pointers)
	{
		delete p;
		p = nullptr;
	}

	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//=========================================
	//Pointers to arrays
	//=========================================

	//Create an array of floating point numbers
	float myFloatArray[5] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };

	//Assign array to float pointer
	float* arrayPointer = myFloatArray;

	//Access data elements in array using the array and pointer
	float floatNum1 = myFloatArray[3];
	float floatNum2 = arrayPointer[2];

	//Display results on screen
	std::cout << "The value inside \"floatNum1\" is: " << floatNum1 << std::endl;
	std::cout << "The value inside \"floatNum2\" is: " << floatNum2 << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//Create a char array pointer and allocate 
	//space on the heap with an initial value
	char* firstName = new char[8]{ 'K', 'a', 'r', 's', 't', 'e', 'n', '\0' };

	//Display name on screen
	std::cout << "My name is is: " << firstName << std::endl;

	//De-allocate memory from the heap
	delete[] firstName;

	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//Create a float array pointer, allocate space on 
	//the heap and fill it with values using a loop
	float* myFloatArrayHeap = new float[5];

	for (int i = 0; i < 5; i++)
	{
		myFloatArrayHeap[i] = 0.5f * i;
	}

	//Display all values in the heap array
	for (int i = 0; i < 5; i++)
	{
		std::cout << "My array #" << i + 1 << " is: " << myFloatArrayHeap[i] << std::endl;
	}

	//De-allocate memory from the heap
	delete[] myFloatArrayHeap;

	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//=========================================
	//Pointer arithmetic
	//=========================================

	std::string* names = new std::string[5]{ "John", "Jack", "Harry", "Frank", "Henry" };

	//Name is now 'John'
	std::cout << "The first name in the group is " << *names << std::endl;

	//Move pointer forward by 1 element (4 bytes)
	names++;

	//Name is now 'Jack'
	std::cout << "The second name in the group is " << *names << std::endl;

	//Move pointer forward by 3 elements (12 bytes)
	names += 3;

	//Name is now 'Henry'
	std::cout << "The last name in the group is " << *names << std::endl;

	//Move pointer backward by 1 element (4 bytes)
	names -= 1;

	//Name is now 'Frank'
	std::cout << "The penultimate name in the group is " << *names << std::endl;

	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//=========================================
	//const chars
	//=========================================

	//Create a pointer to an array of characters
	const char* stringOfChars = "Hello World!";

	//Pointing to a different string is allowed
	stringOfChars = "Goodbye World!";

	//Changing any of the constant characters is NOT!
	//stringOfChars[1] = 'a';

	std::cout << "The string reads: " << stringOfChars << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	//=========================================
	//References
	//=========================================

	int myAge = 38;
	int& ageRef = myAge;

	//Change the age using the variable
	myAge = 28;
	std::cout << "I am now " << myAge << " years old!" << std::endl;

	//Change the age using the reference
	ageRef = 18;
	std::cout << "I am now " << ageRef << " years old!" << std::endl << std::endl;

	//l-value reference
	float number = -2.345f;
	float& referenceL = number;

	std::cout << "The number is " << number << std::endl;
	std::cout << "The reference is " << referenceL << std::endl << std::endl;

	float& anotherRef = referenceL;
	anotherRef = 3.456f;

	std::cout << "The number is " << number << std::endl;
	std::cout << "The first reference is " << referenceL << std::endl;
	std::cout << "The second reference is " << anotherRef << std::endl << std::endl;

	//r-value reference
	int&& referenceR = (10 * 2 + 4);
	std::cout << "The result of the algorithm is " << referenceR << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;

	system("pause");
	return 0;
}