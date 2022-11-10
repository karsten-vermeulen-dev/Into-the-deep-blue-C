#include <iostream>
#include <string>

int main()
{
	std::string guess;
	bool hasGameEnded = false;
	bool isNameGuessed = false;
	const std::string name = "Karsten";

	while (!isNameGuessed && !hasGameEnded)
	{
		system("cls");
		std::cout << "Take a guess at what my name is: ";
		std::getline(std::cin, guess);

		if (guess == name)
		{
			std::cout << "Well done! You guessed it!" << std::endl << std::endl;
			isNameGuessed = true;
		}

		else
		{
			if (guess == "")
			{
				std::cout << "You didn't guess anything at all!" << std::endl << std::endl;
			}

			else if (guess[0] == 'K' || guess[0] == 'k')
			{
				std::cout << "You got the first letter correct." << std::endl << std::endl;
			}

			else
			{
				std::cout << "Nope! Not even close!" << std::endl << std::endl;
			}
		}

		if (!isNameGuessed)
		{
			char answer;
			do
			{
				std::cout << "Would you like to guess again [y/n]?";
				std::cin >> answer;
			} while (answer != 'y' && answer != 'n' && answer != 'Y' && answer != 'N');

			if (answer == 'n' || answer == 'N')
			{
				hasGameEnded = true;
			}

			std::cin.clear();
			std::cin.ignore();
		}
	}

	std::cout << "Thanks for playing. Goodbye." << std::endl;
	system("pause");
	return 0;
}