//WAP to print odd even number by using switch statement
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Any Number: ";
    cin>>n;
    switch (n%2)
    {
    case 0: cout<<"Even Number";
        break;
    
    case 1: cout<<"Odd Number";
        break;
    }
    return 0;
}