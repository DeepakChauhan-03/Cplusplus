//WAP to take two float value input and check if it is same upto three decimal places or not
#include<iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter Second number: ";
    cin>>b;

   int c=a*1000;
   int d=b*1000;
    if(c==d){
        cout<<"They are same.";
    }
    else{
        cout<<"They are different.";
    }
    return 0;
}