// dateType.cpp : This file contains the implementation for the dateType class
//
// Done by Yoshie Bell-souder
// Chapter 11 Program Assignment 
// Febuary 9th 2020
// 

#include <iostream>
#include <iomanip>
#include <string>
#include "dateType.h" 

void dateType::setDate(int month, int day, int year)
{
	if (isValidDate(month, day, year))
	{
		dMonth = month;
		dDay = day;
		dYear = year;
	}
	else cout << "Error: please enter valid date." << endl;
}

void dateType::setMonth(int month)
{
	if (isValidDate(month, dDay, dYear))
	{
		dMonth = month;
	}
	else cout << "Error: please enter valid date." << endl;
}

void dateType::setDay(int day)
{
	if (isValidDate(dMonth, day, dYear))
	{
		dDay = day;
	}
	else cout << "Error: please enter valid date." << endl;
}

void dateType::setYear(int year)
{
	if (isValidDate(dMonth, dDay, year))
	{
		dYear = year;
	}
	else cout << "Error: please enter valid date." << endl;
}

int dateType::getDay() const
{
	return dDay;
}

int dateType::getMonth() const
{
	return dMonth;
}

int dateType::getYear() const
{
	return dYear;
}

void dateType::printDate() const
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}


dateType::dateType()
{
	dMonth = 1;
	dDay = 1;
	dYear = 1900;
}

dateType::dateType(int month, int day, int year)
{
	if (isValidDate(month, day, year))
	{
		dMonth = month;
		dDay = day;
		dYear = year;
	}
	else
	{
		cout << "Error: Entered date is not valid. Defaulting to 1/1/1900" << endl;
		dMonth = 1;
		dDay = 1;
		dYear = 1900;
	}
}

int dateType::NumDaysinMonth(int month, int year) const
{
	switch (month) {
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 2:
		if (isLeapYear(year)) {
			return 29;
		}
		else
			return 28;
		break;
	default:
		return -1;
		break;
	}
}

int dateType::NumDaysinMonth() const
{
	return NumDaysinMonth(dMonth, dYear);
}

int dateType::NumDaysPassed() const
{
	int iMonth = 1;
	int numDays = dDay;
	while (iMonth < dMonth) {
		numDays += NumDaysinMonth(iMonth, dYear);
		iMonth++;
	}
	return numDays;
}

int dateType::NumDaysRemaining() const
{
	if (isLeapYear(dYear)) {
		// 1 year 365 days plus day for 1 leap year 
		return 366 - NumDaysPassed();
	}
	else return 365 - NumDaysPassed();
}

void dateType::CalculateNewDate(int addDays)
{
	dDay += addDays;

	while (dDay > NumDaysinMonth(dMonth, dYear))
	{
		dDay -= NumDaysinMonth(dMonth, dYear);
		dMonth++;
		if (dMonth > 12)
		{
			dYear++;
			dMonth = 1;
		}
	}

	// in case to input minus value
	while (dDay < 1) {
		dMonth--;
		dDay += NumDaysinMonth(dMonth, dYear);
		if (dMonth < 1)
		{
			dYear--;
			dMonth = 12;
		}
	}
}

bool dateType::isValidDate(int month, int day, int year) const
{
	//check if month is from 1 to 12
	if (month < 1 || month > 12)
	{
		return false;
	}
	// check if day is from 1 to 31, depends on month
	else if (day < 1 || day > NumDaysinMonth(month, year))
	{
		return false;
	}
	else return true;
}

bool dateType::isValidDate() const
{
	return isValidDate(dMonth, dDay, dYear);
}

bool dateType::isLeapYear(int year) const
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return true;
			}
			else return false;
		}
		else return true;
	}
	else
	{
		return false;
	}
}

bool dateType::isLeapYear() const
{
	return isLeapYear(dYear);
}