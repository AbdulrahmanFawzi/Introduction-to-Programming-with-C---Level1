#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a;
    const float pi = 3.14;

    cout<<"Please enter your diameter num :\n";
    cin>> a;

    double areaOfTheCircle = ceil((pow(a,2) * pi) / 4);

    cout<< areaOfTheCircle;

}