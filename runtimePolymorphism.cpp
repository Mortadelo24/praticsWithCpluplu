#include <iostream>
#include <vector>

using namespace std; 


  class Animal {
    public:
      virtual void makeSound(){
        cout << "Generic sound" << endl;
      } 
      void printType(){
        cout << "This is a generic Animal" << endl;
      }
  };

  class Cat: public Animal {
    public:
      void makeSound () override{
        cout << "Miou" << endl;
      }
      void printType() {
        cout << "This is a Cat" << endl;
      }
  };
int main(){
  vector<Animal*> animals;
  animals.push_back(new Cat());

  for(Cat* animal : animals){
    animal->printType();
    animal->makeSound();
  }

  return 0;
  
}
