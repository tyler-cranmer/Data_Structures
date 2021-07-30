#pragma once
#include <iostream>
#include <string>

using namespace std;

class invalidInches //invlaid Inches class
{

public:

	string what() //what function that returns message
	{
		return message;
	}

	invalidInches() : message("Invalid input for the remaining inches. Please input a non negative number.\n") {} // constructor

private:
	string message;
};

