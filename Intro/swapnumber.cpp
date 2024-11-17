//Swap 2 numbers using third variable
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    a=7;
    b=5;
    cout<<"Before swapping "<<endl;
    cout<<"\tA = "<<a<<"\tB = "<<b<<endl;
    //Now
    c=a;
    a=b;
    b=c;
    cout<<"After swapping "<<endl;
    cout<<"\tA = "<<a<<"\tB = "<<b<<endl;
    return 0;
}