#include <algorithm>
#include "Date.h"

//==============================================================================
//the unsigned data type ensures only positive numbers are used
//the month value can only ever be of the set types (enum class)
//==============================================================================
Date::Date(unsigned short day, Month month, unsigned short year)
{
	SetDate(day, month, year);
}
//==============================================================================
//function that checks if a particular year within date is a leap year
//we use this function externally and internally to calculate correct days
//the formula used, and its justification, can be found on this website:
//https://www.mathsisfun.com/leap-years.html
//==============================================================================
bool Date::IsLeapYear()
{
	if (m_year % 4 == 0)
	{

		if (m_year % 100 != 0)
		{
			return true;
		}

		else if (m_year % 400 == 0)
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
//function that creates a 'std::string' formatted date
//it will return the string type for use by the client app
//==============================================================================
std::string Date::ToString()
{
	//for extra formatting and clarity we will
	//add a postfix based on the numberic day
	std::string postfix;

	if (m_day == 1 || m_day == 21 || m_day == 31)
	{
		postfix = "st";
	}

	else if (m_day == 2 || m_day == 22)
	{
		postfix = "nd";
	}

	else if (m_day == 3 || m_day == 23)
	{
		postfix = "rd";
	}

	else
	{
		postfix = "th";
	}

	//the initial date string will comprise of 'The <day> of <year>'
	std::string dateStr = "The " + std::to_string(m_day) +
		postfix + " of " + std::to_string(m_year);

	//we will assign the correct month and insert 
	//it into the final text after the switch
	std::string monthStr;

	//now we insert the month string into the
	//date string between 'of' and the year
	switch (m_month)
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
//setter function that assigns day, month and year to object
//this setter is very robust that filters out invalid dates
//this demonstrates that setters are essential in cases like this
//==============================================================================
void Date::SetDate(unsigned short day, Month month, unsigned short year)
{
	//first we make sure the days remain between 1 and 31
	//31 days is the maximum amount a calendar month has
	//we also make sure the minimum year can only be 1
	day = std::clamp(static_cast<int>(day), 1, 31);
	year = std::max(1, static_cast<int>(year));

	//if any of the four 30-day months was chosen we 
	//cannot accept '31' so we simply cap the day to 30 
	if (day == 31 && (month == Month::April || month == Month::June ||
		month == Month::September || month == Month::November))
	{
		m_day = 30;
		m_month = month;
		m_year = year;
	}

	//if the day '29', '30' or '31' was chosen
	//for February then we cap the day to 28 
	//or 29 if the current year is a leap year
	//make sure to set day AFTER the year!
	else if (day > 28 && month == Month::February)
	{
		m_month = Month::February;
		m_year = year;
		m_day = IsLeapYear() ? 29 : 28;
	}

	//otherwise we have a valid date so set the day, month and year
	else
	{
		m_day = day;
		m_month = month;
		m_year = year;
	}
}
//==============================================================================
//overloaded operator that increments the day (PREFIX)
//==============================================================================
Date& Date::operator++()
{
	//increase the day by 1
	++m_day;

	//if you have gone over the maximum day count for 
	//all 31-day months then increment the month as well 
	if (m_day == 32)
	{

		//if you are at the end of the year, reset 
		//everything and increase the year by 1
		if (m_month == Month::December)
		{
			m_day = 1;
			m_month = Month::January;
			++m_year;
		}

		else if (m_month == Month::January || m_month == Month::March ||
			m_month == Month::May || m_month == Month::July ||
			m_month == Month::August || m_month == Month::October)
		{
			m_day = 1;
			m_month = static_cast<Month>(static_cast<int>(m_month) + 1);
		}

	}

	//if you have gone over the maximum day count for 
	//all 30-day months then increment the month as well 
	if (m_day == 31)
	{

		if (m_month == Month::April || m_month == Month::June ||
			m_month == Month::September || m_month == Month::November)
		{
			m_day = 1;
			m_month = static_cast<Month>(static_cast<int>(m_month) + 1);
		}

	}

	//if you have gone over the maximum day count for
	//February then set the month to March and check
	//if it's a leap year, which includes an extra day
	if (m_day > 28 && m_month == Month::February)
	{

		if (m_day == 29 && IsLeapYear())
		{
			m_day = 29;
		}

		else
		{
			m_day = 1;
			m_month = Month::March;
		}

	}

	return *this;
}
//==============================================================================
//overloaded operator that increments the day (POSTFIX)
//==============================================================================
Date Date::operator++(int)
{
	//first make a copy of the current 
	//date which is what we will return
	Date copy(*this);

	//use prefix version of operator overload
	//so that we don't repeat code unnecessarily
	++(*this);

	return copy;
}
//==============================================================================
//overloaded operator that decrements the day (PREFIX)
//==============================================================================
Date& Date::operator--()
{
	//if the day is at the start of the month 
	//then move the month back by one as well
	if (m_day == 1)
	{

		//if the month is January, we need to go
		//back to December of the previous year
		if (m_month == Month::January)
		{
			m_month = Month::December;
			--m_year;
		}

		else
		{
			m_month = static_cast<Month>(static_cast<int>(m_month) - 1);
		}

		//the new day will now be 31 if it's any of these months
		if (m_month == Month::January || m_month == Month::March ||
			m_month == Month::May || m_month == Month::July ||
			m_month == Month::August || m_month == Month::October ||
			m_month == Month::December)
		{
			m_day = 31;
		}

		//otherwise it will be 30
		else if (m_month == Month::April || m_month == Month::June ||
			m_month == Month::September || m_month == Month::November)
		{
			m_day = 30;
		}

		//if it's February it will be 28 if
		//not a leap year else 29 if it is
		else
		{
			m_day = IsLeapYear() ? 29 : 28;
		}

	}

	//otherwise just decrease the day by 1
	else
	{
		--m_day;
	}

	return *this;
}
//==============================================================================
//overloaded operator that decrements the day (POSTFIX)
//==============================================================================
Date Date::operator--(int)
{
	//first make a copy of the current 
	//date which is what we will return
	Date copy(*this);

	//use prefix version of operator overload
	//so that we don't repeat code unnecessarily
	--(*this);

	return copy;
}
//==============================================================================
//overloaded operator that adds on a certain amount of days
//a resulting copy is returned, thereby not changing the original 
//==============================================================================
Date Date::operator+(unsigned short days)
{
	//first make a copy of the current 
	//date which is what we will return
	Date temp(*this);

	//store all days for each month of the year
	//we use this array to add on the days in 
	//an automated way in our calculations below
	unsigned short daysInMonth[] = { 31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31 };

	//only alter the second month (February) if 
	//the current year we are in is a leap year
	daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;

	//add the days to the current date and assign the year
	//we use a temporary variable to store the month because 
	//this will be used to index the array above and if we 
	//use the 'Month' enum instead we will have too many casts
	//the 'Month' enum starts at 1 but when we index the array
	//we need to start at 0, so therefore we subtract 1
	temp.m_day = m_day + days;
	temp.m_year = m_year;
	unsigned short currentMonth = static_cast<int>(m_month) - 1;

	//once we have added the days to our current date, we may get 
	//a new day value that will likely overrun, so we need to 
	//determine what that day translates to in terms of month/year
	//we keep this loop running and we keep subtracting days until
	//the day falls within the day range for that particular month 
	while (temp.m_day > daysInMonth[currentMonth])
	{
		temp.m_day -= daysInMonth[currentMonth];
		currentMonth++;

		//if we get to the December month we will likely need to 
		//move to the next year so increase the year and reset the 
		//month. Also check if the next year is a leap year or not
		if (currentMonth == 12)
		{
			temp.m_year++;
			currentMonth = 0;
			daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;
		}
	}

	//set the month back to its original version	
	temp.m_month = static_cast<Month>(currentMonth + 1);

	return temp;
}
//==============================================================================
//overloaded operator that adds on a certain amount of days
//we make use of the 'operator+' overloaded function and
//return a reference after changes to the original are made 
//==============================================================================
Date& Date::operator+=(unsigned short days)
{
	*this = *this + days;
	return *this;
}
//==============================================================================
//overloaded operator that subtracts a certain amount of days
//a resulting copy is returned, thereby not changing the original 
//==============================================================================
Date Date::operator-(unsigned short days)
{
	//first make a copy of the current 
	//date which is what we will return
	Date temp(*this);

	//store all days for each month of the year
	//we use this array to subtract the days in 
	//an automated way in our calculations below
	unsigned short daysInMonth[] = { 31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31 };

	//only alter the second month (February) if 
	//the current year we are in is a leap year
	daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;

	//subtract the days from the current date and assign the year
	//a local integer is used so that we can use negative numbers
	//we use a temporary variable to store the month because 
	//this will be used to index the array above and if we 
	//use the 'Month' enum instead we will have too many casts
	//the 'Month' enum starts at 1 but when we index the array
	//we need to start at 0, so therefore we subtract 1 
	short day = m_day - days;
	temp.m_year = m_year;
	unsigned short currentMonth = static_cast<int>(m_month) - 1;

	//once we have subtracted the days from our current date, we may 
	//get a new day value that will likely be negative, so we need
	//to determine what that day translates to in terms of month/year
	//we keep this loop running and we keep subtracting days until
	//the day falls within the day range for that particular month 
	while (day < 0)
	{
		//if we are on the January month we will likely need to move 
		//to the previous year so decrease the year and reset the 
		//month. Also check if the previous year is a leap year or not
		if (currentMonth == 0)
		{
			temp.m_year--;
			currentMonth = 11;
			daysInMonth[1] = (temp.IsLeapYear()) ? 29 : 28;
		}

		//otherwise keep decrementing the year
		else
		{
			currentMonth--;
		}

		day = daysInMonth[currentMonth] - std::abs(day);
	}

	//set the month back to its original version	
	temp.m_day = day;
	temp.m_month = static_cast<Month>(currentMonth + 1);

	return temp;
}
//==============================================================================
//overloaded operator that subtracts a certain amount of days
//we make use of the 'operator-' overloaded function and
//return a reference after changes to the original are made 
//==============================================================================
Date& Date::operator-=(unsigned short days)
{
	*this = *this - days;
	return *this;
}
//==============================================================================
//overloaded operator that checks if two dates are identical 
//we only check if the day and month are the same because
//in most cases the year is not all that important to compare
//==============================================================================
bool Date::operator==(const Date& rhs)
{
	return (m_day == rhs.m_day && m_month == rhs.m_month);
}
//==============================================================================
//overloaded operator that checks if two dates are NOT identical 
//we make use of the 'operator==' and simply negate the result
//==============================================================================
bool Date::operator!=(const Date& rhs)
{
	return !(*this == rhs);
}
//==============================================================================
//overloaded operator that checks if one date is less than another 
//we first check the year, then the month then finally the day
//for example, if the year and month are equal then check the day
//note that if the day is also the same we will still return false
//==============================================================================
bool Date::operator<(const Date& rhs)
{
	if (m_year < rhs.m_year)
	{
		return true;
	}

	else if (m_year == rhs.m_year)
	{

		if (m_month < rhs.m_month)
		{
			return true;
		}

		else if (m_month == rhs.m_month)
		{

			if (m_day < rhs.m_day)
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
//overloaded operator that checks if one date is larger than another 
//we make use of the 'operator<' and simply negate the result
//but we first check if the dates are equal because calling 'operator<'
//could yield a 'false' return value if the dates are the same
//==============================================================================
bool Date::operator>(const Date& rhs)
{
	if (m_day == rhs.m_day &&
		m_month == rhs.m_month &&
		m_year == rhs.m_year)
	{
		return false;
	}

	return !(*this < rhs);
}
//==============================================================================
//overloaded operator that checks if one date is less than OR equal to another 
//we make use of the 'operator<' and also check if the dates are the same
//==============================================================================
bool Date::operator<=(const Date& rhs)
{
	return (*this < rhs || (m_day == rhs.m_day &&
		m_month == rhs.m_month &&
		m_year == rhs.m_year));
}
//==============================================================================
//overloaded operator that checks if one date is larger than OR equal to another 
//we make use of the 'operator>' and also check if the dates are the same
//==============================================================================
bool Date::operator>=(const Date& rhs)
{
	return (*this > rhs || (m_day == rhs.m_day &&
		m_month == rhs.m_month &&
		m_year == rhs.m_year));
}