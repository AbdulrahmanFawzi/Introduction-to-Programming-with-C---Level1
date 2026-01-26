#include <iostream>
using namespace std;

int myfunction(){

    int a , b;

    cout<< "Please enter your first number:\n ";
    cin>> a;

    cout<< "Please enter your second number:\n ";
    cin>> b;

    double result = a + b;

    
    cout<< result;
    return result;
}

int main(){
     myfunction();
}