#include <iostream>

using namespace std;

void swap(string *name){
    char temp = (*name)[0];
    (*name)[0] = (*name)[1];
    (*name)[1] = temp;

}


int main(){
    string* name = new string("");

    

    while (true){
        cout << "Insert a name: " << endl;
        cin >> *name; 
        if ((*name).length() > 1) break;
    }

    swap(name);

    cout << "Your name is: " << *name << endl;

    return 0;
}