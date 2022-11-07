#pragma once
#include <string>

class Date
{

public:

	enum class Month
	{
		January = 1,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December
	};

	Date(unsigned short day = 1,
		Month month = Month::January,
		unsigned short year = 1900);

	bool IsLeapYear();
	std::string ToString();
	void SetDate(unsigned short day, Month month, unsigned short year);

	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);

	Date operator+(unsigned short days);
	Date& operator+=(unsigned short days);

	Date operator-(unsigned short days);
	Date& operator-=(unsigned short days);

	bool operator==(const Date& rhs);
	bool operator!=(const Date& rhs);

	bool operator<(const Date& rhs);
	bool operator>(const Date& rhs);

	bool operator<=(const Date& rhs);
	bool operator>=(const Date& rhs);

private:

	Month month;
	unsigned short day;
	unsigned short year;

};