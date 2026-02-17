#include <iostream>
using namespace std;

void readUserInfo(int &userGrade){

    cout<<"Please enter your grade: \n";
    cin>>userGrade;
}

string calculateUserGrade(int userGrade){
    if(userGrade >= 50){
        return "pass";
    }
    else{
        return "fail";
    }
}

int main(){
    int userGrade;
    readUserInfo(userGrade);
    cout<<calculateUserGrade(userGrade);
}