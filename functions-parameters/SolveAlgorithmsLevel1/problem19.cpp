#include <iostream>
#include <cmath>
using namespace std;

int circleArea(float d , float pi = 3.14){
    return (pow(d,2) * pi) /4;
}

int main(){
    float d;
    const float pi = 3.14;

    cout<<"Please enter your diameter num :\n";
    cin>> d;

    cout<< "The area of your circle is : " << circleArea(d,pi);

}