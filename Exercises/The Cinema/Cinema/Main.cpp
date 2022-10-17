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

//OLD code

//declare global constants for the seating arrangement array
//const int ROW = 5;
//const int COLUMN = 5;

//create a multidimensional array to store a seating arrangement
//set all initial values to false meaning all seats are available
//short rowSeat, columnSeat;
//char seating[ROW][COLUMN] = { { 'A', 'A', 'A', 'A' },
//					   { 'A', 'A', 'A', 'A' },
//					   { 'A', 'A', 'A', 'A' },
//					   { 'A', 'A', 'A', 'A' } };
//
////user can enter their desired seat
//cout << "Enter your desired row : ";
//cin >> rowSeat;
//cout << "Enter your desired column : ";
//cin >> columnSeat;
//
////set desired seat to "reserved" and subtract 1 from each value because the array is zero-based
//seating[rowSeat - 1][columnSeat - 1] = 'R';
//
////here we use a nested for-loop and an if-else statement to display the seating arrangement on screen
////treat the loops and branching as a black box for now - we will return to this in upcoming lessons 
//for (int i = 0; i < ROW; i++)
//{
//	for (int j = 0; j < COLUMN; j++)
//	{
//		if (seating[i][j] == false) std::cout << " A ";
//		else std::cout << " R ";
//	}
//
//	std::cout << std::endl;
//
//}