## Lesson 1 - Getting to know your environment

## An introduction to <i>C++</i>

I know you are probably very eager to start coding away, but let’s first spend some time getting to know the language that is <i>C++</i>. Let’s take a look at what <i>C++</i> really is, why we should care about it and who on earth actually uses it. 

### What exactly is <i>C++</i>?

<i>C++</i> is the universal language in games programming and is widely used for general application development. It was created by Danish computer scientist Bjarne Stroustrup in 1979 and released in 1983 and has since become standardized by the <i>International Organization for Standardization</i>, or <i>ISO</i>, with the current standard being <i>C++20</i> and <i>C++23</i> on the way. <br>
Created as a successor to <i>C</i>, it is still one of the most widely used programming languages of all time and is an object-oriented programming language, sometimes also known as <i>C with classes</i>, that is largely backward compatible with <i>C</i>.

### Why on earth are we using it?

Well, for one thing, it's super fast, allowing us developers to squeeze out the best performance in a game or application. It's also extremely well supported with many different 3rd party libraries and code assets available. <i>C++</i> is a multi-paradigm, intermediate-level programming language, offering extreme flexibility when developing applications. Finally, it allows for more control over peripherals, giving us direct access to hardware and memory.

### Who else uses <i>C++</i>?

Many game engines are either written in <i>C++</i>, or have some form of <i>C++</i> under the hood. If you're not into developing games, you might want to utilize this powerful programming language to create regular desktop or mobile applications or even audio plugins. Tons of graphics, audio and physics libraries and APIs have been written in <i>C</i> or <i>C++</i>, allowing developers to easily link their code to build great applications. <br>
<i>C++</i> is the one of the main programming languages used to create AAA games titles and has helped languages such as <i>Java</i> and <i>C#</i> develop.

### Some popular game engines worth mentioning

| Engine  | Tell me more |
| ------------- | ------------- |
| Unity  | A very popular game engine built using _C++_ yet offering only _C#_ scripting to the developer |
| Unreal Engine  | Epic's grand master of engines, written in _C++_ with the option to code in _C++_ as an alternative to using _Blueprints_ |
| CryEngine  | German studio _Crytek_'s famous engine, popular for the game _Far Cry_, is also written in _C++_ |
| Open 3D Engine | Based on _Amazon_'s _Lumberyard_ engine, which in turn is based on _CryEngine_, this new kid on the block also uses _C++_ alongside _Lua_ and _Python_ |
| Source 2 | Developed by _Valve_, this _C++_ engine can be credited for creating _Dota 2_ and _Half-Life: Alyx_ |
| Frostbite | Known for producing the _Battlefield_ series of games, _Electronic Arts_' baby is written in both _C++_ and _C#_ |

### Tell me about this so-called games industry

The gaming market is massive, globally worth more than $100bn annually, with the UK games industry worth about £5bn! The UK has the 6th largest market in the world, following Germany, South Korea, Japan, USA, and China. You can choose to go and work for any type of studio, be that AAA, mid-level or indie and within that realm you can choose to develop many different types of games, namely desktop, console, mobile, online, AR, and VR. And within that, there is an abundance of career paths as well, namely tools, physics, graphics, gameplay, audio, and AI.

### Want to develop software rather?

Why not? It's a lucrative career, and makes good money too. But that shouldn't be your ultimate reason for entering the industry. Your passion for creating new cutting-edge software should drive you to pursue this type of career. In this field, you get the chance to create applications rather than games, and as such, the software you create might not appear as exciting or dynamic as a game. You could be creating applications such as audio plugins, database managers, banking apps, medical and audio visualizers, to name a few. Much of the middleware that you use in the industry will most likely be written in _C++_.

### Some popular software APIs worth mentioning

| API  | Tell me more |
| ------------- | ------------- |
| JUCE | Short for _Jules' Utility Class Extensions_, this cross-platform _C++_ application framework allows developers to use _C++_ to create audio apps and plugins with a rich UI |
| OpenGL | A very old and very popular graphics API written in _C_ that allows developers to harness the raw power of the GPU to create visual applications |
| wxWidgests | Another _C++_ library that offers developers a widget toolkit to create GUI applications |
| wWise | Another great tool for creating audio applications or to integrate audio into your existing application (or game) |
| OpenVR | Developed by _Valve_, and created using _C_, _C++_ and _C#_, this API allows developers to manipulate virtual reality devices in their applications |
| Qt | Pronounced _que tee_ or simply _cute_, this software development behemoth gives developers the power to create just about any kind of (GUI) application that can run on just about any device |

## An introduction to _Visual Studio_

### What is this _Visual Studio_ exactly?

This is an integrated development environment, or IDE, developed by _Microsoft_, used for writing, compiling, and linking your _C++_ code. Of course, you can use it to code in other languages as well, and the IDE comes packed with many tools to make the chore of software development so much easier. The built-in _intellisense_ will assist developers with syntax highlighting, code prediction and many different debugging tools to help find and fix issues in the code. We are only going to be using a small portion of _Visual Studio_'s capabilities, which is why the _Community 2022_ edition is more than enough for our purposes

### Where can I find _Visual Studio_?

_Visual Studio_ comes in three flavors, namely _Professional_, _Enterprise_ and _Community_, the latter being free, and can be downloaded [HERE](
https://www.visualstudio.com). Click on _Download Visual Studio_ and select the _Community 2022_ edition, which will download a setup EXE file for you to run in order to install the IDE.

### Managing the installation

After installing _Visual Studio_, you can use the _Visual Studio Installer_ to modify or update your installation. Simply search for this on your machine and run it. You can have multiple versions of _Visual Studio_ installed side-by-side, which can be managed separately. <br>
Inside the _Visual Studio Installer_, in the _Community 2022_ box, click on **Modify** to make changes to your installation. Under the _Workloads_ tab, make sure to select the **Desktop development with C++** box, which should provide you with all the bog-standard _C++_ tools you will need. Click on **Modify** in the bottom right corner of the screen to apply these changes. <br>
If there are specific components you wish to install, then simply click on the _Individual components_ tab at the top of the installer. Here, you can install specific compilers, language extras, debugging tools, plugins, and much more. It is also here that _Windows_ developers can choose to install specific _Windows Software Development Kits_, or _SDKs_. You should have default SDKs selected for installation, but if you’re after something specific, select it, as well as any other components and click on **Modify** to install them.

### Starting a new project

Let us begin by doing the following:

1. Start up _Visual Studio_ and create a **New Project** 
2. Select the **Empty Project** template and click **Next** 
3. Give your project a name, choose the desired location for your solution folder and click **Create**

You are now inside _Visual Studio_'s famous IDE. Take a good look around and admire the view. This will be your new home away from home. Once you're done staring, add a source file to the project, which will be our main starting point for the application. To achieve this, simply right-click on the _Source Files_ tab and select **Add** and then **New Item**. Now select the **C++ File** option and give the file a name, something as boring as **Main.cpp**.

We can now add some start-up code to the _Main.cpp_ file, however, don’t worry too much about what it does just yet:

```cpp
#include <iostream>

int main()
{
    system("pause");
    return 0;
}
```

### Compiling & running the project

We now have a simple _Visual Studio C++_ project set up, with a few lines of code, and are ready to test it out. Once we have written some code that makes sense, the source file can be compiled and there are multiple ways to do this, namely: 

1. Right-click the project name and select **Build**
2. Click the **Build** button on the toolbar. If you don’t see it, right-click the toolbar and select the **Build** option

If there are any errors when building your project, they will appear in the _Output_ window below. Once your project has built successfully, you can go ahead and run it and this can be done as follows:

1. Simply hit **F5**
2. Click the _Run_ button on the toolbar (it's the green _play_ button)

The above actions will also compile the project, if not already done, before running the application. 

When you run your newly created application, you should be greeted with a terminal/console window prompting you to press any key to continue.

### Tips, tricks & shortcuts

| Shortcut  | What it does |
| ------------- | ------------- |
| CTRL-D | Duplicates a line of code |
| CTRL-KC | After selecting a block of code, use this to comment out the entire segment |
| CTRL-KU | You can also uncomment an entire segment of code using this shortcut |
| CTRL-KD | Based on the formatting options set, this will format your code, such that it is indented, aligned and spaced out accordingly |
| ALT-UP/DOWN arrows | Place the mouse cursor next to line of code and use this shortcut to move the entire line up/down the page |
| TAB | Useful for auto-filling code segments such as loops, branches, switch statements, etc. |
| ALT-mouse drag | This will allow you to select rectangular blocks of code |

_More tips, tricks & shortcuts coming soon..._

## The _main_ source

Let us now make use of our brand new application and write some meaningful code. We are going to continue using our trusty _Main.cpp_ source file to demonstrate the following:

- The `main()` function
- Statements
- Comments
- The I/O Stream

### The `main()` function

This is the starting point of our program, which will execute all commands in order after pressing **F5**. It's a function that comprises a block of code between the curly braces **{}** and returns a value, in our case **0**, when the program is done. <br>
The function `main()` should always return an integer value, so that upon termination of the application, the return value could signify success or failure. This return value will be sent back to the operating system or back to the parent application, if it was launched from within another program.

The main function may also take command line arguments, in which case it may look like this:  

```cpp
int main(int argc, char* argv[])
```

These arguments will receive values from the command line, if that's how the application was launched, and will allow the programmer to use with them accordingly. More on this later.

### Statements

These are all the commands in a program that tell the application what to do and have to end with a _semicolon_ **(;)**. 

```cpp
system("pause");
return 0;
```

Statements may also span over multiple lines, like so:

```cpp
std::cout << "Hello Game World, this is a very long sentence that " 
             "will span over multiple lines. If you had a widescreen "
             "display, this would not be necessary at all." << std::endl;
```

Alternatively, you can have multiple statements in one line, as long as each one ends with a semicolon:

```cpp
left = right; system("pause"); return 0;
```

Statements that are grouped together are called _compound statements_ or _blocks_.

```cpp
if (right == wrong)
{
    //The world will end!
    SaveTheWorld();
    return -1;
}
```

They are usually grouped together within _curly brackets_ **({})** and all statements have to end with a _semicolon_ **(;)**. No matter how much whitespace (in the form of spaces, tabs or newlines) is present, the compiler reads an entire statement as one entity until it finds the semicolon. 

💡 _Brace wars are a thing and many developers out there will argue which method is better, i.e., lined up or such that the opening brace is on the same line as the opening statement. Ignore the heated discussions as to which is better, simply choose the method you prefer and stick to that. Don't mix it up_. 

```cpp
if(braces == linedUp)
{
    //Happy days
}
```

**OR**

```cpp
if(braces == notLinedUp) {
    //Happy days 
}
```

### Comments

These are parts of the code that are ignored by the compiler and are there to assist programmers with understanding what the code does. Comments can span over a single line or take up multiple lines like so:

```cpp
//This is a comment

/* This is also a comment
   that spans over multiple
   lines */
```

💡 _Because comments are not compiled, they do not need a semicolon at the end_.

Although comments are good for explaining complex code and algorithms, don't overuse them or comment the obvious. You should always aim to write self-documenting code and name your variables and functions properly:

```cpp
void AddTwoNumbers(int firstNumber, int secondNumber)
{
    //Add the numbers...
}
```

### The I/O stream

When you look at the basic core entity of every game or application, there is always some kind of input and output happening. For instance, players use keyboards, mice or controllers to input data and have their screens, TVs or VR headsets display the graphics. Similarly, applications read data input via the keyboard or mouse and display graphical feedback in the form of user interfaces, animations or images to screens and headsets. <br>
In _C++_, we can achieve the same basic input/output, however in a much simpler form (for now). We can use our keyboards to enter text data and use the console screen we created earlier to display data. For this to work, we will make use of the input and output streams that come with the _Standard C++ Library_, which requires us to include a certain header file:

```cpp
#include <iostream>
```

Because we will be using functions and commands that belong to this _C++_ library, we will need to make use of the following namespace:

```cpp
std::
```

💡 _Don't worry too much about what namespaces are, we will cover them in a later lesson_.

### The output stream

To output to the console we use the _std::cout_ object and the _insertion operator_ **(<<)**:

```cpp
std::cout << "Sending text to the console...";
```

Besides text, we can also print numeric values on the console window:

```cpp
//Output a positive whole number
std::cout << 100;

//Output a negative whole number
std::cout << -25000;

//Output a decimal number
std::cout << 1.234;
```
Fancy mixing it up a little? Well, you can send multiple different entities to the output stream, such as string and numeric literals, as long as the _insertion operator_ is used in between: 

```cpp
//Mixing string literals with whole numbers
std::cout << "I am " << 100 << " years old!";

//Mixing string literals with decimal numbers
std::cout << "I weigh " << 45.7 << " kilos!";
```

The _std::endl_ object is used to move to the next line. This has the same effect as hitting the enter key:

```cpp
std::cout << "This is one line of text" << std::endl;
std::cout << "This is another...";
```

The above can also be achieved using the special _newline character_ **(\n)**:

```cpp
std::cout << "This is one line of text\nThis is another...";
```

💡 _The second method works just as well, however it can make the code look very messy and confusing._

### Escape sequences

Now, the _newline character_ isn't the only special character out there. In fact, there are a few other special characters you can insert within text, and these are known as _escape sequences_. To use one of these characters, you have to precede them with a _backslash character_ **(\\)** which tells the compiler that something special needs to be output, such as a new line or tab. This means that these characters will not be printed to the console but instead be used to format the text in some particular way. This special formatted output would not otherwise be printable in any manner hence why there are a few of these set aside:

| Character  | What it does |
| ------------- | ------------- |
| \a | Create the default _Windows_ sound |
| \n | Go to the next line in the console window |
| \b | Go back and erase one character in the text (backspace) |
| \t | Move forward a few spaces (tab) |
| \\" | Print a quotation character in the text |
| \\\ | Print a backslash character in the text |

### The input stream

To get input from the keyboard, we use the _std::cin_ object, the _extraction operator_ **(>>)** and a variable to store the data in:

```cpp
int age;
std::cin >> age;
```

You can also store multiple values by providing multiple variables in one line, separated by extraction operators:

```cpp
int age;
float weight;
std::cin >> age >> weight;
```
