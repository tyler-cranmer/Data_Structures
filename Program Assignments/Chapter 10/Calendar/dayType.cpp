

#include "dayType.h"
void dayType::setDay(string newDay) //sets the day
{
	currentDay = newDay;
}
void dayType::printDay() const // prints the day
{
	cout << "Day chosen is " << currentDay << endl;
}
int dayType::showDay(int& day) //returns the day.
{
	return day;
}
int dayType::nextDay(int day) // calculates what the next day will be
{
	day = day++;
	if (day > 6)
		day = day % 7;
	switch (day)
	{
	case 0: cout << "The next day is Sunday";
		break;
	case 1: cout << "The next day is Monday";
		break;
	case 2: cout << "The next day is Tuesday";
		break;
	case 3: cout << "The next day is Wednesday";
		break;
	case 4: cout << "The next day is Thursday";
		break;
	case 5: cout << "The next day is Friday";
		break;
	case 6: cout << "The next day is Saturday";
		break;
	}
	cout << endl;
	return day;
}

int dayType::prevDay(int day) const //calculates and couts the previous day
{
	day = day--;
	switch (day)
	{
	case -1: cout << "The previous day is Saturday.";
		break;
	case 0: cout << "The previous day is Saturday.";
		break;
	case 1: cout << "The previous day is Saturday.";
		break;
	case 2: cout << "The previous day is Saturday.";
		break;
	case 3: cout << "The previous day is Saturday.";
		break;
	case 4: cout << "The previous day is Saturday.";
		break;
	case 5: cout << "The previous day is Saturday.";
		break;
	default: cout << "The previous day is Saturday.";
	}
	cout << endl;
	return day;
}
int dayType::calcDay(int addDays, int numDays) //calculates and couts the day o the week
{
	addDays = addDays + numDays;
	if (addDays > 6)
		addDays = addDays % 7;
	switch (addDays)
	{
	case 0: cout << "The calculated day is Sunday.";
		break;
	case 1: cout << "The calculated day is Monday.";
		break;
	case 2: cout << "The calculated day is Tuesday.";
		break;
	case 3: cout << "The calculated day is Wednesday.";
		break;
	case 4: cout << "The calculated day is Thursday.";
		break;
	case 5: cout << "The calculated day is Friday.";
		break;
	case 6: cout << "The calculated day is Saturday.";
		break;
	default: cout << "Not valid choice.";
	}
	cout << endl;
	return addDays;
}

dayType::dayType() //daytype constructor
{
	days[0] = "Sunday";
	days[1] = "Monday";
	days[2] = "Tuesday";
	days[3] = "Wednesday";
	days[4] = "Thursday";
	days[5] = "Friday";
	days[6] = "Saturday";
	currentDay = days[0];
	numDays = 0;
}