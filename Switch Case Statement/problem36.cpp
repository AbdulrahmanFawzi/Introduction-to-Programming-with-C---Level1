#include <iostream>
using namespace std;

void readUserNum(int &num1, int &num2, char &opreationType){

    cout<<"Please enter your first number\n";
    cin>> num1;

    cout<<"Please enter your second number\n";
    cin>> num2;

    cout<<"Please enter your opreation type\n";
    cin>> opreationType;
}

int main(){
    int num1;
    int num2;
    char opreationType;

    readUserNum( num1 ,num2 ,opreationType);

    switch (opreationType)
    {
    case '+':
        cout<< num1 + num2;
        break;

    case '*':
        cout<< num1 * num2;
        break;
    
    case '-':
        cout<< num1 - num2;
        break;
    
    case '/':
        cout<< num1 / num2;
        break;
    
    default:
        cout<<"Incorrect opreation type";
        break;
    }
}