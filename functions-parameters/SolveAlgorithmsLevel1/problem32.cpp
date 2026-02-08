#include <iostream>
#include <cmath>
using namespace std;

float powerOfNum(float a , float b){
    return pow(a,b);
}
int main (){
    int a , b;

    cout<< "Enter your number\n";
    cin>> a;

    cout<< "Enter your number\n";
    cin>> b;

    cout<< "The result of the powr is = " << powerOfNum(a,b);
}
