#include <iostream>

using namespace std; 

void swap(int* a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){

    int number1 = 5;
    int number2 = 9;

    cout << "Before swap " << endl; 
    cout << number1 << endl << number2 << endl;

    swap(&number1, &number2);

    cout << "After swap " << endl; 
    cout << number1 << endl << number2 << endl;

    swap2(number1, number2);

    cout << "After returning to normal: " << endl; 
    cout << number1 << endl << number2 << endl;

    return 0; 
}