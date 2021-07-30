/*
George Tyler Cranmer
Discussion 4. 
Chapter 18 Question 8

This program uses insertion sort algorithm to sort an array of any size.
Initial size is set at 100 elements. Change the list size as desired. 
Prints out both unsorted and sorted array. 

*/

#include <iostream>
#include "InsertionSortAlgorithm.h"

using namespace std;

int main()
{
    int* list1;

    int size = 100;

    list1 = new int[size];

    fillArray(list1, size);

    cout << "Before the sorting, list: ";
    print(list1, size);

    insertionSort(list1, size);

    cout << "After the sorting, list: ";
    print(list1, size);

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
