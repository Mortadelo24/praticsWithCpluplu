#include <iostream>

using namespace std;

int main(){
    string *pInputVariable = new string("");

    cout << "Insert a word: " << endl;
    cin >> *pInputVariable;

    cout << "Your word was stored in address " << pInputVariable << " with value: " << *pInputVariable << endl;  

    return 0; 
}