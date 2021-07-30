#pragma once
class dateType //class dateType
{
public:
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void printDate() const;
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int daysInMonth();
	bool isLeapYear();
	int daysPast();
	int daysRemain();
	dateType(int month = 1, int day = 1, int year = 1990);

private:
	int dMonth;
	int dDay;
	int dYear;
	int feb;
};

