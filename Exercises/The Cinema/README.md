## Cinema seating

### Concepts you will improve on:

- Use of basic variable types and constants
- Multidimensional arrays
- Basic input and output
- Loops
- Functions
- Error trapping

### Create a cinema seating booking system

<b>1.</b> Write an application that will allow a user to reserve a seat within a cinema complex.

<b>2.</b> Use a multidimensional <i>char</i> array to store letters that tell the user whether the seat is reserved ('R') or available ('A').  

```cpp
//A cinema with three rows of five seats each
char seats[3][5];
```

<b>3.</b> Initialize the entire array with 'A' values so that we start off with an empty cinema, with all seats currently free to book. Here you could make use of a nested <i>for-loop</i>.

<b>4.</b> Use another nested <i>for-loop</i> to display the new cinema seating arrangement on-screen and make sure you clear the screen before. 

<b>5.</b> Get the user to input which <i>row</i> and <i>seat</i> they would like to sit in and store these values in separate variables. Check that only valid values are entered. For example, if there are only three rows and the user selects a 5, the application should ignore that input or produce an error message.

<b>6.</b> Access the specific seat in the cinema array and assign it a <i>reserved</i> value, using the character 'R'. If that particular array element already has an 'R', it would mean that seat is already reserved, so make sure to inform the user accordingly. Please also remember that arrays are zero-based, so when accessing the array elements, always subtract 1 from the user's choice.

```cpp
//Here we make sure that the second seat in the first row is reserved 
seats[0][1] = 'R'
```

<b>7.</b> Make sure that the seating app runs within a loop. As soon as a seat is reserved, display the updated cinema seating arrangement and ask the user if they would like to book another seat. If the user does want another seat, repeat the process, otherwise signal the loop to end.  

<b>8.</b> Use <i>constants</i> to store the maximum amount of rows and seats your cinema will have, and use these to declare and manipulate the array. 

```cpp
const int maxRows{ 5 };
const int maxColumns{ 5 };
```

<b>9.</b> Make use of functions to display the cinema seats, input the row and seat numbers and reset the seating arrangement. When requesting the user to input the row and seat, why not use reference parameters to the main variables storing those numbers? 

```cpp
void InputSeat(int& row, int& column)
{
	std::cout << "Enter your desired row: ";
	std::cin >> row;

	std::cout << "Enter your desired column: ";
	std::cin >> column;
}
```

<b>10.</b> Add ASCII art to make the application look nicer.
