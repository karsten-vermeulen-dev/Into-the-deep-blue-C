## Lesson 2 - Refresh my memory

### Sample code

- Arrays

### Exercises 

Coming soon!

### Overview

Memory is a storage space that can hold data for a finite amount of time and is used by desktop applications, games, apps, etc., to store specific data within. Many devices and hardware peripherals today have some form of memory installed with storage limited to a specific amount. PCs, laptops, consoles, tablets, smartphones and even graphics cards hold some form of _Random Access Memory_, or _RAM_. In _C++_, memory is allocated and managed by using _variables_. <br>

### What are variables?

These are temporary storage spaces in memory that contain data for the program and are stored in memory, identified by an address. Data is stored as binary data in bits and bytes and represented in different ways based on the type of variable. <br>
To create a variable, we need to first declare it, which will set some memory aside for us to store data in. Each and every variable has a type, which tells the compiler how much memory to set aside for it. When we declare variables we have to specify its type as well as a name for the variable:

```cpp
char letter;
int number;
float decimal;
```

Declaring multiple variables of the same type can be done in one line, like so:

```cpp
int number1, number2, number3;
```

 _Variable names in C++ are case-sensitive and should always start with a letter, and may contain numbers and underscores thereafter. You should always follow a standard when naming your variables. If you haven't set your own, follow common standards from other developers or the coding standard your employer has likely developed for the team. A general standard for naming variables is to use Camel Casing, i.e., thisIsAVariable_.


