#include "studentType.h"
#include <iostream>
#include <string>

string studentType::getFirstName() const
{
	return firstName;
}

void studentType::setFirstName(string first)
{
	firstName = first;
}

string studentType::getLastName() const
{
	return lastName;
}

void studentType::setLastName(string last) 
{
	lastName = last;
}

void studentType::setCourseGrade(char grade)
{
	courseGrade = grade;
}

char studentType::getCourseGrade() const
{
	return courseGrade;
}

void studentType::setTestScore(int tScore)
{
	testScore = tScore;
}

int studentType::getTestScore() const
{
	return testScore;
}

void studentType::setProgramScore(int pScore)
{
	programScore = pScore;
}

int studentType::getProgramScore() const
{
	return programScore;
}

void studentType::setGPA(double gpa)
{
	GPA = gpa;
}

double studentType::getGPA() const
{
	return GPA;
}

studentType::studentType(string first, string last, char grade, int tScore, int pScore, double gpa)
{
	firstName = first;
	lastName = last;
	courseGrade = grade;
	testScore = tScore;
	programScore = pScore;
	GPA = gpa;
}



