#include <iostream>
#include <cmath>
using namespace std;

float circleArea( float l , float pi = 3.14){
    return pow(l,2) / (4 * pi);
}

int main (){
    float l ;
    const float pi = 3.14;

    cout<<"Please enter your l num :\n";
    cin>> l;

    cout<< "The area of your circle along the circumference is : " << circleArea(l , pi) ; 
    
}