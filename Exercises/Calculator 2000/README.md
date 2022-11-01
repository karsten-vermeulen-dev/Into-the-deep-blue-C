## Calculator app

### Concepts you will improve on:

- Use of basic variable types
- Basic input and output
- Loops
- Functions
- Branching and switch statements
- Enumerations
- References
- Error trapping

### Create a calculator program

<b>1.</b> Create an application that presents a menu with options to <i>add</i>, <i>subtract</i>, <i>multiply</i>, <i>divide</i>, and <i>determine the power of</i> two numbers. Use an enum class to represent the various menu items. <br>

```cpp
enum class MenuItem
{
	Add = 1,
	Subtract,
	Multiply,
	Divide,
	Power,
	Exit
};
```

<b>2.</b> Check that only valid options are made. For example, if there are four options and the user selects a <b>6</b>, the menu should ignore that request or produce an error message.

<b>3.</b> After the user selects an operation, they should then proceed to enter two different numbers and store them in variables. <br>

<b>4.</b> Create functions for each calculator operation and make sure to pass in the two numbers entered previously. The function should return the result of the operation. <br>

```cpp
int Add(...)
{
	//perform operation and return result;
}
```
<b>5.</b> With regard to division, make sure that dividing by zero is not allowed and display an error message if the user tries to perform this. <br>

<b>6.</b> When writing your ```Power()``` function, try using either a <i>for-loop</i> or a recursive function, if you know how. The two numbers entered for a <i>power-of</i> operation will be the <i>base</i> and the <i>exponent</i>. <br>
 
<b>7.</b> Use <i>if/else-if/else</i> or <i>switch</i> statements to branch off and perform the operations after an operation has been chosen from the menu. <br>

<b>8.</b> Make sure that the entire calculator application runs within a loop. As soon as a calculator operation has been chosen, and the two numbers have been input and processed, make sure to return to the main menu. Keep the menu system running until the user chooses to exit the application, at which point the main loop will end. <br>

<b>9.</b> If you like, create functions to display the menu, input the two numbers and process the chosen operation. When requesting the user to input the two numbers, why not use reference parameters to the main variables storing those numbers? <br>

```cpp
void InputNumbers(int& firstNumber, int& secondNumber)
{
	std::cout << "Enter the first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter the second number: ";
	std::cin >> secondNumber;
}
```

<b>10.</b> Add <i>ASCII</i> art to make the menu and application look nicer.
