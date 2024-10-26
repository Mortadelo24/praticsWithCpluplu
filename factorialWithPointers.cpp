#include <iostream>

using namespace std; 

int factorial(int* number) {
    if (*number == 1 || *number == 0) return 1;
    int nextNumber = *number - 1;
    return *number * factorial(&nextNumber);
}

int main(){
    int number = 0; 

    cout << "Insert number: " << endl;
    cin >> number;

    cout << "The factorial of " << number << "is: " << factorial(&number); 

    return 0;
}