#include <iostream>
using namespace std;

void readUserInfo(int &userGrade1,int &userGrade2,int &userGrade3){

    cout<<"Please enter your grade1: \n";
    cin>>userGrade1;

    cout<<"Please enter your grade2: \n";
    cin>>userGrade2;

    cout<<"Please enter your grade3: \n";
    cin>>userGrade3;
}
int avgGrade(int userGrade1,int userGrade2,int userGrade3){
    int avg = (userGrade1 + userGrade2 + userGrade3) / 3; 
    return avg ;
}

int main(){
    int userGrade1, userGrade2,userGrade3;
    readUserInfo(userGrade1, userGrade2,userGrade3);

    cout<<"The avrage of your mark is : "<< avgGrade(userGrade1, userGrade2,userGrade3)<<endl;

    if(avgGrade(userGrade1, userGrade2,userGrade3) >= 50){
        cout<<"Pass";
    }
    else{
       cout<<"fail";
    }

    return 0;
}

