#include <iostream>
using namespace std;

void swap (int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap the number inside the swap function A = "<<a<< "and B = "<< b<< endl; 
}

int main(){
    int a ;
    int b;

    cout<< "Please enter your First Number : \n";
    cin>>a;

    cout<< "Please enter your Second Number : \n";
    cin>>b;


    swap(a,b);

     cout << "After swap the number inside the main function A = "<<a<< "and B = "<< b<< endl; 
}