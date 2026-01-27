#include <iostream>
#include <cmath>
using namespace std;

int rectangleArea(double a, double b){

    return a * sqrt(b * b - a * a) ;
}

int main(){
    double a, b;

    cout<< "Enter your first number:\n ";
    cin>>a;

    cout<< "Enter your second number:\n ";
    cin>>b;

    cout<< " The rectangle Area is = "<< rectangleArea(a , b);
}