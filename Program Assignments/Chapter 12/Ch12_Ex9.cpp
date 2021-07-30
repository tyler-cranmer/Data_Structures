// George Tyler Cranmer
// Febrary 23, 2020
// Chapter 12
// Ch12_Ex9.cpp : This program will take in a data set and find the smallest number.


//Data:  18 42 78 22 42 5 42 57

#include <iostream>
#include "unorderedArrayListType.h"
#include "arrayListType.h"

using namespace std;

int main()
{
    unorderedArrayListType intList(25);

    int number;

    cout << "Enter 8 integers: ";

    for (int count = 0; count < 8; count++)
    {
        cin >> number;
        intList.insertEnd(number);
    }

    cout << endl;
    cout << "intList: ";
    intList.print();
    cout << endl;

    cout << "The smallest number in intList: "
        << intList.min() << endl;
    system("pause");
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
