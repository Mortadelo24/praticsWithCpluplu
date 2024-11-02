#include <iostream>

using namespace std;

class Student {
    
    private:
    string name;
    public:
    int roll_no;
    static int numSameObjects;
    Student(string nameToSet){
        this->name = nameToSet;
        this->roll_no = 2;
        numSameObjects++;
    }
    ~Student(){
        cout << "Deconstructing Object with name: " << this->name << endl;
        numSameObjects--;

    }
    void printName(){
        cout << this->name << endl;
    }
    static void printTotalObjects(){
        cout << "There are " << numSameObjects << " Objects" << endl;
    }
};

int Student::numSameObjects = 0;

int main(){
    Student john("Johno");
    john.printName();

    Student chango("Chango");
    chango.printName();

    Student tacpo("tacpo");
    tacpo.printName();

    Student* toDeleteObject = new Student("Este e para borrar");

    john.printTotalObjects();
    Student::printTotalObjects();

    toDeleteObject->printName();
    delete toDeleteObject;



    return 0;
}