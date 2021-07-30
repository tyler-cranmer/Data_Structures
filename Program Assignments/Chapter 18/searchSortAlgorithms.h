#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class elemType>
void fillArray(elemType list1[], int length) // used to fill array with randomly generated numbers
{
    srand(time(0));

    for (int i = 0; i < length; i++)
    {
        list1[i] = rand() % 20000;
    }
}//end fillArray

template <class elemType>
void copyArray(elemType list1[], elemType list2[], elemType list3[], int length) // function that copies the initial array into seperate arrays.
{
    for (int i = 0; i < length; i++)
    {
        list2[i] = list1[i];
        list3[i] = list1[i];
    }
}//end copyArray

template <class elemType>
void swap(elemType list[], int first, int second, int& assign)
{
    elemType temp;

    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
    assign ++; //plus 1 to the assignment counter when swap is ran

} //end swap

template <class elemType>
int minLocation(elemType list[], int first, int last, int& comp)
{
    int loc, minIndex;

    minIndex = first;

    for (loc = first + 1; loc <= last; loc++)
    {
        comp++; //plus 1 to the comparison counter when min location is ran

        if (list[loc] < list[minIndex])
        {
            minIndex = loc;

        }
        
    }
           
    return minIndex;
} //end minLocation

template <class elemType>
void selectionSort(elemType list[], int length, int& comp, int& assign)
{
    int loc, minIndex;

    for (loc = 0; loc < length; loc++)
    {
        minIndex = minLocation(list, loc, length - 1, comp);
        swap(list, loc, minIndex, assign);
        
    }

} //end selectionSort

template <class elemType>
void bubbleSort(elemType list[], int length, int& comp, int& assign)
{
    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration;
            index++)
        {
            if (list[index] > list[index + 1])
            {
                elemType temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;

                assign ++; //plus 1 to the assignment counter when swaping of the elements

            }

            comp ++; //plus 1 for reach iteration through the for loop
        }
    }
} //end bubbleSort

template <class elemType>
void insertionSort(elemType list[], int length, int& comp, int& assign)
{
    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
        firstOutOfOrder++)
    {
    
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            elemType temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;
            assign +=2; //plus 2 to assignment counter for swaping of the elements
            comp+=2;//plus 2 to comparison element. 

            do
            {
                list[location] = list[location - 1];
                location--;
                comp ++;        //plus 1 to both assignment and comparison counters each time this loops is active.
                assign ++;
            } while (location > 0 && list[location - 1] > temp);

            list[location] = temp;
            
        }

    }
} //end insertionSort




