#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 1;

    cout<<"Please enter number: \n";
    cin>> n;

    for(int i = 1 ; i <= n ; i++ ){
            sum= sum * i;
    }
    cout<<"The Factorial result is = "<< sum;
}