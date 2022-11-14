#include <iostream>
#include <string>

const int maxRows{ 3 };
const int maxRooms{ 2 };

enum class Location
{
	NorthWest,
	NorthEast,
	West,
	East,
	SouthWest,
	SouthEast
};

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

struct Player
{
	Position position = { 1, 2 };
	std::string name = "Player";
};

Location cave[maxRows][maxRooms];

//======================================================================================================
Direction GetDirection()
{
	int direction;

	std::cout << "Where do you want to go?" << std::endl;
	std::cout << "1. Left" << std::endl;
	std::cout << "2. Right" << std::endl;
	std::cout << "3. Up" << std::endl;
	std::cout << "4. Down" << std::endl;
	std::cout << "5. Get me out of here!" << std::endl;
	std::cin >> direction;

	return (Direction)direction;
}
//======================================================================================================
void DisplayCave(Player* player)
{
	std::cout << "#=============================#" << std::endl;

	for (int i = 0; i < maxRows; i++)
	{
		std::cout << "|              |              |" << std::endl;

		for (int j = 0; j < maxRooms; j++)
		{
			if (player->position.y == i && player->position.x == j)
				std::cout << "|    " << player->name << "    ";

			else
			{

				switch (cave[i][j])
				{
				case Location::NorthWest: std::cout << "|      NW      "; break;
				case Location::NorthEast: std::cout << "|      NE      "; break;
				case Location::West: std::cout << "|      WE      "; break;
				case Location::East: std::cout << "|      EA      "; break;
				case Location::SouthWest: std::cout << "|      SW      "; break;
				case Location::SouthEast: std::cout << "|      SE      "; break;
				}
			}
		}

		std::cout << "|" << std::endl;
		std::cout << "|              |              |" << std::endl;
		std::cout << "#=============================#" << std::endl;
	}
}
//======================================================================================================
void DisplayRoomDescr(Player& player)
{
	Location playerLocation = cave[player.position.y][player.position.x];

	switch (playerLocation)
	{
	case Location::NorthWest: std::cout << "You are in the north-west part of the cave." << std::endl; break;
	case Location::NorthEast: std::cout << "You are in the north-east part of the cave." << std::endl; break;
	case Location::West: std::cout << "You are in the western part of the cave." << std::endl; break;
	case Location::East: std::cout << "You are in the eastern part of the cave." << std::endl; break;
	case Location::SouthWest: std::cout << "You are in the south-west part of the cave." << std::endl; break;
	case Location::SouthEast: std::cout << "You are in the south-east part of the cave." << std::endl; break;
	}
}
//======================================================================================================
void MovePlayer(Direction direction, Player* player)
{
	if (direction == Direction::Up)
	{
		if (player->position.y == 0)
		{
			std::cout << "You can't go there!" << std::endl;
			system("pause");
		}

		else
		{
			player->position.y--;
		}
	}

	else if (direction == Direction::Down)
	{
		if (player->position.y == maxRows - 1)
		{
			std::cout << "You can't go there!" << std::endl;
			system("pause");
		}

		else
		{
			player->position.y++;
		}
	}

	else if (direction == Direction::Left)
	{
		if (player->position.x == 0)
		{
			std::cout << "You can't go there!" << std::endl;
			system("pause");
		}

		else
		{
			player->position.x--;
		}
	}

	else if (direction == Direction::Right)
	{
		if (player->position.x == maxRooms - 1)
		{
			std::cout << "You can't go there!" << std::endl;
			system("pause");
		}

		else
		{
			player->position.x++;
		}
	}
}
//======================================================================================================
int main()
{
	bool isGameRunning{ true };
	Player* player = new Player;

	//fill the cave with rooms
	cave[0][0] = Location::NorthWest;
	cave[0][1] = Location::NorthEast;
	cave[1][0] = Location::West;
	cave[1][1] = Location::East;
	cave[2][0] = Location::SouthWest;
	cave[2][1] = Location::SouthEast;

	while (isGameRunning)
	{
		system("cls");

		DisplayCave(player);
		DisplayRoomDescr(*player);

		auto direction = GetDirection();

		//if user pressed x the game ends otherwise move the player accordingly
		if (direction == Direction::Exit)
		{
			isGameRunning = false;
		}

		else
		{
			MovePlayer(direction, player);
		}
	}

	delete player;
	return 0;
}