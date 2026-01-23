#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int a;

    cout<< "Enter your number\n";
    cin>> a;

    cout<< "The result of the number ^ 2 = " << (round(pow(a, 2))) << endl ;
    cout<< "The result of the number ^ 3 = " << (round(pow(a, 3))) << endl ;
    cout<< "The result of the number ^ 4 = " <<(round(pow(a, 4))) << endl ;
}