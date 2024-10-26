#include <iostream>

using namespace std; 

int main(){
    int x = 0;
    int y = 0;
    cout << "What dimensions do you want in your 2d array? " << endl; 
    cout << "X: " << endl;
    cin >> x;
    cout << "Y: " << endl;
    cin >> y;

    int** arr = new int*[y];
    for(int i = 0; i < x; i++){
        *(arr+i) = new int;
        for (int j = 0; j < y; j++){
            *(*(arr+i) + j) = 0;
        }
    }


    for(int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cout <<  *(*(arr+i) + j) << " ";
        }
        cout << endl;
    }


    return 0;
}