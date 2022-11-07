## Date class

### Concepts you will improve on:

- Use of classes
- Member functions and variables
- Enumerations
- Error trapping
- Operator overloading

### Develop the following:

<b>1.</b> Create a class called Date that represents any day, month and year of a particular date.

<b>2.</b> Make sure that the day and year member variables are integer numbers and month is an enumerated data type, like so:

```cpp
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
```

<b>3.</b> Add a constructor with parameters representing the day, month and year and add some default arguments. 

<b>4.</b> Add a setter function to set the day, month and year to a specific date. Make every effort to ascertain the date is formatted correctly. For example, days larger than 31 or negative years should not be accepted. 

<b>5.</b> Add a member function that checks if the year of a given date is a leap year or not. Use the following as a reference for calculating leap years:

https://www.mathsisfun.com/leap-years.html

<b>6.</b> Overload the ++ and -- operator, both in prefix and postfix form. Both overloads should increase/decrease the date by one single day. Remember that each month has a different number of days and cannot be less than 1. When we reach the end of the year, and we increment, we must increment the year as well. Likewise, when we are at the start of the year, and we decrement, we also go back one year. Moreover, February has 29 days if it’s a leap year, so you have to factor that in as well. The operator overloads should allow us to write the following code in main.cpp:

```cpp
Date specialDay(4, Date::Month::July, 1982);
++specialDay;
specialDay--;
```

<b>7.</b> Overload the + and - operator such that we can advance or retract a date by a specific scalar amount. Take into account the factors mentioned in question 6. We should be able to write the following code in main.cpp:

```cpp
Date today(26, Date::Month::July, 2022);
Date dayAfterTomorrow = today + 2;
Date lastWeek = today - 7;
```

<b>8.</b> Overload the equality operators (== and !=) and make sure they check if two dates are exactly the same or not the same. You may choose to compare the day, month and year or only compare days or only years. For example, the following code could be allowed:

```cpp
Date aprilFoolsDay(1, Date::Month::April, 2019);

if (aprilFoolsDay == Date::Month::April)
{
    //The date is in the month of April
}
```

<b>OR</b>

```cpp
Date myBirthday(30, Date::Month::March, 1980);
Date yourBirthday(1, Date::Month::May, 1995);

if (myBirthday == yourBirthday)
{
    //The birthdays are the same
}
```

<b>9.</b> Overload the relational operators (>, < ,>=, <=) and try to compare one Date object with another and check if the day, month and year are less than, or greater than, the passed Date object. <br>

<b>10.</b> Add a member function that converts the given date into a std::string type text, so that the date is formatted and readable. The function should pay special attention to the day such that any day with a 1 has a st at the end. Similarly, 2 would have a nd and 3 would have rd. Below are some examples:

- 1st of April 1998
- 23rd of May 2007
- 22nd of December 1800
