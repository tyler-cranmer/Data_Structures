#include "dateType.h"
#include <iostream>

using namespace std;


void dateType::setDay(int day) //checks and sets the days by their respected months which either have 31, 30 days and sets feb.
{
	if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 || dMonth == 8 || dMonth == 10 || dMonth == 12) {
		if (day < 1 || day >  31) {
			cout << "Invalid day of the month" << endl;
		}
		else {
			dDay = day;
		}
	}
	else if (dMonth == 4 || dMonth == 6 || dMonth == 9 || dMonth == 11) {
		if (day < 1 || day >  30) {
			cout << "Invalid day of the month" << endl;
		}
		else {
			dDay = day;
		}
	}
	else {
		if (day < 1 || day >  feb) {
			cout << "Invalid day of the month" << endl;
		}
		else {
			dDay = day;
		}
	}
}

void dateType::setMonth(int month) //checks and sets the month
{
	if (month < 1 || month > 12) {
		cout << "Invalid Month." << endl;
	}
	else {
		dMonth = month;
	}
}

void dateType::setYear(int year) //checks and sets the year. 
{
	if (year < 1) {
		cout << "invalid Year." << endl;
	}
	else {
		dYear = year;
	}
}

int dateType::getDay() const //returns day
{
	return dDay;
}

int dateType::getMonth() const //returns month
{
	return dMonth;
}

int dateType::getYear() const //returns year
{
	return dYear;
}

void dateType::printDate() const  //prints the month, day and year.
{
	cout << dMonth << "-" << dDay << "-" << dYear << endl;
}


bool dateType::isLeapYear() //check to see if its a leap year
{
	if (dYear % 4 == 0) {
		feb = 29; //if a leapyear set feb to 29 days.
		return true;
	}
	else
		feb = 28; //if not a leapyear, set feb to 28

	return false;
}

int dateType::daysPast() //calculates the number of days that have already passed this year. 
{
	int days = 0;
	int jan = 31, march = 31, may = 31, july = 31, aug = 31, oct = 31, dec = 31;
	int april = 30, june = 30, sept = 30, nov = 30;

	switch (dMonth) { //calculates the number of days by each month.
	case 1:
		days = dDay;
		break;

	case 2:
		days = jan + dDay;
		break;

	case 3:
		days = jan + feb + dDay;
		break;

	case 4:
		days = jan + feb + march + dDay;
		break;

	case 5:
		days = jan + feb + march + april + dDay;
		break;

	case 6:
		days = jan + feb + march + april + may + dDay;
		break;

	case 7: 
		days = jan + feb + march + april + may + june + dDay;
		break;

	case 8:
		days = jan + feb + march + april + may + june + july + dDay;
		break;

	case 9:
		days = jan + feb + march + april + may + june + july + aug + dDay;
		break;

	case 10:
		days = jan + feb + march + april + may + june + july + aug + sept + dDay;
		break;

	case 11:
		days = jan + feb + march + april + may + june + july + aug + sept + oct + dDay;
		break;

	case 12:
		days = jan + feb + march + april + may + june + july + aug + sept + oct + nov + dDay;
		break;
	}
	return days;
}

int dateType::daysRemain() // returns the remaining left in the year. 
{
	int  remainingDays = 0;
	if (isLeapYear() == true) { //calculates for the leap year. 
		remainingDays = 366 - daysPast();
	}
	else {
		remainingDays = 365 - daysPast();
	}
	return remainingDays;
}

int dateType::daysInMonth() //returns the days in a month 
{
	if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 || dMonth == 8 || dMonth == 10 || dMonth == 12) {
		return 31; //return 31 days for jan,march,may,july,aug,oct,dec
	}
	else if (dMonth == 4 || dMonth == 6 || dMonth == 9 || dMonth == 11) {
		return 30; // return 30 days for April,June,Sept,Nov
	}
	else
		return feb; //returns the date of feb 
}



//constructor dateType
dateType::dateType(int month, int day, int year) 
{
	isLeapYear();

	//making sure the year is valid.
	if (year < 1) {
		cout << "Invalid year." << endl;
	}
	else {       //testing that there is 31 days in jan,march,may,july,aug,oct,dec
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day < 1 || day >  31) {
				cout << "Invalid day of the month" << endl;
			}
			else { //set month,day and year.
				dMonth = month;
				dDay = day;
				dYear = year;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) { //testing that there is 30 days in the months of April,June,Sept,Nov
			if (day < 1 || day >  30) {
				cout << "Invalid day of the month" << endl;
			}
			else {
				dMonth = month;
				dDay = day;
				dYear = year;
			}
		}
		else {//checks for feb
			if (day < 1 || day > feb) {
				cout << "Invalid day of the month" << endl;
			}
			else {
				dMonth = month;
				dDay = day;
				dYear = year;
			}
		}
	}
}