#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int l ;
    const float pi = 3.14;

    cout<<"Please enter your l num :\n";
    cin>> l;

    double areaOfThecircle = (floor(pow(l , 2) / (4 * pi))) ;

    cout<< "The area of your circle along the circumference is : " << areaOfThecircle ; 
    
}