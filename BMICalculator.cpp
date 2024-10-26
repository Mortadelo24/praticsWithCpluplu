#include <iostream>

using namespace std; 

float calculate(float* weight, float* height){
    return *weight / (*height * *height);
}

int main(){
    float weight;
    float height; 

    cout << "Enter your weight in (kg): " << endl;
    cin >> weight;

    cout << "Enter your height in (m^2): " << endl;
    cin >> height;

    cout << "Your BMI is: " << calculate(&weight, &height);

    return 0;
}