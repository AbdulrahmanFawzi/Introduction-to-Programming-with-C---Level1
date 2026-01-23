# include <iostream>
#include <string>
using namespace std;

int main(){

    string string1, string2, string3;

    cout<< "Please enter String1: ";
    getline(cin, string1);

    cout<< "Please enter String2: ";
    cin>> string2;

    cout<< "Please enter String3: ";
    cin>> string3;
    
    cout<< "*****************************\n";
    cout<< "The length of string1 is " << string1.length()<< endl;
    cout<< "Charactesrs at 0,1,2 are : "<< string1[0]<< string1[1]<< string1[2]<< endl;
    cout<< "concatenating string2 and string3 = "<< string2 + string3 <<endl;

    int num2_str = stoi(string2);
    int num3_str = stoi(string3);

    cout<< string2 << " * "<< string3 << " = " << num2_str * num3_str << endl;


}