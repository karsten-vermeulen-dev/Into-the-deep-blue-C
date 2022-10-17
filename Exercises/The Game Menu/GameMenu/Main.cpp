#include <iostream>
#include <string>

enum class MenuOptions
{
	Play = 1,
	Instructions,
	Options,
	Help,
	Quit
};

int main()
{
	int menuChoice;
	bool isGameRunning = true;

	while (isGameRunning)
	{
		do
		{
			system("cls");
			std::cout << "#====================#" << std::endl;
			std::cout << "#     MAIN MENU      #" << std::endl;
			std::cout << "#====================#" << std::endl;
			std::cout << "# 1. Play Game       #" << std::endl;
			std::cout << "# 2. Instructions    #" << std::endl;
			std::cout << "# 3. Options         #" << std::endl;
			std::cout << "# 4. Help            #" << std::endl;
			std::cout << "# 5. Quit            #" << std::endl;
			std::cout << "#====================#" << std::endl << std::endl;

			std::cout << "Please make a choice >";
			std::cin >> menuChoice;

		} while (menuChoice < (int)MenuOptions::Play || menuChoice >(int)MenuOptions::Quit);

		switch (menuChoice)
		{

		case (int)MenuOptions::Play:
		{
			std::cout << "You wish to play? Prepare for adventure!" << std::endl;
			break;
		}

		case (int)MenuOptions::Instructions:
		{
			std::cout << "There are no instructions and no rules!" << std::endl;
			break;
		}

		case (int)MenuOptions::Options:
		{
			std::cout << "This is a simple console app! What did you expect? Options?" << std::endl;
			break;
		}

		case (int)MenuOptions::Help:
		{
			std::cout << "You want help? Go see a psychologist!" << std::endl;
			break;
		}

		case (int)MenuOptions::Quit:
		{
			isGameRunning = false;
			std::cout << "Thanks for playing!" << std::endl;
			break;
		}
		}

		system("pause");
	}

	return 0;
}