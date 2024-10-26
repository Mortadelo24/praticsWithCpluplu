#include <iostream>

using namespace std; 

int main(){
    int* a = new int(5);
    int* b = new int(2);

    cout << "Sum is " << *a + *b << endl; 
    cout << "Rest is " << *a - *b << endl;
    cout << "Multiplication is " << *a * *b << endl;
    cout << "Division is " << (float) *a / *b << endl; 

    return 0; 
}