#include <iostream>
#include "Date.h"

int main()
{
	Date averageDay;
	std::cout << averageDay.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	Date birthday(30, Date::Month::March, 1980);
	std::cout << birthday.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	Date holiday;
	holiday.SetDate(24, Date::Month::December, 2020);
	std::cout << holiday.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	Date newYearsEve(31, Date::Month::December, 2019);
	std::cout << newYearsEve.ToString() << std::endl;

	Date newYearsDay = ++newYearsEve;
	std::cout << newYearsDay.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	Date today(13, Date::Month::July, 2020);
	std::cout << today.ToString() << std::endl;

	Date saveTheDay = today++;
	std::cout << saveTheDay.ToString() << std::endl;
	std::cout << today.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	today.SetDate(13, Date::Month::July, 2020);
	std::cout << today.ToString() << std::endl;

	Date yesterday = --today;
	std::cout << yesterday.ToString() << std::endl;

	today = yesterday--;
	std::cout << today.ToString() << std::endl;
	std::cout << yesterday.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	--newYearsDay;
	newYearsEve = newYearsDay;
	std::cout << newYearsEve.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	Date someDay;
	someDay.SetDate(1, Date::Month::March, 1996);

	someDay--;

	std::cout << someDay.ToString() << std::endl;

	if (someDay.IsLeapYear())
	{
		std::cout << "This is a leap year." << std::endl;
	}

	else
	{
		std::cout << "This is not a leap year." << std::endl;
	}

	std::cout << "=============================================" << std::endl;

	Date holidayStart(15, Date::Month::December, 2020);
	std::cout << holidayStart.ToString() << std::endl;

	Date holidayEnd = holidayStart + 21;
	std::cout << holidayStart.ToString() << std::endl;
	std::cout << holidayEnd.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	Date christmasDay;
	christmasDay.SetDate(25, Date::Month::December, 2020);
	christmasDay -= 365;

	std::cout << christmasDay.ToString() << std::endl;

	std::cout << "=============================================" << std::endl;

	Date yourBirthday(30, Date::Month::March, 1996);
	std::cout << birthday.ToString() << std::endl;
	std::cout << yourBirthday.ToString() << std::endl;

	if (birthday == yourBirthday)
	{
		std::cout << "We share the same birthday! Yay!" << std::endl;
	}

	else
	{
		std::cout << "We don't share the same birthday. Boo!" << std::endl;
	}

	std::cout << "=============================================" << std::endl;

	Date myWeddingDay(1, Date::Month::April, 2011);
	Date yourWeddingDay(14, Date::Month::February, 1982);

	std::cout << myWeddingDay.ToString() << std::endl;
	std::cout << yourWeddingDay.ToString() << std::endl;

	if (myWeddingDay < yourWeddingDay)
	{
		std::cout << "I got married before you." << std::endl;
	}

	else if (myWeddingDay > yourWeddingDay)
	{
		std::cout << "You got married before me." << std::endl;
	}

	else
	{
		std::cout << "We married our partners on the same day." << std::endl;
	}

	std::cout << "=============================================" << std::endl;

	Date myGraduationDay(4, Date::Month::July, 1982);
	Date yourGraduationDay(31, Date::Month::October, 2008);

	std::cout << myGraduationDay.ToString() << std::endl;
	std::cout << yourGraduationDay.ToString() << std::endl;

	if (myGraduationDay >= yourGraduationDay)
	{
		std::cout << "I graduated on or after the day you did." << std::endl;
	}

	else
	{
		std::cout << "I graduated before you." << std::endl;
	}

	std::cout << "=============================================" << std::endl;

	system("pause");
	return 0;
}