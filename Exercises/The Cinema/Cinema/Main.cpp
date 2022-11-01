#include <iostream>
#include <string>

const int maxRows{ 5 };
const int maxColumns{ 5 };
char seats[maxRows][maxColumns];

void ClearSeats()
{
	for (int i = 0; i < maxRows; i++)
	{
		for (int j = 0; j < maxColumns; j++)
		{
			seats[i][j] = 'A';
		}
	}
}

void DisplaySeats()
{
	system("cls");
	std::cout << "#-----------------------------------#" << std::endl;
	std::cout << "|===============Screen==============|" << std::endl;
	std::cout << "#-----------------------------------#" << std::endl;

	for (int i = 0; i < maxRows; i++)
	{
		for (int j = 0; j < maxColumns; j++)
		{
			std::cout << "| " << seats[i][j] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << "|" << std::endl;
	std::cout << "#-----------------------------------#" << std::endl;
}

void InputSeat(int& row, int& column)
{
	do
	{
		std::cout << "Enter your desired row: ";
		std::cin >> row;
	} while (row < 0 || row > maxRows);

	do
	{
		std::cout << "Enter your desired column: ";
		std::cin >> column;
	} while (column < 0 || column > maxColumns);
}

void main()
{
	bool isAppRunning{ true };
	int row{ 0 }, column{ 0 };

	ClearSeats();

	while (isAppRunning)
	{
		DisplaySeats();

		InputSeat(row, column);

		seats[row - 1][column - 1] = 'R';

		DisplaySeats();

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