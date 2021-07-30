// dateType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Done by Yoshie Bell-souder
// Chapter 11 Program Assignment 
// Febuary 9th 2020
// 

#include <iostream>
#include <string>

#include "dateType.h" 
#include "extDateType.h"

string extDateType::MonthString() const
{
	switch (getMonth()) {
	case 1:
		return "January";
		break;
	case 2:
		return "February";
		break;
	case 3:
		return "March";
		break;
	case 4:
		return "April";
		break;
	case 5:
		return "May";
		break;
	case 6:
		return "June";
		break;
	case 7:
		return "July";
		break;
	case 8:
		return "August";
		break;
	case 9:
		return "September";
		break;
	case 10:
		return "October";
		break;
	case 11:
		return "November";
		break;
	case 12:
		return "December";
		break;
	default:
		return "ERROR";
		break;
	}
}

void extDateType::print() const
{
	cout << MonthString() << " " << getDay() << ", " << getYear();
}


void extDateType::setMonthName(string eMonth)
{
	MonthName = eMonth;
}

string extDateType::getMonthName()
{
	return MonthName;
}

extDateType::extDateType()
{
	dateType::dateType();
	MonthName = "January";
}

extDateType::extDateType(int month, int day, int year) :
	dateType::dateType(month, day, year)
{
	MonthName = MonthString();
}