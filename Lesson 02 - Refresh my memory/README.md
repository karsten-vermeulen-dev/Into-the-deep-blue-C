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

```cpp
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
| _char_ | 1 byte | **-128** to **127** |
| _unsigned char_ | 1 byte | **0** to **255** |
| _float_ | 4 bytes | **-3.4e±38** to **3.4e±38** (7 digit accuracy) |
| _double_ | 8 bytes | **-1.7e±308** to **1.7e±308** (15 digit accuracy) |
| _int_ | 4 bytes | **-2,147,483,648** to **2,147,483,647** |
| _unsigned int_ | 4 bytes | **0** to **4,294,967,295** |
| _short int_ | 2 bytes | **-32768** to **32767** |
| _unsigned short int_ | 2 bytes | **0** to **65535** |
| _long int_ | 4 bytes | **-2,147,483,648** to **2,147,483,647** |
| _unsigned long int_ | 4 bytes | **0** to **4,294,967,295** |
| _long long int_ | 8 bytes | **-9,223,372,036,854,775,808** to **9,223,372,036,854,775,807** |
| _unsigned long long int_ | 8 bytes | **0** to **18,446,744,073,709,551,615** |

💡 _The **char** and **bool** data types are actually numeric data types, meaning they store numeric values. For the **char** type this numeric value represents the ASCII code of the stored character. When storing **bool** data, although we conventionally would store **true** or **false**, you could store any 8-bit number in the variable. Any non-zero number stored would be interpreted as **true** and storing a **0** would mean **false**._

💡 _Because fundmental data types come built into the compiler, different compilers may represent them differently in memory. The type modifier may also be used without the data type to declare a variable. For instance, using **long** would be the same as **long int**. When using **signed** and **unsigned** modifiers, beware of integer wrap around_.

### Object data types

These are data types that are external to the built-in _C++_ types that come with the language. They can also be types you created yourself, such as a _struct_ or _class_ type:

```cpp
class ClassType
{
    //definition...
};

struct StructType
{
    //definition...
};

ClassType myOwnClass;
StructType myOwnStruct;
```

Object types can also be data types that belong to an external library such as the _Standard Library_, with a popular example being the _std::string_ data type. Other types include _vectors_, _fstream_, _maps_, etc. With object types, we can usually perform operations on them, such as finding the length of a _std::string_ by using its _size()_ member function. 

### A very brief look at _std::string_

Let's now take a quick look at the _std::string_ data type and see how we can declare, initialize and store data in a variable of this type.

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string name = "John Smith";
    std::cout << "My name is " << name << std::endl;
}
```

Outputting the string data to the console is as simple as any other data type, yet inputting is a little tricky. If we use _std::cin_, all whitespace is ignored if multiple words with spaces in between, as only the first word is captured. To alleviate this problem, we could use multiple string variables and capture all words, like so:

```cpp
std::string firstName, lastName;
std::cin >> firstName >> lastName;
std::cout << "My full name is " << firstName << ' ' << lastName << std::endl;
```

The problem with the above method is that we need to know in advance the number of strings we require and we have to add manual spaces in between when displaying the name. This is very laborious to say the least. A much more preferred method is to use the _getline()_ function, which works as follows:

```cpp
std::string fullName;
std::getline(std::cin, fullName);
std::cout << "My full name is " << fullName << std::endl;
```

The _getline()_ function makes use of the input object, which is our _std::cin_ stream object, and the variable to store the string in, which in this case is _fullName_.

### Value types

Value types are variables that store the actual value in their memory location. These types of variables are created on the _stack_ and this is known as _static memory allocation_:

```
int number;
float anotherNumber;
ClassType myOwnClass;
```

### Reference types

Reference types are variables, also known as _pointers_, that store the address of other variables, thereby referencing these variables and the data they store. These variables usually point to data created on the _heap_ and this is known as _dynamic memory allocation:_

```cpp
int* number = new int;
ClassType* myOwnClass = &otherClass;
std::unique_ptr<SomeType> smartPtr(new SomeType);
```

### The scope of a variable

Variables have a certain _scope_ within which they're valid and can be used and this can be classified as either _global scope_ or _local scope_. The scope of a variable is determined based on what block of code it is declared in, and when used outside of this scope, the compiler will not recognise the variable and errors will arise.  <br>

Variables with _global scope_ have the widest scope in a program and are accessible anywhere and everywhere. They are usually declared within header files or outside the _main()_ function in _main.cpp_:

```cpp
int globalNumber = 999;
char globalLetter = 'G';

int main()
{
    //main stuff
    //use global variables here
}
```

Alternatively, variables that have a _local scope_ are _local_ to a particular block of code and are only accessible within the units they are created in. They exist within functions or any other blocks of code surrounded by _curly braces_ (**{}**) such as _if-else_ statements or _loops_:

```cpp
for (int i = 0; i < 100; i++)
{
    //Do something with the local variable i
}
```

Variables in different scopes are independent of each other and are allowed to share the same name. The variable in the inner-most scope takes precedence over the outer one. Looking at the below code snippet, the first declared _number_ variable is local to the function and will cease to exist when the function ends. It has a different scope to the _number_ variable declared within the _while_ loop:

```cpp
void DoSomething()
{
    int number = -1234;

    while (true)
    {
        int number = 1234;
    }
}
```

💡 _Use global variables wisely and only when absolutely required. It is best practise to keep variable declarations as local as possible because too many global variables will decrease the maintainability of an application and increase what is known as **coupling**._

### Constants

Sometimes, you may want values to remain unchanged throughout the program and for this we use _constants_. These special creatures are declared just like their friendly variable counterparts, except they use the keyword _const_, like so:

```cpp
const float gravity = 9.87f;
const double Pi = 3.14159265359;
```

💡 _It has always been a common convention to use uppercase letters when naming constants (**GRAVITY**), however, in modern times, this is starting to become debatable. You may still see a lot of code out there written in this manner, and there is nothing wrong with this, but again, it depends on the coding standard of the author. I prefer **not** to use capital letters, because **(a)** it's tedious to hold down the **SHIFT** key when spelling these constants, and **(b)** for names with two or more words in them, such as maximumBlastForce, there is the dreaded underscore character I would need to insert to make it read **MAXIMUM_BLAST_FORCE**. Reading **MAXIMUMBLASTFORCE** would give everyone a headache._

Besides creating and using constants to prevent changes to a variable, they also provide other benefits, such as improving the code readability by removing the use of literal values, also known as _magic numbers_. Constants also make the code easier to debug, meaning that only one change is needed instead of many. We can also use a set of constants in the form of an _enumeration_. <br>
Constants need to be initialized, and from that point onward, their values cannot be altered, else the compiler will generate an error. Alternatively, another method that is commonplace to ensure unchangeable values is to use the preprocessor macro _#define_, which, in a modern _C++_ world, should be avoided if possible.

### Enumerations

This is a range of constant integer values, also known as _enumerators_ which allow us to create our own range of values, by giving each enumerator a specific name. To create an enumeration, we do so using the _enum_ keyword, like so:

```cpp
enum Directions
{
    North,
    South,
    East,
    West
};
```

Now, we can go ahead and create a variable of the type _Directions_ and use it like any other:

```cpp
Directions myDirection = East;
```

When we create enumerations, the very first enumerator will be **0** by default. All subsequent values will be **1**, **2**, **3**, etc. We can also explicitly set a value for the enumerators. Alternatively, only the first enumerator can be set, and the others will follow suit with incrementations of **1**. 

```cpp
enum Directions
{
    North = 1,
    South = 2,
    East = 4,
    West = 8
};
```

While the above works just fine, a more modern approach to defining enums is to use an _enum class_. Consider the following enum definitions:

```cpp
enum Days
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

enum Directions
{
    North,
    South,
    East,
    West
};
```

Without an _enum class_ in place, the enumerators can be used interchangeably, which can lead to confusing logic in the code:

```cpp
Directions myDirection = North;

if (myDirection == Monday)
{
    //This will actually run because North and Monday are 0
}
```

To define an _enum class_, simply add the _class_ keyword in the definition, like so:

```cpp
enum class Directions
{
    North = 1,
    South = 2,
    East = 4,
    West = 8
};
```

We just need to make sure that when assigning values, the exact enum type is specified as well, like so:

```cpp
Days myDay = Days::Monday;
Directions myDirection = Directions::North;
```

### Some very special keywords

Before moving on to the next section of this lesson, we will end off with some special _C++_ keywords that can be used with variables and their data types. 

_**sizeof**_ - This determines the size, in bytes, of the variable or data type used: 

```cpp
int number;

//Determine size of variable
sizeof(number);

//Determine size of data type
sizeof(int);
```

_**auto**_ - This keyword will allow the compiler to determine what data type best suits the variable. (More on this later!)

```cpp
auto variable = "Jack"; //variable is a const char*
auto variable = -2;     //variable is an int
auto variable = 2.45;   //variable is a double
```

_**typedef**_ - This allows you to substitute your own name in place of the data type’s name: 

```cpp
typedef unsigned long long VeryLong;
VeryLong number = 100'000'000;
```
