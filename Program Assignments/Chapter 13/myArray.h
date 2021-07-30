#pragma once


class myArray
{
public:
     myArray(int indexS, int indexE);
     myArray(int arrayLength);
    int& operator[] (const int index);
    
private:
    int* list;
    int length;
    int indexStart;
    int indexEnd;
    
};


