#include <iostream>
using namespace std;

void readUserPin(int &userPin){

    cout<<"Please enter your PIN: \n";
    cin>>userPin;
}

string checkUserPin(int userPin){
    int correctUserPin = 1234;
    int userBalance = 7500;

    if(userPin == correctUserPin){
        
      string result = "Your account balance is = " + to_string(userBalance);
        return result;
    }
    else{
        return "Wrong PIN";
    } 
}

int main(){
    int userPin;
   

    readUserPin(userPin);

    cout<< checkUserPin(userPin);
}