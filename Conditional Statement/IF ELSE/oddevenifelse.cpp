//WAP to print odd or even number by using if and else
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0){
        cout<<"Even Number";
    }
    else{
        cout<<"Odd Number";
    }
    return 0;
}