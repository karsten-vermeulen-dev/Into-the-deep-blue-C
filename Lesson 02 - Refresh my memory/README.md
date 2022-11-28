## Lesson 2 - Refresh my memory

### Sample code

- Arrays

### Exercises 

Coming soon!

### Overview

Memory is a storage space that can hold data for a finite amount of time and is used by desktop applications, games, apps, etc., to store specific data within. Many devices and hardware peripherals today have some form of memory installed with storage limited to a specific amount. PCs, laptops, consoles, tablets, smartphones and even graphics cards hold some form of _Random Access Memory_, or _RAM_. In _C++_, memory is allocated and managed by using _variables_.

### "I declare you to be a variable"

Variables are temporary storage spaces in memory that contain data for the program and are identified by an address. Data is stored as binary data in bits and bytes and represented in different ways based on the type of variable. <br>
To create a variable, we need to first _declare_ it, which is the process of telling the compiler that you wish to use the following named memory block to store your data within. Declaring variables will have the compiler set some memory aside for you and each and every variable has a _type_, which tells the compiler how much memory to set aside. When we declare variables we have to specify its type as well as a name for the variable:

```cpp
char letter;
int number;
float decimal;
```

Declaring multiple variables of the same type can be done in one line, like so:

```cpp
int number1, number2, number3;
```

💡 _Variable names in C++ are case-sensitive and should always start with a letter, and may contain numbers and underscores thereafter. You should always follow a standard when naming your variables. If you haven't set your own, follow common standards from other developers or the coding standard your employer has likely developed for the team. A general standard for naming variables is to use Camel Casing, i.e., thisIsAVariable_.

### What now?

Once a variable is declared, it should be _**initialized**_ with a value. When declaring variables, their types come in two forms, namely _**fundamental data types**_ and _**object data types**_. Variables can also be classified as _**value types**_ or _**reference types**_. Depending on where in the code the variable is declared in, it will also have a particular _**scope**_. During the course of the program, a variable's value can be altered as and when needed, unless it’s declared as a _**constant**_. 

### Initializing variables

When variables are declared they will initially contain random values or garbage data, based on their type. It is always good practise to initialize a variable as soon as it's declared and that is done as follows:

```cpp
int age = 100;
char letter = 'k';
double velocity = 24.5;
```

You can also declare and initialize variables in one single line, like so:

```cpp
int number1 = 10, number2 = 20, number3 = 30;
```

Furthermore, we can initialize variables using existing variables, like so:

```cpp
int number1 = 1000;
int number2 = number1;
int number3(number2);
```

### Brace wars

While the above method of initializing is not wrong, a more modern approach would be to use _brace initialization_, like so:

```cpp
int age {100};
char letter {'k'};
double velocity {24.5};

int number1{ 10 }, number2{ 20 }, number3{ 30 };

int number1{ 1000 };
int number2{ number1 };
int number3{ number2 };
```

The great thing about using _brace initialization_ is that the compiler will scream at you if you accidentally cause a _narrowing conversion_, which might occur if the data types are different. Consider the following:

```cpp
float floatNum = 10.234f;

//You will now have lost the .234 and the number will be 10
int intNum = floatNum; 
```

While this is not serious and will only produce a warning, it might later create runtime bugs that are difficult to track down. Instead, we can use _brace initialization_ that will produce a compiler error and explicitly remind us that we are making a conversion:

```cpp
float floatNum{ 10.234f };

//No dice buddy, this ain't gonna work
int intNum{ floatNum }; 
 ```

💡 _Brace initialization may also be termed **list initialization** and may not always be the solution you want. Again, there are many discussions online pertaining to when, where, how, and why to use them, with many discussions becoming very heated. If you choose to use it, stay consistent in your codebase, unless it cannot be used in a particular situation. For the remainder of the material here, we will revert back to **not** using brace initialization._

### Assigning values to variables

Initializing variables only happens when declaring the variable and assigning it a value straight away to avoid garbage data. Variables may also be assigned data throughout the lifetime or scope of the variable, as long as it hasn't been declared a _constant_ (More on that later). <br>

One way to assign a value to a variable is to simply state a _literal value_, like so:

```cpp
number1 = -10;
number2 = 2.345f;
name = "Karsten";
```

We can also assign an existing variable to another, like so:

```ruby
firstNumber = anotherNumber;
```

Assignment chaining is also supported and allows us to assign different variables to each other: 

```cpp
number1 = number2 = number3 = number4;
```

💡 _Assignment chaining works from right to left meaning the value of the variable on the right is assigned to all other variables._

When assigning variables of different types to each other a narrowing conversion may again occur, just like when they are initialized. Again, a warning will appear to inform you of this potential problem and we should always heed the warning before it becomes a runtime issue. 

```cpp
float floatNum = 10.234f;
int number = floatNum;
```

To do this, we can cast the variable into the data type we wish to store it as, like so:

```cpp
number = (int)(floatNum);
```

However, if you can, prefer to use the modern style of type casting, i.e., _static_cast<>_ instead of the older _C-style_ cast:

```cpp
number = static_cast<int>(floatNum);
```

### Fundamental data types

So far, we have been demonstrating very simple data types, also known as _fundamental data types_, which are built into the _C++_ language and are also known as _built-in_ or _intrinsic types_. They include the following:

| Data type  | Tell me more |
| ------------- | ------------- |
| _int_  | Stands for _integer_ and is a whole number such as **1**, **900** or **-23** |
| _float_ | This is a _floating-point_ or _real number_ that contains decimal values |
| _double_ | This is also a real number with double the precision of a _float_ type |
| _bool_ | This holds two types of values, namely **true** or **false** |
| _char_ | This contains only a single character or single digit number, such as **A**, **x**, **0** or **9** |

The above intrinsic data types may also be declared using _type modifiers_, which further specify how large or small that variable is, or if the variable can store positive and negative numbers as well. For instance, a _long long int_ may use up more storage than a _short int_ and thus may be assigned many more values than a _short int_. An _unsigned int_ can not hold any negative numbers. See the table below to view them:

| Type modifier | Tell me more |
| ------------- | ------------- |
| _long_  | Works only with _int_, _float_ and _double_ data types to increase the range of values they can store |
| _short_ | Works only with _int_ types and decreases the range of values they can store |
| _signed_ | Works only with _int_ and _char_ types and allows them to represent positive and negative numbers |
| _unsigned_ | Works only with _int_ and _char_ types and restricts them to only representing positive numbers |

For those of you that are curious as to how much storage each of these variables requires as well as what range of values each variable can store, see the comprehensive table below:

| Data type | Byte size | Value range |
| ------------- | ------------- | ------------- |
| _bool_  | 1 byte | **true** or **false** |
