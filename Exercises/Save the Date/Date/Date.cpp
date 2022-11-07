#include <algorithm>
#include "Date.h"

//==============================================================================
//The unsigned data type ensures only positive numbers are used
//The month value can only ever be of the set types (enum class)
//==============================================================================
Date::Date(unsigned short day, Month month, unsigned short year)
{
	SetDate(day, month, year);
}
//==============================================================================
//Function that checks if a particular year within date is a leap year
//We use this function externally and internally to calculate correct days
//the formula used, and its justification, can be found on this website:
//https://www.mathsisfun.com/leap-years.html
//==============================================================================
bool Date::IsLeapYear()
{
	if (year % 4 == 0)
	{

		if (year % 100 != 0)
		{
			return true;
		}

		else if (year % 400 == 0)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	return false;
}
//==============================================================================
//Function that creates a 'std::string' formatted date
//it will return the string type for use by the client app
//==============================================================================
std::string Date::ToString()
{
	//for extra formatting and clarity we will
	//add a postfix based on the numberic day
	std::string postfix;

	if (day == 1 || day == 21 || day == 31)
	{
		postfix = "st";
	}

	else if (day == 2 || day == 22)
	{
		postfix = "nd";
	}

	else if (day == 3 || day == 23)
	{
		postfix = "rd";
	}

	else
	{
		postfix = "th";
	}

	//The initial date string will comprise of 'The <day> of <year>'
	std::string dateStr = "The " + std::to_string(day) +
		postfix + " of " + std::to_string(year);

	//We will assign the correct month and insert 
	//it into the final text after the switch
	std::string monthStr;

	//Now we insert the month string into the
	//date string between 'of' and the year
	switch (month)
	{
	case Month::January: monthStr = "January "; break;
	case Month::February: monthStr = "February "; break;
	case Month::March: monthStr = "March "; break;
	case Month::April: monthStr = "April "; break;
	case Month::May: monthStr = "May "; break;
	case Month::June: monthStr = "June "; break;
	case Month::July: monthStr = "July "; break;
	case Month::August: monthStr = "August "; break;
	case Month::September: monthStr = "September "; break;
	case Month::October: monthStr = "October "; break;
	case Month::November: monthStr = "November "; break;
	case Month::December: monthStr = "December "; break;
	}

	return dateStr.insert(dateStr.find_first_of("of") + 3, monthStr);
}
//==============================================================================
//Setter function that assigns day, month and year to object
//This setter is very robust that filters out invalid dates
//This demonstrates that setters are essential in cases like this
//==============================================================================
void Date::SetDate(unsigned short day, Month month, unsigned short year)
{
	//First we make sure the days remain between 1 and 31
	//31 days is the maximum amount a calendar month has
	//We also make sure the minimum year can only be 1
	day = std::clamp(static_cast<int>(day), 1, 31);
	year = std::max(1, static_cast<int>(year));

	//If any of the four 30-day months was chosen we 
	//cannot accept '31' so we simply cap the day to 30 
	if (day == 31 && (month == Month::April || month == Month::June ||
		month == Month::September || month == Month::November))
	{
		this->day = 30;
		this->month = month;
		this->year = year;
	}

	//If the day '29', '30' or '31' was chosen
	//for February then we cap the day to 28 
	//or 29 if the current year is a leap year
	//Make sure to set day AFTER the year!
	else if (day > 28 && month == Month::February)
	{
		this->month = Month::February;
		this->year = year;
		this->day = IsLeapYear() ? 29 : 28;
	}

	//Otherwise we have a valid date so set the day, month and year
	else
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
}
//==============================================================================
//Overloaded operator that increments the day (PREFIX)
//==============================================================================
Date& Date::operator++()
{
	//Increase the day by 1
	++day;

	//If you have gone over the maximum day count for 
	//all 31-day months then increment the month as well 
	if (day == 32)
	{
		//If you are at the end of the year, reset 
		//everything and increase the year by 1
		if (month == Month::December)
		{
			day = 1;
			month = Month::January;
			++year;
		}

		else if (month == Month::January || month == Month::March ||
			month == Month::May || month == Month::July ||
			month == Month::August || month == Month::October)
		{
			day = 1;
			month = static_cast<Month>(static_cast<int>(month) + 1);
		}
	}

	//If you have gone over the maximum day count for 
	//all 30-day months then increment the month as well 
	if (day == 31)
	{
		if (month == Month::April || month == Month::June ||
			month == Month::September || month == Month::November)
		{
			day = 1;
			month = static_cast<Month>(static_cast<int>(month) + 1);
		}
	}

	//If you have gone over the maximum day count for
	//February then set the month to March and check
	//if it's a leap year, which includes an extra day
	if (day > 28 && month == Month::February)
	{
		if (day == 29 && IsLeapYear())
		{
			day = 29;
		}

		else
		{
			day = 1;
			month = Month::March;
		}
	}

	return *this;
}
//==============================================================================
//Overloaded operator that increments the day (POSTFIX)
//==============================================================================
Date Date::operator++(int)
{
	//First make a copy of the current 
	//date which is what we will return
	Date copy(*this);

	//Use prefix version of operator overload
	//so that we don't repeat code unnecessarily
	++(*this);

	return copy;
}
//==============================================================================
//Overloaded operator that decrements the day (PREFIX)
//==============================================================================
Date& Date::operator--()
{
	//If the day is at the start of the month 
	//then move the month back by one as well
	if (day == 1)
	{
		//If the month is January, we need to go
		//back to December of the previous year
		if (month == Month::January)
		{
			month = Month::December;
			--year;
		}

		else
		{
			month = static_cast<Month>(static_cast<int>(month) - 1);
		}

		//The new day will now be 31 if it's any of these months
		if (month == Month::January || month == Month::March ||
			month == Month::May || month == Month::July ||
			month == Month::August || month == Month::October ||
			month == Month::December)
		{
			day = 31;
		}

		//Otherwise it will be 30
		else if (month == Month::April || month == Month::June ||
			month == Month::September || month == Month::November)
		{
			day = 30;
		}

		//If it's February it will be 28 if
		//not a leap year else 29 if it is
		else
		{
			day = IsLeapYear() ? 29 : 28;
		}
	}

	//Otherwise just decrease the day by 1
	else
	{
		--day;
	}

	return *this;
}
//==============================================================================
//Overloaded operator that decrements the day (POSTFIX)
//==============================================================================
Date Date::operator--(int)
{
	//First make a copy of the current 
	//date which is what we will return
	Date copy(*this);

	//Use prefix version of operator overload
	//so that we don't repeat code unnecessarily
	--(*this);

	return copy;
}
//==============================================================================
//Overloaded operator that adds on a certain amount of days
//a resulting copy is returned, thereby not changing the original 
//==============================================================================
Date Date::operator+(unsigned short days)
{
	//First make a copy of the current 
	//date which is what we will return
	Date temp(*this);

	//Store all days for each month of the year
	//We use this array to add on the days in 
	//an automated way in our calculations below
	unsigned short daysInMonth[] = { 31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31 };

	//Only alter the second month (February) if 
	//the current year we are in is a leap year
	daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;

	//Add the days to the current date and assign the year
	//We use a temporary variable to store the month because 
	//this will be used to index the array above and if we 
	//use the 'Month' enum instead we will have too many casts
	//The 'Month' enum starts at 1 but when we index the array
	//we need to start at 0, so therefore we subtract 1
	temp.day = day + days;
	temp.year = year;
	unsigned short currentMonth = static_cast<int>(month) - 1;

	//Once we have added the days to our current date, we may get 
	//a new day value that will likely overrun, so we need to 
	//determine what that day translates to in terms of month/year
	//We keep this loop running and we keep subtracting days until
	//the day falls within the day range for that particular month 
	while (temp.day > daysInMonth[currentMonth])
	{
		temp.day -= daysInMonth[currentMonth];
		currentMonth++;

		//If we get to the December month we will likely need to 
		//move to the next year so increase the year and reset the 
		//month. Also check if the next year is a leap year or not
		if (currentMonth == 12)
		{
			temp.year++;
			currentMonth = 0;
			daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;
		}
	}

	//Set the month back to its original version	
	temp.month = static_cast<Month>(currentMonth + 1);

	return temp;
}
//==============================================================================
//Overloaded operator that adds on a certain amount of days
//We make use of the 'operator+' overloaded function and
//return a reference after changes to the original are made 
//==============================================================================
Date& Date::operator+=(unsigned short days)
{
	*this = *this + days;
	return *this;
}
//==============================================================================
//Overloaded operator that subtracts a certain amount of days
//A resulting copy is returned, thereby not changing the original 
//==============================================================================
Date Date::operator-(unsigned short days)
{
	//First make a copy of the current 
	//date which is what we will return
	Date temp(*this);

	//Store all days for each month of the year
	//We use this array to subtract the days in 
	//an automated way in our calculations below
	unsigned short daysInMonth[] = { 31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31 };

	//Only alter the second month (February) if 
	//the current year we are in is a leap year
	daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;

	//Subtract the days from the current date and assign the year
	//A local integer is used so that we can use negative numbers
	//We use a temporary variable to store the month because 
	//this will be used to index the array above and if we 
	//use the 'Month' enum instead we will have too many casts
	//The 'Month' enum starts at 1 but when we index the array
	//we need to start at 0, so therefore we subtract 1 
	short day = this->day - days;
	temp.year = this->year;
	unsigned short currentMonth = static_cast<int>(this->month) - 1;

	//Once we have subtracted the days from our current date, we may 
	//get a new day value that will likely be negative, so we need
	//to determine what that day translates to in terms of month/year
	//We keep this loop running and we keep subtracting days until
	//the day falls within the day range for that particular month 
	while (day < 0)
	{
		//If we are on the January month we will likely need to move 
		//to the previous year so decrease the year and reset the 
		//month. Also check if the previous year is a leap year or not
		if (currentMonth == 0)
		{
			temp.year--;
			currentMonth = 11;
			daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;
		}

		//Otherwise keep decrementing the year
		else
		{
			currentMonth--;
		}

		day = daysInMonth[currentMonth] - std::abs(day);
	}

	//Set the month back to its original version	
	temp.day = day;
	temp.month = static_cast<Month>(currentMonth + 1);

	return temp;
}
//==============================================================================
//Overloaded operator that subtracts a certain amount of days
//We make use of the 'operator-' overloaded function and
//return a reference after changes to the original are made 
//==============================================================================
Date& Date::operator-=(unsigned short days)
{
	*this = *this - days;
	return *this;
}
//==============================================================================
//Overloaded operator that checks if two dates are identical 
//We only check if the day and month are the same because
//in most cases the year is not all that important to compare
//==============================================================================
bool Date::operator==(const Date& rhs)
{
	return (day == rhs.day && month == rhs.month);
}
//==============================================================================
//Overloaded operator that checks if two dates are NOT identical 
//we make use of the 'operator==' and simply negate the result
//==============================================================================
bool Date::operator!=(const Date& rhs)
{
	return !(*this == rhs);
}
//==============================================================================
//Overloaded operator that checks if one date is less than another 
//We first check the year, then the month then finally the day
//For example, if the year and month are equal then check the day
//Note that if the day is also the same we will still return false
//==============================================================================
bool Date::operator<(const Date& rhs)
{
	if (year < rhs.year)
	{
		return true;
	}

	else if (year == rhs.year)
	{

		if (month < rhs.month)
		{
			return true;
		}

		else if (month == rhs.month)
		{

			if (day < rhs.day)
			{
				return true;
			}

			else
			{
				return false;
			}
		}

		else
		{
			return false;
		}
	}

	else
	{
		return false;
	}
}
//==============================================================================
//Overloaded operator that checks if one date is larger than another 
//We make use of the 'operator<' and simply negate the result
//But we first check if the dates are equal because calling 'operator<'
//could yield a 'false' return value if the dates are the same
//==============================================================================
bool Date::operator>(const Date& rhs)
{
	if (day == rhs.day &&
		month == rhs.month &&
		year == rhs.year)
	{
		return false;
	}

	return !(*this < rhs);
}
//==============================================================================
//Overloaded operator that checks if one date is less than OR equal to another 
//we make use of the 'operator<' and also check if the dates are the same
//==============================================================================
bool Date::operator<=(const Date& rhs)
{
	return (*this < rhs || (day == rhs.day &&
		month == rhs.month &&
		year == rhs.year));
}
//==============================================================================
//Overloaded operator that checks if one date is larger than OR equal to another 
//We make use of the 'operator>' and also check if the dates are the same
//==============================================================================
bool Date::operator>=(const Date& rhs)
{
	return (*this > rhs || (day == rhs.day &&
		month == rhs.month &&
		year == rhs.year));
}