#include <iostream>

using namespace std;

class Counter {
  public:
  int currentCounter;
  Counter(){
    currentCounter = 0;  
  }
  Counter(int newCounter){
    currentCounter = newCounter;
  }
  Counter& operator ++(){
    this->currentCounter++;
    return *this;
  }
  Counter& operator --(){
    this->currentCounter--;
    return *this;
  }
  Counter operator + (Counter& other){
    Counter resultingCounter;
    resultingCounter.currentCounter = this->currentCounter + other.currentCounter;

    return resultingCounter;
  }
  Counter operator - (Counter& other){
    Counter resultingCounter;
    resultingCounter.currentCounter = this->currentCounter - other.currentCounter;
    return resultingCounter;
  }
  void print(){
    cout << currentCounter << endl;
  }
};

int main(){
  Counter counter1(5);
  counter1.print();

  cout << "Sum One" << endl;
  ++counter1;
  counter1.print();

  cout << "Substract One" << endl;
  --counter1;
  counter1.print();

  Counter counter2(5);

  cout << "Sum a counter" << endl;

  (counter1 + counter2).print();

  cout << "Substract a counter" << endl;
  (counter1 - counter2).print();

  return 0;
}
