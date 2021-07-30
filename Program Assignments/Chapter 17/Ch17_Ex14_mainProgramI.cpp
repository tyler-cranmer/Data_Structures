/*
George Tyler Cranmer
Chapter 17 
3/29/2020
This program creates a queue class and adds values to the queue. 
The assignment was to create a method that takes the nth element and moves it to the front of the queue 
and prints out the queue to the log.
*/

// 5 11 34 67 43 55

#include <iostream>
#include "queueAsArray.h"

using namespace std;

int main()
{
    queueType<int> queue;

    queue.initializeQueue();


    cout << "Please add 6 numbers into the queue: ";
    int choose1, choose2;

    for (int i = 0; i < 6; i++) {
        cin >> choose1;
        queue.addQueue(choose1);
    }

    cout << endl << "What element do you want to move to the front of the que? ";
    cin >> choose2;

    cout << endl << "The origional queue elements are: ";
    queue.printQueue(queue);

    queue.moveNthFront(choose2);

    cout << endl << "After moving some elements around..." << endl;
    cout << "The new queue list of elements are: ";

    while (!queue.isEmptyQueue())
    {
        cout << " " << queue.front();
        queue.deleteQueue();
    }

    cout << endl;

    return 0;
}