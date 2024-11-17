//WAP to print greatest of three input numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"The greatest is: "<<a;
    }
    else if(b>a && b>c){
        cout<<"The greates is: "<<b;
    }
    else{
        cout<<"The greates is: "<<c;
    }
    return 0;
}