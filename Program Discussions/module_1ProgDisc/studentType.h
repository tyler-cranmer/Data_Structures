#pragma once
#include <iostream>
#include <string>

using namespace std;

class studentType
{

private:
	string firstName;
	string lastName;
	char courseGrade;
	int testScore;
	int programScore;
	double GPA;

public:

	void setFirstName(string first);
	string getFirstName() const;
	void setLastName(string last);
	string getLastName() const;
	void setCourseGrade(char grade);
	char getCourseGrade() const;
	void setTestScore(int tScore);
	int getTestScore() const;
	void setProgramScore(int pScore);
	int getProgramScore() const;
	void setGPA(double gpa);
	double getGPA() const;
	studentType(string, string, char, int, int, double);

};

