#include <iostream>
#include <cmath>

using namespace std; 

void sort(int* arr, int size){
    int index = 0; 
    while (index<size){
        if (index < 1){
            index++;
            continue;
        }

        if (*(arr+index) < *( arr + (index-1) )){
            int temp = *(arr+index);
            *(arr+index) = *(arr+(index-1));
            *(arr+(index-1)) = temp;
            index = 0;
            continue;
        }
        index++;
    }
    
}

int* binarySearch(int* arr, int target, int start , int end){
    int middleIndex = ceil((end-start)/2);
    int currentNumber = *(arr+(start+middleIndex));
    cout << middleIndex << endl << currentNumber << endl;
    if(currentNumber > target){
        return binarySearch(arr, target, start, middleIndex-1);
    }else if(currentNumber < target){
        return binarySearch(arr, target, middleIndex+1, end);
    } else if (currentNumber == target){
        return arr+middleIndex;
    }
    return nullptr;
}

int* find(int* arr, int size,  int target){
    sort(arr, size);
    return binarySearch(arr, target, 0 ,size-1);
}

int main( ){
    int *arr = new int();
    int size = 0;
    int elementToFind;

    cout << "How many integers do you wanna store? " << endl;
    cin >> size; 

    cout << "Insert your integers: " << endl;
    for (int i = 0; i < size; i++){
        cin >> *(arr + i); 
    }

    cout << "What do you wanna find? " << endl;
    cin >> elementToFind; 

    int* result =  find(arr, size, elementToFind);

    cout << "This was the pointer and value that were found: " << result << " " << *result << endl;

    return 0;
}