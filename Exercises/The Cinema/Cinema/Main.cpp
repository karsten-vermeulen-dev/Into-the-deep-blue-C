#include <iostream>
#include <string>

void main()
{
	const int maxSeats = 6;
	char seats[maxSeats] = { 'A', 'A', 'A', 'A', 'A', 'A' };
	bool isAppRunning = true;

	while (isAppRunning)
	{
		system("cls");
		std::cout << "#-----------------------------------#" << std::endl;
		std::cout << "|===============Screen==============|" << std::endl;
		std::cout << "#-----------------------------------#" << std::endl;

		for (auto i{ 0 }; i < maxSeats; i++)
		{
			std::cout << "|  " << seats[i] << "  ";
		}

		std::cout << "|" << std::endl;
		std::cout << "#-----------------------------------#" << std::endl;

		auto seat{ 0 };

		do
		{
			std::cout << "Where would you like to sit? [1 - " << maxSeats << "]: ";
			std::cin >> seat;
		} while (seat < 1 || seat > maxSeats);

		seats[seat - 1] = 'R';

		auto answer{ ' ' };

		do
		{
			std::cout << "Would you like to book another [y/n]? ";
			std::cin >> answer;
		} while (answer != 'n' && answer != 'y' && answer != 'N' && answer != 'Y');

		if (answer == 'n' || answer == 'N')
		{
			isAppRunning = false;
		}
	}

	std::cout << "Thank you for using our booking system." << std::endl;
	system("pause");
}