//Pre Decrement operator 
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    a=10;
    b=20;
    cout<<"Before Pre Increment: "<<"A: "<<a<<"\tB: "<<b<<endl;
    c=--a;
    d=--b;
    cout<<"After Pre Increment: "<<"A: "<<a<<"\tB: "<<b<<endl;
    cout<<"After Pre Increment: "<<"C: "<<c<<"\tD: "<<d<<endl;
    return 0;
}