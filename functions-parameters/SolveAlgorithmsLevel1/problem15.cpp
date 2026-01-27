#include <iostream>
using namespace std;

int rectangleArea(int a, int b){

    return a * b;
}

int main(){
    int a, b;

    cout<< "Enter your first number:\n ";
    cin>>a;

    cout<< "Enter your second number:\n ";
    cin>>b;

    cout<< " The rectangle Area is = "<< rectangleArea(a , b);
}