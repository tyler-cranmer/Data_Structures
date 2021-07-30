// dateType.h : This header file declares the class dateType. 
//
// Done by Yoshie Bell-souder
// Chapter 11 Program Assignment 
// Febuary 10th 2020
// 
// This header declares the class dateType

#include <iostream>

using namespace std;

#ifndef H_dateType
#define H_dateType

class dateType
{
public:
	// Set
	void setDate(int month, int day, int year);
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);

	// Return
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void printDate() const;

	dateType();
	dateType(int month, int day, int year);

	// Return the number of days in the month
	int NumDaysinMonth(int month, int year) const;
	int NumDaysinMonth() const;

	// Return the number of days passed in the year
	int NumDaysPassed() const;

	// Return the number of days remaining in the year
	int NumDaysRemaining() const;

	// Calculate the new date
	void CalculateNewDate(int addDays);

	// Test whether the date is invalid 
	bool isValidDate(int month, int day, int year) const;
	bool isValidDate() const;

	// Test whether the year is a leap year.
	bool isLeapYear(int) const;
	bool isLeapYear() const;

private:
	int dMonth;
	int dDay;
	int dYear;
};


#endif