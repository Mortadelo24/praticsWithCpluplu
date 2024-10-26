#include <iostream>

using namespace std; 

int main(){
    int* selection = new int();
    
    int* number1 = new int(); 
    int* number2 = new int();

    cout << "Insert number 1: " << endl; 
    cin >> *number1;

    cout << "Insert number 2: " << endl;
    cin >> *number2; 

    while(true){
        cout << "What do you want to do? \n 1.add them up \n 2.rest them \n 3.multiply them \n 4. divide them \n You can insert 0 to exit." << endl;
        cin >> *selection;
        switch (*selection){
            case 0:
                break;
            case 1: 
                cout << "The sum is: " << *number1 + *number2;
                break;
            case 2:
                cout << "The rest is: " << *number1 - *number2;
                break;
            case 3:
                cout << "The multiplication is: " << *number1 * *number2; 
                break;
            case 4:
                cout << "The division is: " << (float) *number1 / *number2;
                break;
            default: 
                continue;
        }
        break;
    }
    


    return 0;
}