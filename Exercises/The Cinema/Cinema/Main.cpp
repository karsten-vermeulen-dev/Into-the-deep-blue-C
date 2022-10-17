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

//=====================================================================================

////declare global constants for the seating arrangement array
//const int ROWS = 4;
//const int SEATS = 4;
//
////declare global constants for the game map challenge
//const int TOTAL_ROOMS = 6;
//const int TOTAL_ITEMS = 5;
//
////*****************************************************************************
////CHALLENGE #1
////*****************************************************************************
//
////create a multidimensional array to store a seating arrangement
////set all initial values of the array to 'A' for "Available" 
//short row, seat;
//char seating[ROWS][SEATS] = { { 'A', 'A', 'A', 'A' },
//							  { 'A', 'A', 'A', 'A' },
//							  { 'A', 'A', 'A', 'A' },
//							  { 'A', 'A', 'A', 'A' } };
//
////user can enter their desired seat
//cout << "Enter your desired row: ";
//cin >> row;
//cout << "Enter your desired column: ";
//cin >> seat;
//
////set desired seat to 'R' for "Reserved" and subtract 1 from each value because the array is zero-based
//seating[row - 1][seat - 1] = 'R';
//
////clear the terminal screen and display each row and seat value after the booking
//system("cls");
//cout << seating[0][0] << ' ' << seating[0][1] << ' ' << seating[0][2] << ' ' << seating[0][3] << endl;
//cout << seating[1][0] << ' ' << seating[1][1] << ' ' << seating[1][2] << ' ' << seating[1][3] << endl;
//cout << seating[2][0] << ' ' << seating[2][1] << ' ' << seating[2][2] << ' ' << seating[2][3] << endl;
//cout << seating[3][0] << ' ' << seating[3][1] << ' ' << seating[3][2] << ' ' << seating[3][3] << endl << endl;
//
////UNCOMMENT TO DEMO USING FOR-LOOP (for those comfortable with them)
//system("cls");
//for (int i = 0; i < ROWS; i++)
//{
//
//	for (int j = 0; j < SEATS; j++)
//	{
//		cout << seating[i][j] << ' ';
//	}
//
//	cout << endl;
//
//}
//
//cout << endl;