#include <iostream>
#include <cmath>
using namespace std;

float powerOfNum(float a){
    return a;
}
int main (){
    int a;

    cout<< "Enter your number\n";
    cin>> a;

    cout<< "The result of the number ^ 2 = " << powerOfNum(a * a) << endl ;
    cout<< "The result of the number ^ 3 = " << powerOfNum(a * a * a) << endl ;
    cout<< "The result of the number ^ 4 = " << powerOfNum(a * a * a *a) << endl ;
}