#include <iostream>

using namespace std; 

int main(){
    string s = "";
    bool isPalindrome = true;
    cout << "Insert a palindrome: "<< endl;
    cin >> s;

    const int stringLength = s.length();
    for (int i = 0; i < stringLength; i++){
        int j = (stringLength - 1) - i;
        if (i >= j) break;
        if (s[i] != s[j]){
            isPalindrome = false;
            break;
        }
        
    }

    if (isPalindrome){
        cout << s << " Is a palindrome";
    } else {
        cout << s << " Is not a palindrome";
    }

    return 0;
}