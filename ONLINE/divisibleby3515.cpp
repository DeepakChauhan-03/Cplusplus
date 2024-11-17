//check that given number is divisible by 5 or 3 but not by 15
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if((n%3==0 || n%5==0) && (n%15!=0)){
        cout<<"The given number is divisible by 3 or 5 but not by 15";
    }
    else{
        cout<<"It is also divisible by 15";
    }
    return 0;
}