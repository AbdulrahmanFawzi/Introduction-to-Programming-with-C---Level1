#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int r;
    const float pi = 3.14;

    cout<<"Please enter your number\n";
    cin>> r;

    double areaOfTheCircle = ceil((pow(r,2) * pi)) ;

    cout<< areaOfTheCircle;

    

}