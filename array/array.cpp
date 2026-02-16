#include <iostream>
using namespace std;

int main(){

    int grade[3];

    cout<<"Please enter your first grade: \n";
    cin>> grade[0];

    cout<<"Please enter your second grade: \n";
    cin>> grade[1];

    cout<<"Please enter your third grade: \n";
    cin>> grade[2];

    double avgGrade = (grade[0] + grade[1] + grade[2]) / 3 ;

    cout<<"*********************************\n";
    cout<<"The avrage of your grades is = "<< avgGrade;
    
}