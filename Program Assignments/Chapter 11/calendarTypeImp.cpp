// calendarTypeImp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Done by Yoshie Bell-souder
// Chapter 11 Program Assignment 
// Febuary 9th 2020
// 

#include <iostream>
#include <iomanip>
#include <string>

#include "dateType.h" 
#include "extDateType.h"
#include "calendarType.h"


// 0 = Sunday, ..., 6 = Saturday
int calendarType::getFirstDayofMonth() const
{
	int daysSince1500 = 1;
	int iYear = 1500;

	while (iYear < getYear())
	{
		if (isLeapYear(iYear))
		{
			daysSince1500 += 366;
		}
		else daysSince1500 += 365;
		iYear++;
	}

	daysSince1500 += NumDaysPassed() - getDay();
	// one week is 7 days
	return daysSince1500 % 7;
}

void calendarType::printCalendar() const
{
	int firstDay = getFirstDayofMonth();
	int lastDay = NumDaysinMonth(getMonth(), getYear());
	// three letter(for example Sun) plus four spaces = 7
	int FirstSpaces = (firstDay) * 7;

	cout << MonthString() << " " << getYear() << endl;
	cout << endl;
	cout << "Sun    Mon    Tue    Wed    Thu    Fri    Sat" << endl;
	if (firstDay >= 1) {
		cout << left << setw(FirstSpaces) << "";
	}
	for (int iDay = 1; iDay <= lastDay; iDay++)
	{
		cout << left << setw(7) << iDay;
		if ((iDay + firstDay) % 7 == 0)
		{
			cout << endl;
		}
	}
}

calendarType::calendarType() :
	extDateType::extDateType()
{}

calendarType::calendarType(int day, int month, int year) :
	extDateType::extDateType(day, month, year)
{}