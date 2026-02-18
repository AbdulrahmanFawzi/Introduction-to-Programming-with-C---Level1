#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cout<<"Please enter number: \n";
    cin>> n;

    for(int i = 1 ; i <= n ; i++ ){
        if(i % 2 ==0){
         sum +=i;
        }
        
    }
    cout<<"The even result is = "<< sum;
}