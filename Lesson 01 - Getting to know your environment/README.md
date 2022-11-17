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

_More info coming soon..._

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
