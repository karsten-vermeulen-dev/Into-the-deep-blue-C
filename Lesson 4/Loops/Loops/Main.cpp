#include <iostream>

void main()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Outer loop iteration #" << i + 1 << std::endl;
		std::cout << "-------------------------------" << std::endl;

		for (int j = 10; j > 0; j--)
		{
			std::cout << "Inner loop iteration #" << (10 - j) + 1 << std::endl;
		}

		std::cout << "-------------------------------" << std::endl;
	}

	//====================================================================

	//range-based for loops
	float range[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };

	for (auto i : range)
	{
		std::cout << "The number is " << i << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;

	//====================================================================

	//while loops
	int counter = 5;

	while (counter >= 0)
	{
		std::cout << "The counter is: " << counter << std::endl;
		counter--;
	}

	std::cout << "-------------------------------" << std::endl;

	//====================================================================

	//do-while loops
	do
	{
		counter++;
		std::cout << "The counter is: " << counter << std::endl;
	} while (counter <= 5);

	std::cout << "-------------------------------" << std::endl;

	//====================================================================

	//UNCOMMENT TO DEMO A TYPICAL WHILE LOOP

	/*short iterator = 1;
	bool isRunning = true;

	while (isRunning)
	{
		iterator++;
		cout << "The loop is running!" << endl;

		if (iterator >= 1000)
		{
			isRunning = false;
		}
	}*/

	//====================================================================

	//UNCOMMENT TO DEMO INFINITE LOOPS

	/*char letter = ' ';

	while (1)
	{
		cout << "Help! I'm stuck in a loop! I can't get out!" << endl;
		cout << "But if you enter the correct letter I may be able to escape" << endl;
		cout << "Enter letter >";
		cin >> letter;

		if (letter == 'b')
			break;

		if (letter == 'c')
		{
			cout << "Almost! Keep trying!" << endl << endl;
			continue;
		}

		cout << "That's the wrong letter!!! ARG!!!" << endl;
		cout << "You will need to try again..." << endl << endl;
	}

	cout << "-------------------------------" << endl;*/

	//====================================================================

	system("pause");
}