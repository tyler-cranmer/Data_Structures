#pragma once
#include <string>
#include <iostream>

using namespace std;

class invalidMin
{
public:

	string what()//function what used to return the string stored in the object
	{
		return message;
	}

	invalidMin() : message("Invalid Minutes. Time needs to be between 0 and 59 minutes.") {} //invliadMin constructor

private: string message; //string to store the message
};

