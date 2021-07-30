
/*Chapter 9 defined the struct studentType to implement the basic properties of a student. 
Define the class studentType with the same components as the struct studentType, and add member functions to manipulate the data members. 
(Note that the data members of the class studentType must be private.) Write a program to illustrate how to use the class studentType. */

/*
* This program was created to show how classes are created and private data is accessed.
* module_1ProgDisc.cpp : This file contains the 'main' function. Program execution begins and ends there.
*/

#include "studentType.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	studentType tyler("Tyler", "Cranmer", 'A', 85, 95, 4.0);

	cout << "Student Info: " << endl << endl;
	cout << "First Name: " << tyler.getFirstName() << endl;
	cout << "Last Name: " << tyler.getLastName() << endl;
	cout << "Test Score: " << tyler.getTestScore() << "%" << endl;
	cout << "Programing Score: " << tyler.getProgramScore() << "%" << endl;
	cout << "Course Grade: " << tyler.getCourseGrade() << endl;
	cout << "Total GPA: " << tyler.getGPA() << endl;


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
