// CH11_Ex10_MainProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

using namespace std;

int main()
{
	dateType mydate(3, 24, 2017);
	extDateType myExtDateType(3, 24, 2017);
	calendarType myCalendarType(9, 12, 2017);
	int userinput;
	mydate.printDate();

	// set a year
	cout << endl << endl << "Enter a new year: ";
	// return the year
	cin >> userinput;
	mydate.setYear(userinput);
	mydate.printDate();

	// set a month
	cout << endl << endl << "Enter a month(1 to 12): ";
	// return the month
	cin >> userinput;
	mydate.setMonth(userinput);
	mydate.printDate();

	// set a day
	cout << endl << endl << "Enter a day(1 to " << mydate.NumDaysinMonth() << "): ";
	// return the day
	cin >> userinput;
	mydate.setDay(userinput);
	mydate.printDate();

	// test whether the year is a leap year or not
	if (mydate.isLeapYear())
		cout << endl << "It's a leap year" << endl;
	else 
		cout << endl << "It's not a leap year" << endl;
		cout << endl;

	// return the number of days in month
	cout << "Number of days in month: " << mydate.NumDaysinMonth() << endl;
	cout << endl;

	// return number of days passed
	cout << "Number of days passed: " << mydate.NumDaysPassed() << endl;
	cout << endl;

	// return of days remaining 
	cout << "Number of days remaining: " << mydate.NumDaysRemaining() << endl;
	cout << endl;

	// returning the values
	cout << "Date in EU format " << mydate.getDay() << "-" << mydate.getMonth() << "-" << mydate.getYear() << endl;
	cout << endl;

	myExtDateType.print();
	cout << endl << endl;
	myCalendarType.printCalendar();
}




