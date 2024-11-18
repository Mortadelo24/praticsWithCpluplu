#include <iostream>

using namespace std;

class Student {
public:
  int rollNumber;
  string name;
  int branch;

  Student(int  newRollNumber, int newBranch, string newName){
    rollNumber = newRollNumber;
    branch = newRollNumber;
    name = newName;
  }
  void* operator new(size_t size){
    return malloc(size); 
  }
  void operator delete(void* ptr){
    free(ptr);
  }
};

int main(){
  Student* student = new Student(2, 3, "AAAAAA");
  delete student;
  return 0;
}
