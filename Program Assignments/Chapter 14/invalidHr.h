#pragma once
#include <string>
#include <iostream>

using namespace std;

class invalidHr //invalidHr Class
{
public:
	

	string what() // what function the is used to return the string stored in the object
	{
		return message;
	}

	invalidHr() : message("Invalid Hour. Must be between 1 and 12 hours.") {} //invlaidHr constructor


private:
	string message; //string to store message
};

