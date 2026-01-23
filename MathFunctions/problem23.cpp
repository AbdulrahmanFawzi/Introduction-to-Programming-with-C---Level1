#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b , c;
    const float pi = 3.14;

    cout << "enter your first number please : \n";
    cin >> a;

    cout << "enter your second number please : \n";
    cin >> b;

    cout << "enter your third number please : \n";
    cin >> c;

    float p = (a + b + c) / 2;

    double areacircleDescribedAroundAnArbitraryTriangle = pi * (pow((a * b * c) / 4 * sqrt(p * (p - a) * (p - b) * (p - c)),2));

    cout<< areacircleDescribedAroundAnArbitraryTriangle;


}