/*

George Tyler Cranmer
3/29/2020
Chapter 15 Program Exercise 4

This program uses recursion to sum a series
of squares from the number inputed to 1 inclusive.

*/

#include <iostream>

using namespace std;

int sumOfSquares(int number); //prototype

int main()
{
    int number;
    
    cout << "Please enter a positive number to find the sum of squares." << endl;
    cout << "When done, please enter 0 to exit." << endl << endl;
    cout << "Enter number: ";
    cin >> number;

    
    while(true) 
    {
        if (number < 0 || number > 999)
        {
            cout << "Please enter a positive number less than 999." << endl;
            cout << "Enter number: ";
            cin >> number;
        }
        else if (number == 0) {
            cout << "Thanks for playing. We will see you later." << endl;
            break;
        }
        else
        {
            cout << "The sum of squares for your number is: " << sumOfSquares(number) << endl << endl;
            cout << "Please enter another number to find the sum of squares: ";
            cin >> number;
        }
        
    }

}


int sumOfSquares(int number) 
{
    if (number == 1) { //base case
        return 1;
    }
    else
    {
        return number * number + sumOfSquares(number - 1); //square number and add the next squared (number - 1) until base case is reached.
    }

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
