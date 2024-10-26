#include <iostream>

using namespace std;

int main(){
    int selection = 0;

    cout << "what do you wanna do?\n1. Sum two numbers\n2. Subtract two numbers\n3. Multiply two numbers\n4. Divide two numbers\n5. exit\n";
    while (selection < 1 || selection > 5){
        cin >> selection;
    }

    cout << "Your selection is: " << selection; 



    return 0;
}