#include <iostream>

using namespace std; 

int main(){
    int size; 
    int totalSum = 0;

    cout << "Enter the number of integers you wanna sum: ";
    cin >> size;

    for (int i = 0; i < size; i++){
        int numberToSum = 0;
        cin >> numberToSum;
        totalSum += numberToSum;
    }

    cout << "The total sum is: " << totalSum;

    return 0;
}
