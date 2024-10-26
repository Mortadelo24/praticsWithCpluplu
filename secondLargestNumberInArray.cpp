#include <iostream>

using namespace std;

int main (){
    int size = 0;
    int largestInt = size;
    int secondLargestInt = largestInt;

    cout << "How many elements do you wanna use? ";
    cin >> size;

    for (int i = 0; i < size; i++){
        int number = 0;
        cin >> number;
        if (number > largestInt){
            secondLargestInt = largestInt;
            largestInt = number;
        }
    }

    cout << secondLargestInt << " is the second largest int";

    return 0;
}

