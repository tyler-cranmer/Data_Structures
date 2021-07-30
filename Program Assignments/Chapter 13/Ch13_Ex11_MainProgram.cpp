// George Tyler Cranmer 2/29/2020 
// Ch13_Ex11_MainProgram.cpp 
// Design and implement the class myArray that solves the array index out of bounds problem and also allows the user to begin the array index starting at any integer, positive or negative.
// This program will print out a series of array lists. once you input the elements, the program will maniputlate and out put different element values.

#include <iostream>
#include "myArray.h"

using namespace std;

int main()
{
    myArray list1(5);
    myArray list2(5);

    int i;

    cout << "list1 : ";
    for (i = 0; i < 5; i++)
        cout << list1[i] << " ";
    cout << endl;

    cout << "Enter 5 integers: ";
    for (i = 0; i < 5; i++)
        cin >> list1[i];
    cout << endl;

    cout << "After filling list1: ";

    for (i = 0; i < 5; i++)
        cout << list1[i] << " ";
    cout << endl;

    list2 = list1;
    cout << "list2 : ";
    for (i = 0; i < 5; i++)
        cout << list2[i] << " ";
    cout << endl;

    cout << "Enter 3 elements: ";

    for (i = 0; i < 3; i++)
        cin >> list1[i];
    cout << endl;

    cout << "First three elements of list1: ";
    for (i = 0; i < 3; i++)
        cout << list1[i] << " ";
    cout << endl;

    myArray list3(-2, 6);

    cout << "list3: ";
    for (i = -2; i < 6; i++)
        cout << list3[i] << " ";
    cout << endl;

    list3[-2] = 7;
    list3[4] = 8;
    list3[0] = 54;
    list3[2] = list3[4] + list3[-2];

    cout << "list3: ";
    for (i = -2; i < 6; i++)
        cout << list3[i] << " ";
    cout << endl;
    system("pause");

    return 0;
}
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
