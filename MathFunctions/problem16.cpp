#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a , b;

    cout<<"Please enter your first number\n";
    cin>> a;

    cout<<"Please enter your seconde number\n";
    cin>> b;

    double areaOfTheRectangle = (a * sqrt(pow(b,2) - pow(a,2)));

    cout<< areaOfTheRectangle;

}