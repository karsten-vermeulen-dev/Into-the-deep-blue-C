## Lesson 14 - T.U. Template

## Templates

Templates are one of the many features in _C++_ that give the language so much power. They allow for the programmer to create blueprints for functions or classes, creating a specific behavior that can then be applied using different data types. This hugely prevents code repetition because once a template function or class has been created, all that's left is to _slot in_ the data type. <br>
Moreover, compilation times are reduced because templates aren't compiled unless they are used. When creating templates, all code goes in the header file (.h or .hpp), since if they were in the source file (.cpp) they can't get compiled because they are essentially empty. This means, that the entire class definition and all member function definitions must reside inside the header file. Template classes and functions are effectively empty blueprints and are only compiled when the objects get instantiated.

_More material coming soon..._
