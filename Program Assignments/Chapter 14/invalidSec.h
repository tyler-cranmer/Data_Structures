#pragma once
#include <string>
#include <iostream>

using namespace std;

class invalidSec
{

public:

	string what() //function what used to return the string stored in the object
	{
		return message;
	}

	invalidSec() : message("Invalid value for Seconds. Must be between 1 and 59 seconds.") {} // invalidSec constructor

private:
	string message; //string to store the message
};

