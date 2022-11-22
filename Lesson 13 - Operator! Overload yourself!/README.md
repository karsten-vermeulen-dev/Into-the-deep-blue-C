## Lesson 13 - Operator! Overload yourself!

## Operator overloading

Up until now, we have used operators to perform trivial tasks on intrinsic data such as _ints_, _floats_ or _bools_

```cpp
//Adding two numbers and assigning the result
int total = num1 + num2;

//Do something if time exceeds 100 seconds
if (totalTime >= 100.0f)
{
    //do stuff
}

//Keep playing the game while the game is actively running
if (isGameRunning == true)
{
     //play the game
}
```

Because these intrinsic data types are built into the compiler, the compiler knows how to perform the operations assigned. However, we can overload these operators so that our custom built data types can perform specific operations. For this to properly work, we will need to add special member functions to our classes because, in addition to encapsulating state and behavior, classes can also encapsulate operators. These operators are special kinds of functions that can operate on data of the class instances. We will begin overloading _unary operators_ and then follow on with _binary operators_.

_More material coming soon..._
