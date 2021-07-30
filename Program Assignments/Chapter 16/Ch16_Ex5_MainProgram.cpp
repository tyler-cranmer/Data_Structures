// George Tyler Cranmer Chapter 16 program
// March 22 2020
// This program take in a list of numbers and splits the list in the middle to make two sepereate lists.
// finally the program prints out the origional list, the new first list and second sublist.

//22 34 56 4 19 2 89 90 0 14 32 88 125 56 11 43 55 -999

#include <iostream>
#include "unorderedLinkedList.h"

using namespace std;

int main()
{
    unorderedLinkedList<int> list, subList;

    int num;

    cout << "Enter numbers ending with -999" << endl;
    cin >> num;

    while (num != -999)
    {
        list.insertLast(num);
        cin >> num;
    }

    cout << endl;

    cout << "List: ";
    list.print();
    cout << endl;
    cout << "Length of the list: " << list.length() << endl;

    list.divideMid(subList);

    cout << "Lists after splitting list" << endl;

    cout << "list: ";
    list.print();
    cout << endl;
    cout << "Length of the list: " << list.length() << endl;

    cout << "sublist: ";
    subList.print();
    cout << endl;
    cout << "Length of subList: " << subList.length() << endl;
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
