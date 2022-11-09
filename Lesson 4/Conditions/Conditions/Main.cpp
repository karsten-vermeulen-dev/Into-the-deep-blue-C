#include <iostream>
#include <string>

void main()
{
	int firstNumber = 0;
	int secondNumber = 0;

	std::cout << "Enter your first number: " << std::endl;
	std::cin >> firstNumber;
	std::cout << "Enter your second number: " << std::endl;
	std::cin >> secondNumber;

	if (firstNumber == 10'000)
	{
		std::cout << "Well done! You guessed a lucky number!!!" << std::endl;
		std::cout << "You have won...absolutely nothing..." << std::endl;
	}

	//====================================================================

	if (firstNumber == secondNumber)
	{
		std::cout << "The numbers are the same!" << std::endl;
	}

	else
	{
		std::cout << "The numbers are unequal" << std::endl;
	}

	//====================================================================

	if (firstNumber > secondNumber)
	{
		std::cout << "Your first number is larger than your second number\n\n";
	}

	else if (firstNumber < secondNumber)
	{
		std::cout << "Your first number is smaller than your second number\n\n";
	}

	else
	{
		std::cout << "Enter different numbers next time\n\n";
	}

	//====================================================================

	bool isLarger = (firstNumber >= 10'000);

	if (isLarger)
	{
		std::cout << "WOW! What a large number you entered!\n\n";
	}

	//====================================================================

	int age = 0;
	std::cout << "Enter your age: " << std::endl;
	std::cin >> age;

	//Using the '&&' can check within an age range
	if (age >= 21 && age <= 65)
	{
		if (age > 60)
		{
			std::cout << "Have you considered a good place to retire?" << std::endl;
		}

		else if (age >= 45)
		{
			std::cout << "Time to visit the GP more frequently!" << std::endl;
		}

		else
		{
			std::cout << "Retirement and frequent GP visits are coming!" << std::endl;
		}
	}

	//Using '||' can check outside an age range
	else if (age < 21 || age > 65)
	{
		if (age < 21)
		{
			std::cout << "You're young! Have fun!" << std::endl;
		}

		else
		{
			std::cout << "You're old! Think of fun." << std::endl;
		}
	}

	//====================================================================

	//Using a conditional operator to perform an age check
	std::string decision = (age >= 18) ? "Allowed to drink" : "Too young to drink";
	std::cout << "The decision is as follows: " << decision << std::endl << std::endl;

	//====================================================================

	//Basic switch-case statements using magic numbers
	int randomNumber = 0;

	std::cout << "Enter a random number: " << std::endl;
	std::cin >> randomNumber;

	switch (randomNumber)
	{
	case 5:
	{
		std::cout << "You entered a FIVE! High five!\n\n";
		break;
	}

	case 10:
	{
		std::cout << "You entered a TEN! High ten!\n\n";
		break;
	}

	case 100: case 200:
	{
		std::cout << "You entered a special number! Well done!\n\n";
		break;
	}

	case 500:
	{
		std::cout << "You entered a BIG ONE! WOW!\n";
	}

	case 1000:
	{
		std::cout << "...and here's an extra special prize for you!\n\n";
		break;
	}

	default:
	{
		std::cout << "You entered NOTHING SPECIAL...Sorry!\n\n";
	}
	}

	//====================================================================

	//Switch-case statements using enumerators to run particular cases
	//We need an int variable to enter the day of the week via the cin object
	int numericDay;
	enum class DayOfWeek
	{
		Monday = 1,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};

	std::cout << "[1] Monday" << std::endl;
	std::cout << "[2] Tuesday" << std::endl;
	std::cout << "[3] Wednesday" << std::endl;
	std::cout << "[4] Thursday" << std::endl;
	std::cout << "[5] Friday" << std::endl;
	std::cout << "[6] Saturday" << std::endl;
	std::cout << "[7] Sunday" << std::endl;
	std::cout << "Pick a day of the week: " << std::endl;
	std::cin >> numericDay;

	DayOfWeek myDay = static_cast<DayOfWeek>(numericDay);

	switch (myDay)
	{
		//Both Monday and Tuesday will execute the same case
	case DayOfWeek::Monday: case DayOfWeek::Tuesday:
	{
		std::cout << "Time to learn C++\n\n";
		break;
	}

	case DayOfWeek::Wednesday:
	{
		std::cout << "Time to learn C#\n\n";
		break;
	}

	//Both Thursday and Friday will execute the same case
	case DayOfWeek::Thursday: case DayOfWeek::Friday:
	{
		std::cout << "Time to learn Java\n\n";
		break;
	}

	//This case will execute and 'fall-through' to Sunday
	case DayOfWeek::Saturday:
	{
		std::cout << "Time to learn HTML\n\n";
	}

	case DayOfWeek::Sunday:
	{
		std::cout << "...and some CSS\n\n";
		break;
	}

	default:
	{
		std::cout << "Invalid choice!\n\n";
	}
	}

	//====================================================================

	system("pause");
}