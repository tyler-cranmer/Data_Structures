// extDateType.h : This header file declares the class extDateType. 
//
// Done by Yoshie Bell-souder
// Chapter 11 Program Assignment 
// Febuary 10th 2020
// 
// This header declares the class extDateType

#include <iostream>
#include <string>

using namespace std;

#ifndef H_extDateType
#define H_extDateType

#include "dateType.h"

class extDateType : public dateType
{
public:
	// Set
	void setMonthName(string);

	// Return
	void print() const;
	string getMonthName();
	string MonthString() const;
	
	extDateType();
	extDateType(int, int, int);

private:
	// To display Month name instead of number
	string MonthName;
};


#endif

