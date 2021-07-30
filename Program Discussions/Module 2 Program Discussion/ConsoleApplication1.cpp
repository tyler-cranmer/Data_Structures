// George Tyler Cranmer 
// Program Discussion Chapter 14 exercise 1
// 3/8/2020
// This program prompts the user to enter a length in feet and inches of a broad sword and outputs the equivalent length in centimeters. IF the user enters a negative number or a non digit number, throw and handle an error message. 

#include <iostream>
#include <string>
#include "invalidFeet.h"
#include "invalidInches.h"

using namespace std;

double getFeet(); //gets the length in feet of the broad sword
double getInches();// gets the length in inches of the broad sword
void printCentemeters(double ft, double in); //prints message

int main()
{
    double feet;
    double inches;
    
    feet = getFeet();
    inches = getInches();
 
     
    printCentemeters(feet, inches);
    system("pause");

        return 0;
 }

double getFeet()
{
    bool done = false;
    double ft = 0;

    do // loops through this code until a valid input is recieved
    {
        try //try statement that will throw an invalid object if the user inputs anything other than a non negative number
        {
            cout << "Please enter the length your broad sword in feet:  ";
            cin >> ft;
            cout << endl;

            if (ft < 0 || cin.fail())
                throw invalidFeet(); //Throw statement 

            done = true;
        }

        catch (invalidFeet feetObj) //catches the invalidFeet object and outputs an error message.
        {
            cout << feetObj.what() << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }

    } while (!done);

    return ft;

}

double getInches()

{
    double done = false;
    double in = 0;

    do // loops through this code until a valid input is recieved
    {
        try //try statement that will throw an invalid object if the user inputs anything other than a non negative number
        {
            cout << "Please enter the remaining inches of your broad sword: ";
            cin >> in;
            cout << endl;

            if (in < 0 || cin.fail())
                throw invalidInches(); //Throw statement

            done = true;
        }

        catch (invalidInches InchesObj) //catches the invalidFeet object and outputs an error message.
        {
            cout << InchesObj.what() << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }

    } while (!done);

    return in;

}


void printCentemeters(double ft, double in) {

    double centimeter = (ft * 12.0 + in) * 2.54; //converts the length into centemeters 
 

    if (centimeter > 115)
    {
        cout << "The length of your broadsword in centemeters is " << centimeter << ". Good luck wielding that beast in battle." << endl;
    }
    else if (centimeter < 77)
    {
        cout << "You call that a broadsword? Its only " << centimeter << " centemeters long. Good luck battling the Ottoman Janissaries with that little dagger." << endl;
    } 
    else
    cout << "The length of your " << ft << " foot " << in << " inch broadsword in centemeters is: " << centimeter << "." << endl;
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
