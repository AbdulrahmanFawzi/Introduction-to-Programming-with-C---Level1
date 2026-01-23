#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b ;

    cout << "enter your base number please : \n";
    cin >> a;

    cout << "enter your exponent number please : \n";
    cin >> b;

    double result = round(pow(a,b));

    cout<< "The result is = " << result;
}