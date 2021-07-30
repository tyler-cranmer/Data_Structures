
// ConsoleApplication3.cpp : This function rearanges / flips the elements of the array.
//

#include<iostream>
using namespace std;

void flip(int list[], int size);

int main()
{
    int list1[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int i;
    int lSize = size(list1);

    cout << "Your initial List is: ";
    for (i = 0; i < lSize; i++)
        cout << list1[i] << " ";

    cout << endl;

    flip(list1, lSize);

    cout << "The new list in ascending order is: ";
    for (i = 0; i < lSize; i++)
    {
        cout << list1[i] << " ";
    }

    cout << endl;
    system("pause");
    return 0;


}


void flip(int list[], int size) // takes in an array and size. Then flips the order around.
{
    int mid = size / 2;
    int temp;

    for (int i = 0; i <= mid; i++)
    {
        temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
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
