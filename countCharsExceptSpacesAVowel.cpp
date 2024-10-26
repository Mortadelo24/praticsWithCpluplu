#include <iostream>
#include <set>

using namespace std;

int main(){
    string str = "";
    int counter = 0;
    set<char> unAllowedChars = {' ', 'a', 'e', 'i', 'o', 'u'};

    cout << "Insert String: \n";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++){
        if (unAllowedChars.count(str[i]) > 0) continue;
        counter++;
    }

    cout << "There are " << counter << " Allowed chars";

    return 0; 
}