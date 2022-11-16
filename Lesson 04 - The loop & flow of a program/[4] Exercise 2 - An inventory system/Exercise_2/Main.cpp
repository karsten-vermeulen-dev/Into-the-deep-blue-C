#include <iostream>
#include <string>

int main()
{
	int totalItems = 0;
	const int maxItems = 6;

	std::string input;
	std::string inventory[maxItems];

	do
	{
		system("cls");
		std::cout << "Your hero is carrying:" << std::endl << std::endl;

		if (inventory[0] == "")
		{
			std::cout << "Nothing at all!" << std::endl;
			std::cout << "---------------------------" << std::endl << std::endl;
		}

		else
		{
			for (int i = 0; i < totalItems; i++)
			{
				char vowels[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };

				std::string prefix = "A ";
				std::string item = inventory[i];

				for (char c : vowels)
				{
					if (item[0] == c)
					{
						prefix = "An ";
						break;
					}
				}

				std::cout << (i + 1) << ". " << prefix << inventory[i] << std::endl;
			}

			std::cout << "---------------------------" << std::endl << std::endl;
		}

		if (totalItems != maxItems)
		{
			std::cout << "What do you want to add [Type 'exit' to leave]? ";
			std::cin >> input;
			inventory[totalItems++] = input;
		}

		else
		{
			std::cout << "Your player is carrying as much as he can! Type 'exit' to leave. ";
			std::cin >> input;
		}

	} while (input != "exit");


	system("pause");
	return 0;
}