#include <iostream>
using namespace std;

struct personAddress
{
    int phone;
    string address;
};


struct person
{
    string name;
    int age;
    string city;
    string country;
    int monthlySalary;
    char gender;
    bool married;
    personAddress address;
};

int main(){

    person person;

    cout << "enter your name please : \n";
    cin >> person.name;

    cout << "enter your age please : \n";
    cin >> person.age;

    cout << "enter your city please : \n";
    cin >> person.city;

    cout << "enter your country please : \n";
    cin >> person.country;

    cout << "enter your month salary please : \n";
    cin >> person.monthlySalary;

    cout << "enter your gender please : \n";
    cin >> person.gender;

    cout << "Are you married? \n";
    cin >> person.married;

    cout<<"enter your phone\n";
    cin>> person.address.phone;

    cout<<"enter your address\n";
    cin>> person.address.address;

    cout << "************************\n";
    cout << "name:" << person.name << endl;
    cout << "Age : " << person.age << " Years" << endl;
    cout << "City: " << person.city << endl;
    cout << "Country: " << person.country << endl;
    cout << "Monthly Salary: " << person.monthlySalary << endl;
    cout << "Yearly Salary: " << person.monthlySalary * 12 << endl;
    cout << "Gender: " << person.gender << endl;
    cout << "Married: " << person.married << endl;
    cout<<"Phone : " << person.address.phone<<endl;
    cout<<"Address : " << person.address.address<<endl;
    cout << "************************\n";

}
