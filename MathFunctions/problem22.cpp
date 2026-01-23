#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a , b;
    const float pi = 3.14;

    cout<<"Please enter your first num :\n";
    cin>> a;

    cout<<"Please enter your seconde num :\n";
    cin>> b;

    double areaOfTheInscribedInAnIsoscelesTriangle = (floor(pi * pow(b,2) / 4) * ((2 * (a - b)) / (2 * (a + b)))) ;

    cout<< areaOfTheInscribedInAnIsoscelesTriangle;

}