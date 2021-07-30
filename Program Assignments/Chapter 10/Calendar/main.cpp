/*Chapter 11 Program: George Tyler Cranmer 2.10.2020.  This file contains the 'main' function. 
This program promps the user to set the month, day and year. This will print out the given date entered, 
test to see if the given year is a leap year, calculate how many days have passed this year, 
calculate the days left in the year and how many days are in the entered month. 
*/

#include <iostream>
#include<string>
#include "dateType.h"
#include "dayType.h"

using namespace std;

int main()
{
    dateType date; //creating an object called date
    int month = 0; 
    int day = 0;
    int year = 0;
    int choice = 0;

    while (choice != 9) //run menu until user presses 9 to quit.
    {
        cout << "Enter 1 to set the month." << endl;
        cout << "Enter 2 to set the day." << endl;
        cout << "Enter 3 to set the year." << endl;
        cout << "Enter 4 to see that date entered." << endl;
        cout << "Enter 5 if you are looking to test if its a leap year." << endl;
        cout << "Enter 6 to check how many days have passed this year." << endl;
        cout << "Enter 7 to find out the number of days left in the year." << endl;
        cout << "Enter 8 if you are looking to find out the number of days in the month." << endl;
        cout << "Enter 9 if you would like to quit." << endl;
        cin >> choice;

        switch (choice)  
        {
        case 1: //prompting the user to set the month
            cout << "What month is it: ";
            cin >> month;
            date.setMonth(month);
            break;

        case 2://prompting the user to set the day
            cout << "What is the day today: ";
            cin >> day;
            date.setDay(day);
            break;

        case 3://prompting the user to set the year
            cout << "What year is it: ";
            cin >> year;
            date.setYear(year);
            break;

        case 4://prints date
            date.printDate();
            break;

        case 5://checks to see if it is a leap year

            if (date.isLeapYear() == true) {
                cout << "This is a Leap Year." << endl;
                break;
            }
            else
                cout << "This is not a Leap Year." << endl;
            break;

        case 6: //checks to see how many days have past this year
            cout << "We have been through " << date.daysPast() << " days this year." << endl;
            break;

        case 7://checks to see how many days are left in the year
            cout << "We have " << date.daysRemain() << " days left in the year" << endl;
            break;

        case 8://checks to see how many days are in the month
            cout << "There are : " << date.daysInMonth() << " days this month." << endl;
            break;

        case 9:
            break;
        }
    }
    return 0;
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
