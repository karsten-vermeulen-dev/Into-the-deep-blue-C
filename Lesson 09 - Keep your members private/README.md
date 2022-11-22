## Lesson 8 - It’s all going _OOP_ from here...

## Classes & objects

Up until now, we have been writing code in a very procedural way, with different parts of our program executing in a rigid, orderly fashion. The application runs the code from top to bottom and calls into various functions, however nothing is compartmentalized. This type of programming is also known as _procedural programming_ and is an older method that is no longer popular. Instead, what we need is to make use of _objects_ and for that we will introduce _object-oriented programming_.

## Constructors & Destructors

We have been intuitively creating variables in memory and instantiating objects on the stack and heap without much thought about their creation. Similarly, when copying variables or objects, and when assigning one object or variable to another, we haven't really worried too much about what goes on underneath. Now is a good time to delve deep into the process of what happens when we instantiate objects of a class and how the member variables are cloned when copying. We are going to focus on the creation, destruction and copying of objects, and there are four essential member functions of a class that deal with just that.

- _**The Constructor**_
- _**The Destructor**_
- _**The Copy Constructor**_
- _**The Assignment Operator**_

## Copy Constructors & Assignment Operators

Sometimes, objects that are in memory need to be copied or assigned to other objects. This happens when we either manually make copies, or assign one object to another.
More commonly, copying can occur when objects are passed to functions _by-value_. Furthermore, because we should never return pointers or references a function's local variables, we end up returning copies instead. Each time a copy of an object is made, the _copy constructor_ is invoked. Similarly, when we assign one object to another, the _assignment operator_ is called. Let's explore these.

_More material coming soon..._
