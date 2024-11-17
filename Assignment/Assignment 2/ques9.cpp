//WAP to take three input from user and check whether the input is in increasing order , decreasing order
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    int b;
    cout<<"Enter second number: ";
    cin>>b;
    int c;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b && a>c && b>c){
            cout<<"Decreasing order";
    }
    else if(a<b && a<c && b<c){
            cout<<"Increasing order";
    }
    else{
        cout<<"Neither increasing or decreasing.";
    }
    return 0;
}