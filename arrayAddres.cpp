#include <iostream>

using namespace std; 

int main(){
    int size = 0;
    string* arr = new string[255];

    cout << "How many items do you wanna store? " << endl; 
    cin >> size;

    for (int i = 0; i < size; i++){
        cin >> *(arr+i);
    }

    cout << "These are your items: " << endl;

    for (int i = 0; i < size; i++){
        cout << arr+i << " " << *(arr+i) << endl;
    }

    return 0; 
}