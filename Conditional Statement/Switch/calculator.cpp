//WAP for calculator by using switch statement
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"Enter the operation you want to perform: ";
    cin>>op; 
    switch(op){
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
        case '%': cout<<a%b;
        break;
    }
    return 0;
}