// calendarType.h : This header file declares the class calendarType. 
//
// Done by Yoshie Bell-souder
// Chapter 11 Program Assignment 
// Febuary 10th 2020
// 
// This header declares the class calendarType

#ifndef extDateType_H
#define extDateType_H
#endif // !extDateType


#include <iostream>

#ifndef H_calType
#define H_calType

#include "dateType.h" 
#include "extDateType.h"

using namespace std;

class calendarType : public extDateType
{
public:
	// Print the calendar for the particular month
	void printCalendar() const;

	calendarType();
	calendarType(int, int, int);

private:
	// To display the calendar format, find out the first day of the Month
	int getFirstDayofMonth() const;
};

#endif