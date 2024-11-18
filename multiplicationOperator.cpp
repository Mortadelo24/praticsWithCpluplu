#include <iostream>

using namespace std;

class Coordenate{

	public:
	int x;
	int y;
	Coordenate(){
		x = 0;
		y = 0;
	}
	Coordenate(int newX, int newY){
		x = newX;
		y = newY;
	}
	friend Coordenate operator * (const Coordenate& coordenate1, const Coordenate& coordenate2){
		Coordenate resultingCoordenate(coordenate1.x * coordenate2.x, coordenate1.y * coordenate2.y);	
		return resultingCoordenate;
	}
};

int main(){

	Coordenate coordenate(5,5);
	Coordenate coordenate2(5,5);
	Coordenate result = coordenate * coordenate2;

	cout << "REsult: " << result.x << " " << result.y;
	return 0;
}
