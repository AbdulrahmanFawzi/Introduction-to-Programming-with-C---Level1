#include <iostream>
using namespace std ;

int main (){

    string name;
    int age;
    string city;
    string country;
    int monthlySalary;
    char gender;
    bool married;
    int a ;
    int b;
    int c; 


    cout << "enter your name please : \n";
    cin >> name;

    cout << "enter your age please : \n";
    cin >> age;

    cout << "enter your city please : \n";
    cin >> city;

    cout << "enter your country please : \n";
    cin >> country;

    cout << "enter your month salary please : \n";
    cin >> monthlySalary;

    cout << "enter your gender please : \n";
    cin >> gender;

    cout << "Are you married? \n";
    cin >> married;

    cout << "enter your first number please : \n";
    cin >> a;

    cout << "enter your second number please : \n";
    cin >> b;

    cout << "enter your third number please : \n";
    cin >> c;

    int sum = a + b + c ;

    cout << "Total = "<< sum << endl;

    cout << "************************\n";
    cout << "name:" << name << endl;
    cout << "Age : " << age << " Years" << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Yearly Salary: " << monthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << married << endl;
    cout << "************************\n";

    return 0 ;
}