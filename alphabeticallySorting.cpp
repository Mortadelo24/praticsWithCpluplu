#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size = 0;

    cout << "How many strings do you want to sort: ";
    cin >> size;

    string *arr[size];

    for (int i = 0; i < size; i++)
    {
        string mappingString = "";
        cin >> mappingString;
        arr[i] = new string(mappingString);
    }

    int index = 0;

    while (index < size)
    {
        if (index < 1){
            index++;
            continue;
        }
            
        if ((*arr[index])[0] < (*arr[index - 1])[0])
        {
            string *cache = arr[index];

            arr[index] = arr[index-1];
            arr[index-1] = cache;

            index = 0;
            continue;
        }

        index++;
    }

    cout << "\nYour sorted list is: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << *(arr[i]) << endl;
    }

    return 0;
}