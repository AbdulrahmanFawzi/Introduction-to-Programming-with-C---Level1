#include <iostream>
using namespace std;

void readGrade(int grade[3]){
    
    cout<<"Please enter your first grade: \n";
    cin>> grade[0];

    cout<<"Please enter your second grade: \n";
    cin>> grade[1];

    cout<<"Please enter your third grade: \n";
    cin>> grade[2];
}

float avgGrade(int grade[3] ){
    return (grade[0] + grade[1] + grade[2]) / 3;

}

int main(){
    int grade[3];

    readGrade(grade);
    cout<<"The avrage of your grades is = "<< avgGrade(grade);

}
