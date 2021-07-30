/*Also not used in main file. but was asked to build*/

#include "extDateType.h"
#include <string>
#include <iostream>

using namespace std;

void extDateType::printStringMonth() //prints the month in form of a string.
{
	int month = getMonth();

	switch (month) {
	case 1:
		sMonth = "January";
		break;
	case 2:
		sMonth = "February";
		break;
	case 3:
		sMonth = "March";
		break;
	case 4: 
		sMonth = "April";
		break;
	case 5:
		sMonth = "May";
		break;
	case 6:
		sMonth = "June";
		break;
	case 7:
		sMonth = "July";
		break;
	case 8:
		sMonth = "August";
		break;
	case 9:
		sMonth = "September";
		break;
	case 10:
		sMonth = "October";
		break;
	case 11:
		sMonth = "November";
		break;
	case 12:
		sMonth = "December";
		break;
	}

	cout << sMonth << " " << getYear() << endl;
}
