/*This class isnt really used for the main program. Would need to build the calendar. This assignment has poorly worded instructions that was
very confusing. 

*/

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class dayType //class dayType 
{

private:
	string days[7];
	string currentDay;
	int numDays;
public:
	void setDay(string newDay);
	void printDay() const;
	int showDay(int& day);
	int nextDay(int day);
	int prevDay(int day) const;
	int calcDay(int day, int numDays);
	dayType();

	

};
