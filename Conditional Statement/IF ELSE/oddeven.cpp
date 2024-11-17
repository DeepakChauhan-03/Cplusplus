//WAP to check the given number is even or odd
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0){
        cout<<"Even Number";
    }
    if(n%2!=0){
        cout<<"Odd Number";
    }
    return 0;
}