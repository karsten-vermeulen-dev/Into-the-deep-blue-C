#include <iostream>
#include <string>
#include <array>

enum class EnemyType
{
	Ghost,
	Dragon,
	Goblin,
	Troll
};

struct Enemy
{
	std::string name;
	EnemyType enemyType;
	float health{ 100.0f };
};

const int maxEnemies = 3;

void main()
{
	//Instantiate an array of enemy objects using the Enemy data type
	
	//Use this C-style versio if you like
	//Enemy enemies[maxEnemies];

	//Modern version for creating an array
	std::array<Enemy, maxEnemies> enemies;
	
	//Create enemy objects and assign properties
	Enemy enemy1;
	enemy1.health = 98.4f;
	enemy1.name = "Firestarter";
	enemy1.enemyType = EnemyType::Dragon;

	Enemy enemy2;
	enemy2.health = 50.345f;
	enemy2.name = "Terrible Troll";
	enemy2.enemyType = EnemyType::Troll;

	Enemy enemy3;
	enemy3.health = 99.999f;
	enemy3.name = "Casper";
	enemy3.enemyType = EnemyType::Ghost;

	//Add enemies to the array
	enemies[0] = enemy1;
	enemies[1] = enemy2;
	enemies[2] = enemy3;

	//Loop through the array of enemies and use a pointer variable to access the data
	for (int i = 0; i < maxEnemies; i++)
	{
		Enemy* enemyPtr = &enemies[i];

		std::cout << "This enemy is a ";

		switch (enemyPtr->enemyType)
		{
		case EnemyType::Dragon:
		{
			std::cout << "dragon" << std::endl;
			break;
		}

		case EnemyType::Ghost:
		{
			std::cout << "ghost" << std::endl;
			break;
		}

		case EnemyType::Goblin:
		{
			std::cout << "goblin" << std::endl;
			break;
		}

		case EnemyType::Troll:
		{
			std::cout << "troll" << std::endl;
			break;
		}
		}

		std::cout << "Enemy name is " << enemyPtr->name << std::endl;
		std::cout << "Enemy health is " << enemyPtr->health << "%" << std::endl;
		std::cout << "======================================================" << std::endl;
	}

	system("pause");
}