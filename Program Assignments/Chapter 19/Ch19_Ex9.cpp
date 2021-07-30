/*
Chapter 19 program
George Tyler Cranmer
4/26/2020

This Program takes in a series of numbers and creates a binary tree. 

The class project was to write a function that inserts the nodes of a binary tree into an ordered linked list. 


*/

//Data
//68 43 10 56 77 82 61 82 33 56 72 66 99 88 12 6 7 21 -999

#include <iostream>
#include "binarySearchTree.h"
#include "orderedLinkedList.h"

using namespace std;

int main()
{
    bSearchTreeType<int>  treeRoot;
    orderedLinkedList<int> newList;

    int num;

    cout << "Enter numbers ending with -999" << endl;
    cin >> num;

    while (num != -999)
    {
        treeRoot.insert(num);
        cin >> num;
    }

    cout << endl << "Tree nodes in inorder: ";
    treeRoot.inorderTraversal();
    cout << endl;
    cout << "Tree Height: " << treeRoot.treeHeight()
        << endl;
    treeRoot.createList(newList);

    cout << "newList: ";
    newList.print();

    cout << endl;
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
