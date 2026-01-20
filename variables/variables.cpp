#include <iostream>
using namespace std;

int main()
{
    string name = "Abdulrahman Fawzi";
    int age = 21;
    string city = "Macca";
    string country = "Saudi Arabia";
    int monthlySalary = 5000;
    char gender = 'M';
    bool married = true;
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

    int numbereA = 20;
    int numbereB = 30;
    int numbereC = 10;
    int sum = numbereA + numbereB + numbereC ; 
    cout << "20 +\n " << "30 +\n " << "10\n";
    cout << "Total = "<< sum;

    return 0 ;
}