#include <iostream>

using namespace std;

int main(){
    string letters = "";

    cout << "Insert string: ";
    getline(cin, letters);
 
    for (int i = 0; i < letters.length(); i++){
        cout << letters[i] << endl;
    }


    return 0;
}