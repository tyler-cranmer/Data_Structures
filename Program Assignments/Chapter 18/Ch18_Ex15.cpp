// Ch18_Ex15.cpp : George Tyler Cranmer 4/13/2020
//This program was created to show how bubble sort, selection sort and intertion sort function.
//Application creates 3 identical lists of randomly generated numbers and performs their respective sorting function
//prints out the number of comparrisons and assignments for reach sorting function.

#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

int main()
{
   int* list1;
   int* list2;
   int* list3;

   int size = 5000;
   
    list1 = new int[size];
    list2 = new int[size];
    list3 = new int[size];
   

    int compBubbleSort = 0, compSelectionSort = 0, compInsertionSort = 0;
    int assignBubbleSort = 0, assignSelectionSort = 0, assignInsertionSort = 0;

    fillArray(list1, size);
    copyArray(list1, list2, list3, size);

    bubbleSort(list1, size, compBubbleSort, assignBubbleSort);
    selectionSort(list2, size, compSelectionSort, assignSelectionSort);
    insertionSort(list3, size, compInsertionSort, assignInsertionSort);
    

    cout << "For 3 identical arrays with " << size << " radomly generated numbers..." << endl;
    cout << endl << "Number of comparisons:" << endl;
    cout << "Bubble sort: " << compBubbleSort << endl;
    cout << "Selection sort: " << compSelectionSort << endl;
    cout << "Insertion sort: " << compInsertionSort << endl;

    cout << endl;

    cout << "Number of assignments:" << endl;
    cout << "Bubble sort: " << assignBubbleSort << endl;
    cout << "Selection sort: " << assignSelectionSort << endl;
    cout << "Insertion sort: " << assignInsertionSort << endl;

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
