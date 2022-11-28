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


