#include <iostream>
using namespace std;

int main(){
    float pennies ;
    float nickel;
    float dime;
    float quartet;
    float dollar;

    cout<<"Eenter your pennies number: \n";
    cin>> pennies;

    cout<<"Eenter your nickel number: \n";
    cin>> nickel;

    cout<<"Eenter your dime number: \n";
    cin>> dime;

    cout<<"Eenter your quarter number: \n";
    cin>> quartet;

    cout<<"Eenter your dollar number: \n";
    cin>> dollar;

    double totalPennies= pennies * 1 + nickel * 5 + dime * 10 + quartet * 25 + dollar * 100;
    double totalDollars=  totalPennies / 100;

    cout<< "Your Pennies is = " << totalPennies<<endl;
    cout<< "Your dollar is = " << totalDollars<<endl; 
}