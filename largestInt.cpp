#include <iostream>

using namespace std;

int main(void) {
    int arraySize;
    int largestInt = 0;

    cout << "\n\nHow many integers do you want to storage? " << endl;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++){
        cin >> array[i];
    }

    for (int i = 0; i < arraySize; i++){
        if (array[i] > largestInt)
        largestInt = array[i];
    }

    cout << "The largest Integer is: " << largestInt;

    return 0;
}