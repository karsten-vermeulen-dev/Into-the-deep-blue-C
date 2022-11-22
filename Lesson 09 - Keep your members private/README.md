## Lesson 9 - Keep your members private

## Abstraction

Exposing all of a class's member variables and data is generally a bad idea, and so far we have been doing just that. This public access to variables and member functions means that the class can be manipulated and altered from anywhere in the code. Good programming practice entails us to abstract the inner mechanics of a class from the client codebase. <br>
This is very much like driving a car – we don’t always need to know how the engine works, but it is important to know how to drive it. We are given a type of _interface_ by which we can communicate with and drive the car, namely a steering wheel, car keys, stick shift, etc. Abstraction allows us to hide away data by making it _private_ and only exposing the relevant parts of a class via _public member functions_.

### The 'restaurant' analogy

When you go dine in at your favourite restaurant, you generally go there, make an order, get your food and eat it without worrying too much about what goes on in the kitchen.
The process of preparing the food happens in the kitchen and this is _abstracted_ from you, because you don't really care how it's made, as long as it tastes great and the kitchen staff practice safe hygiene. <br>
Similarly, when using classes, we want to abstract or hide the raw details of an object from other objects or entities, because they don't need to know about them, neither do they care.

_More material coming soon..._
