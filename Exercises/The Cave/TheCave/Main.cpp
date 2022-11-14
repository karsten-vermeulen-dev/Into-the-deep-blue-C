#include <iostream>
#include <string>

const int maxRows{ 3 };
const int maxColumns{ 2 };

enum class Direction
{
	Left = 1,
	Right,
	Up,
	Down,
	Exit
};

struct Position
{
	int x = 0;
	int y = 0;
};

int main()
{
	int row{ 0 }, room{ 0 };
	bool isGameRunning{ true };

	Position position;

	while (isGameRunning)
	{
		std::string cave[maxRows][maxColumns] = { "NW", "NE",
												  "WE", "EA",
												  "SW", "SE" };

		//We flip the indices because rows = y axis and columns = x axis
		cave[position.y][position.x] = "ME";

		system("cls");
		std::cout << "#=========#" << std::endl;
		std::cout << "| " << cave[0][0] << " | " << cave[0][1] << " |" << std::endl;
		std::cout << "#=========#" << std::endl;
		std::cout << "| " << cave[1][0] << " | " << cave[1][1] << " |" << std::endl;
		std::cout << "#=========#" << std::endl;
		std::cout << "| " << cave[2][0] << " | " << cave[2][1] << " |" << std::endl;
		std::cout << "#=========#" << std::endl << std::endl;

		int direction;
		std::cout << "Where do you want to go?" << std::endl;
		std::cout << "1. Left" << std::endl;
		std::cout << "2. Right" << std::endl;
		std::cout << "3. Up" << std::endl;
		std::cout << "4. Down" << std::endl;
		std::cout << "5. Get me out of here!" << std::endl;
		std::cin >> direction;

		switch (direction)
		{

		case (int)Direction::Left:
		{
			if (position.x == 0)
			{
				std::cout << "You can't go there!" << std::endl;
				system("pause");
			}

			else
			{
				position.x--;
			}

			break;
		}

		case (int)Direction::Right:
		{
			if (position.x == 1)
			{
				std::cout << "You can't go there!" << std::endl;
				system("pause");
			}

			else
			{
				position.x++;
			}

			break;
		}

		case (int)Direction::Up:
		{
			if (position.y == 0)
			{
				std::cout << "You can't go there!" << std::endl;
				system("pause");
			}

			else
			{
				position.y--;
			}

			break;
		}

		case (int)Direction::Down:
		{
			if (position.y == 2)
			{
				std::cout << "You can't go there!" << std::endl;
				system("pause");
			}

			else
			{
				position.y++;
			}

			break;
		}

		case (int)Direction::Exit:
		{
			isGameRunning = false;
			break;
		}

		default:
		{
			std::cout << "Invalid choice!" << std::endl;
			system("pause");
		}
		}
	}

	system("pause");
	return 0;
}