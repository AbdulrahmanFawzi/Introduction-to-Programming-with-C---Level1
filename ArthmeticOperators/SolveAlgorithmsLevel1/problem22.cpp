#include <iostream>
using namespace std;

int main(){

    int a, b ;
    const float pi = 3.14;

    cout<< "Enter your first number\n";
    cin>> a;

    cout<< "Enter your seconde number\n";
    cin>> b;

    double areaOfTheCircleArea = ((pi * b * b /4)) * ((2 * a - b ) / (2 * a + b)) ;

    cout<<"The result of The Circle Area is = "<< areaOfTheCircleArea;


}