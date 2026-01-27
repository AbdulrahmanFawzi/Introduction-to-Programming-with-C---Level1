#include <iostream>
using namespace std;

void printName(){
    string name;

    cout<<"Please enter your name : ";
    getline(cin,name);

    cout<<"Welcome "<< name;
}

int main(){
    printName();
}