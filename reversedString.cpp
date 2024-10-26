#include <iostream>

using namespace std; 

int main(){
    string str = "";

    cout << "Insert the string that you wanna reverse: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++){
        int j = str.length() - i;
        if (i == j) break; 
        char cacheChar = str[i];
        str[i] = str[j];
        str[j] = cacheChar;

        
    }

    cout << "Your reversed string is: \n" << str; 

    return 0;
}