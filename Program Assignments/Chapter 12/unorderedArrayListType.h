#pragma once
#include "arrayListType.h"

class unorderedArrayListType : public arrayListType
{
public:
	void insertAt(int location, int insertItem);
	void insertEnd(int insertITem);
	void replaceAt(int location, int repItem);
	int seqSearch(int searchItem) const;
	void remove(int removeItem);
	int min() const;

	unorderedArrayListType(int size = 100);
};

