#include<iostream>
#include "swimmingPool.h"

using namespace std;

/*swimming pool constructor that allows us to hold and manipulate the data*/
swimmingPool::swimmingPool() {
	length = 0.0;
	width = 0.0;
	depth = 0.0;
	fillRate = 0.0;
	drainRate = 0.0;
	percentage = 0.0;
}

/*gets info from the user by prompting them to input the dimensions of the pool, 
how full the pool is and the rate at which the pool is filling or draining*/
void swimmingPool::getInfo() {



	cout << "How many feet is the length of your swimming pool? ";
	cin >> length;
	cout << endl << "How many feet is the width of your swimming pool? ";
	cin >> width;
	cout << endl << "What is the depth of your swimming pool in feet? ";
	cin >> depth;
	cout << endl << "What % of the pool is full? ";
	cin >> percentage;

	//Check to see if the pool is partially filled
	while (percentage < 0 || percentage > 100) {
		cout << "Invalid Input. Please enter a number between 0 - 100";
		cin >> percentage;
	}

	//getting fill or drain rate
	cout << endl << "In gallon per minutes, how fast are you filling or draining the pool? ";
	cin >> fillRate;
	drainRate = fillRate;
	cout << endl;


}


/*calculate the total volume of water needed to fill the pool*/
double swimmingPool::amount_fill() {

	double total_vol = length * width * depth *7.5;
	double temp_percent = percentage / 100; //create a temporary percentage value to multiply with the volume

	//depending on what the percentage is, multiply that value with demensions to ge total volume
	if (percentage == 0 || percentage == 100) {

		if (percentage == 100) {

			total_vol = 0.0;
		}

		return total_vol;
	}
	else if (percentage > 0 && percentage < 100) {

	
		total_vol = total_vol - total_vol * temp_percent;
		return total_vol;

	}

}

/*Calculate the total volume of water needed to drain the pool*/
double swimmingPool::amount_drain()
{
	double total_vol = length * width * depth *7.5;
	double temp_percent = percentage / 100; 

	//determines the percentage value to find out total amount to drain.
	if (percentage == 0 || percentage == 100) {

		if (percentage == 0) {
			
			total_vol = 0.0; 
		}
	
		return total_vol;
	}
	else if (percentage > 0 && percentage < 100) {

	
		total_vol = total_vol * temp_percent;
		return total_vol;
	}
}

/*based on the volume calculate the time needed to fill the pool in minutes*/
double swimmingPool::time_fill() {

	double volume = length * width * depth * 7.5; 
	double timeFill = volume / fillRate;
	double temp_percent = percentage / 100;

	if (percentage == 0 || percentage == 100) {

		if (percentage == 100) { 
			timeFill = 0.0;
		}

		return timeFill;
	}
	else if (percentage > 0 && percentage < 100) {
		
		volume = volume - (volume * temp_percent);
		timeFill = volume / fillRate;
		return timeFill;
	}
}

/*Based on the volume, calculate the time needed to drain the pool in minutes*/
double swimmingPool::time_drain()
{
	double volume = length * width * depth * 7.5;
	double timeDrain = volume / drainRate;
	double temp_percent = percentage / 100;

	if (percentage == 0 || percentage == 100) {

		if (percentage == 0) {

			timeDrain = 0.0;
		}
		return timeDrain;
	}
	else if (percentage > 0 && percentage < 100) {
		
		volume = volume * temp_percent;
		timeDrain = volume / drainRate;
		return timeDrain;
	}
}

/*prints the info that was inputed by the user*/
void swimmingPool::printInfo() {

	cout << "Length is: " << length << " feet." << endl;
	cout << "Width is: " << width << " feet." << endl;
	cout << "Depth is: " << depth << " feet." <<endl;
	cout << "The rate at which the pool is filling up or draining is: " << fillRate << " gallons per minute." << endl;
	cout << "Total pool volume is: " << length * width * depth << " gallons." << endl << endl;

}