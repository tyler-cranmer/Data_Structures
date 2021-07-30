#include "myArray.h"
#include <iostream>
#include "assert.h"

using namespace std;

//constructor for object that takes in two parameters
myArray::myArray(int indexS, int indexE)
{
	length = indexE - indexS; //set the length of the array
	indexStart = indexS; //set the starting array location
	indexEnd = indexE - 1; //set the ending array location 
	list = new int[length]; //creating the array and setting the list to the new length of array.

	for (int i = indexStart; i <= indexEnd; i++) //initiallizing the elements within the array and setting each element to 0
	{
		*(list + i) = 0;
	}
}

//constructor for the object that takes in one parameter
myArray::myArray(int arrayLength)
{
	length = arrayLength; //set the length of the array
	indexStart = 0; //set the starting array location
	indexEnd = arrayLength - 1; // set the ending array location
	list = new int[length]; //creating the array and setting the list to the new length of array

	for (int i = indexStart; i <= indexEnd; i++)//initiallizing the elements within the array and setting each element to 0
	{
		*(list + i) = 0;
	}
}

 int& myArray::operator[](int index) //overloading array index
{
	if (index >= indexStart && index <= indexEnd) //check to see if its within bounds
	{
		int &indexLoc = *(list + index); //set memeory location to store actual value of the list index.
		return indexLoc;
	}
	else
	{
		cout << "Index is out of range.\n";
		exit(0);
	}
}

