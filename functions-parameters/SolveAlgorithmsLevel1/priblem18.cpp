#include <iostream>
#include <cmath>
using namespace std;

int circleArea(int r , float pi = 3.14){

    return pi * pow(r,2);

}

int main(){
    int r;
    const float pi = 3.14;

    cout<<"Please enter your number\n";
    cin>> r;

    cout<< circleArea(r,pi);

}