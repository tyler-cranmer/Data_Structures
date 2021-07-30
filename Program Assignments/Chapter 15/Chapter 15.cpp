/* 
George Tyler Cranmer 
Chapter 15 Program on Recursion

This program takes in a string from the user and checks to see if that string is a palindrome. 
The method used to check if the string is a palindrome is through recursion. 

*/

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string &string1, int fIndex, int lIndex);

int main()
{
    string string1;
    cout << "Please enter your string: ";
    cin >> string1;

    if (isPalindrome(string1, 0, string1.length() - 1) == 1)
    {
        cout << string1 << " is a palindrome." << endl;
    }
    else
    {
        cout << string1 << " is not a palindrome." << endl;
    }

    system("pause");
    return 0;
}

bool isPalindrome(const string &string1, int fIndex, int lIndex)
{
    if (fIndex >= lIndex) //Checks if the first letter of the string is the same with the last letter.
    {
        return true;
    }
    else if (string1[fIndex] != string1[lIndex]) //if the first letter of the string doesnt match the last letter the string is not a palindrome; return false
                                                // when called again, the statement will check if the next index in the string matches last index -1.
    {
        return false;
    }
    else

        return isPalindrome(string1, ++fIndex, --lIndex); //call on the function again, adding 1 to the first index and subtracting 1 from the last index. 
                                                          //checking inward from the edges of the string until complete. 
};

