#include <iostream>

using namespace std;

class Coordenate {
public: 
  int x;
  int y;

  Coordenate(){
    this->x = 0;
    this->y = 0;
  }
  Coordenate(int newX, int newY){
    this->x = newX;
    this->y = newY;
  }
  Coordenate operator + (Coordenate& c2){
    Coordenate result;
    result.x = this->x + c2.x;
    result.y = this->y + c2.y; 
    return result;
  }
};


int main(){
  Coordenate test1(5,5);
  Coordenate test2(10,10);

  Coordenate result = test1 + test2;

  cout << "X: " << result.x << endl;
  cout << "Y: " << result.y << endl;


  return 0;
}
