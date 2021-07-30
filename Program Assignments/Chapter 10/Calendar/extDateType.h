/*Also not used in main file. but was asked to build*/
#pragma once
#include "dateType.h"
#include <string>

using namespace std;


class extDateType : public dateType //derrived class DateType
{

public:
	void printStringMonth();

private:

	string sMonth;
};

