#include <iostream>
using namespace std;

void readUserAge(int &userAge){

    cout<<"Please enter your Age: \n";
    cin>>userAge;
}

string validateAge(int userAge){

    if(userAge >= 18 && userAge <= 45){
        return "Valid Age";
    }
    else{
        return "Invalid Age";
    }

}

int main (){
    int userAge;

    readUserAge(userAge);

    cout<<validateAge(userAge);
}
