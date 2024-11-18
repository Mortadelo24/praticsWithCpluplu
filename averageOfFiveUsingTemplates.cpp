#include <iostream>

using namespace std;

template<class T, class T1, class T2, class T3, class T4>
double average(T num1, T1 num2, T2 num3, T3 num4, T4 num5  ){
  return (num1 + num2 + num3 + num4 + num5) / 5; 
}



int main(){
  int numbers[5];
  for (int i; i < 5; i++){
    cout << "Enter rnteger number " << i + 1 << endl;
    cin >> numbers[i];
  }
  cout << "Your average is: " << endl;
  cout << average(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]) << endl;
  
  return 0;
}
