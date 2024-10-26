#include <iostream>

using namespace std;

int main()
{
    string *arr = new string[255];
    int arrSize;
    string *largestElementPointer = new string("");

    cout << "How many items do you want to store? ";
    cin >> arrSize;

    for (int i = 0; i < arrSize; i++)
    {
        cin >> *(arr + i);
    }

    for (int i = 0; i < arrSize; i++)
    {
        string item = *(arr + i);
        if (item.length() > (*largestElementPointer).length())
        {
            largestElementPointer = &item;
        }
    }

    cout << *largestElementPointer << " is the largest element in the array";

    return 0;
}