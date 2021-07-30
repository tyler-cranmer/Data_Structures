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
        list1[i] = rand() % 100;
    }
}//end fillArray


template <class elemType>
void print(elemType list[], int length) //prints array
{
    for (int i = 0; i < length; i++)
    {
        cout << list[i] << " ";
    }

    cout << endl << endl;

}// end print

template <class elemType>
void insertionSort(elemType list[], int length)
{
    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
        firstOutOfOrder++)
    {

        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            elemType temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;

            do
            {
                list[location] = list[location - 1];
                location--;
              
            } while (location > 0 && list[location - 1] > temp);

            list[location] = temp;

        }

    }
} //end insertionSort