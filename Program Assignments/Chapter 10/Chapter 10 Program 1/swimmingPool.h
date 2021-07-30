#pragma once

/*swimming pool class*/
class swimmingPool
{
private:
	double length;
	double width;
	double depth;
	double fillRate;
	double drainRate;
	double percentage;


public:

	swimmingPool();
	void getInfo();
	void printInfo();
	double amount_fill();
	double amount_drain();
	double time_fill();
	double time_drain();
	

};

