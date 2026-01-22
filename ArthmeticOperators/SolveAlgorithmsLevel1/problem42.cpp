#include <iostream>
using namespace std;

int main(){
    float days;
    float hours;
    float minites;
    float seconds;

    cout<< "enter The days of the time duration Please";
    cin>> days;

    cout<< "enter The hours of the time duration Please";
    cin>> hours;

    cout<< "enter The minites of the time duration Please";
    cin>> minites;

    cout<< "enter The seconds of the time duration Please";
    cin>> seconds;

    double daysOfTheTimeDuration = days * 0.86400;
    double hoursOfTheTimeDuration = hours * 0.3600;
    double minOfTheTimeDuration = minites * 0.60;
    double secondsOfTheTimeDuration = seconds + daysOfTheTimeDuration + hoursOfTheTimeDuration + minOfTheTimeDuration;

    cout<< "The total of the time duration is = "<< secondsOfTheTimeDuration;


}