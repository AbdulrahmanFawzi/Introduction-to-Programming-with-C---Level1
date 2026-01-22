#include <iostream>
using namespace std;

int main(){
    float d;
    const float pi = 3.14;

    cout<<"Please enter your diameter num :\n";
    cin>> d;

    float areaOfTheCircle = (pi * (d * d))/4;

    cout<< "The area of your circle is : " << areaOfTheCircle;

}