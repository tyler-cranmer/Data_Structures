#include "unorderedArrayListType.h"
#include <iostream>

using namespace std;

void unorderedArrayListType::insertAt(int location, int insertItem)
{
	if (location < 0 || location >= maxSize)
		cout << "The position of the item to be inserted is out of range." << endl;
	else if (length >= maxSize) 
		cout << "Cannot insert in a full list" << endl;
	else
	{
		for (int i = length; i > location; i--)
			list[i] = list[i - 1];

		list[location] = insertItem; 

		length++; 
	}
}

void unorderedArrayListType::insertEnd(int insertItem)
{
	if (length >= maxSize) 
		cout << "Cannote insert in a full list." << endl;
	else
	{
		list[length] = insertItem; 
		length++;
	}
}

void unorderedArrayListType::replaceAt(int location, int repItem)
{
	if (location < 0 || location >= length)
		cout << "The location of the item to be replaced is out of range." << endl;
	else
		list[location] = repItem;
}

int unorderedArrayListType::seqSearch(int searchItem) const
{
	int loc;
	bool found = false;

	loc = 0;
	while (loc < length && !found)
		if (list[loc] == searchItem)
			found = true;
		else
			loc++;
		
	if (found)
		return loc;
	else
		return -1;
}

void unorderedArrayListType::remove(int removeItem)
{
	int loc;

	if (length == 0)
		cout << "Cannot delete from an empty list." << endl;
	else
	{
		loc = seqSearch(removeItem);

		if (loc != -1)
			removeAt(loc);
		else
			cout << "The item to be deleted is not in the list." << endl;
	}
}

int unorderedArrayListType::min() const //function to find the min number in the array
{
	int temp = list[0]; // set temp value to the first element in the list array.

	for (int i = 0; i < length; i++) //Iterate through the array.
	{
		if (temp > list[i]) //test temp value against list[i]
			temp = list[i]; //set temp to list[i] if list is smaller than temp value.
	}
	return temp; // return smallest value.
}

unorderedArrayListType::unorderedArrayListType(int size) : arrayListType(size)
{

}
