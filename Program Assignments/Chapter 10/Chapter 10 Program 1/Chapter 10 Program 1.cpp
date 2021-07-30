// Chapter 10 Program 1.cpp : George "Tyler" Cranmer 1/31/2020
// The program prompts the user to imput dimensions of thier new pool and it will calculate how long it should take to fill/drain.

#include <iostream>
#include <string>
#include <iomanip>
#include "swimmingPool.h"

using namespace std;

int giveChoice();

int main()
{

	swimmingPool myPool;
	myPool.getInfo();
	myPool.printInfo();

	int choice = giveChoice();

	if (choice == 1) {
		cout << "It will take " << myPool.time_fill() << " minutes to fill your pool. For a total of " << myPool.amount_fill() << " gallons of water." << endl;
	}
	else if (choice == 2) {
		cout << "It will take " << myPool.time_drain() << " minutes to drain your pool. For a total of " << myPool.amount_drain() << " gallons of water." << endl;
	}
	return 0;
};

//Menu to give user option on what information he would like to recieve.  
int giveChoice() {

	int choice = 0;

	cout << "Enter 1 to find out how long it will take to fill your pool." << endl;
	cout << "Enter 2 to find out how long it will take to empty your pool." << endl;
	cout << "Enter number: ";
	cin >> choice;
	cout << endl;

	return choice;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
