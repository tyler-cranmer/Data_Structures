#pragma once
#include <iostream>
#include <string>
using namespace std;

class invalidFeet //invladic feet class
{
public:

	string what() //what fuction the returns message
	{
		return message;
	}

	invalidFeet() : message("Invalid input for your height in feet. Please enter a non negative number.\n") {} //constructor

private:
	string message;

};

