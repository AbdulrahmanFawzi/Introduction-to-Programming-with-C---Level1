#include <iostream>
using namespace std;

struct userInfo{
    int age;
    bool userLicense;
};

void readUserInfo(userInfo &person1){

    cout<<"Please enter your age: \n";
    cin>>person1.age;

    cout<<"Do You have License? \n";
    cin>>person1.userLicense;
}

int hiredaDriver(userInfo &person1){
    if(person1.age >= 21 && person1.userLicense){
        cout<< "You are Hired";
    }
    else {
        cout<<"You are rejecterd";
    }

    return 0 ;
}

int main(){
    userInfo person1;

    readUserInfo(person1);
    hiredaDriver(person1);

}