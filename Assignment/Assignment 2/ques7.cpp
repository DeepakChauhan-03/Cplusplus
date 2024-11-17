//Wap to print sum and average of 5 numbers
#include<iostream>
using namespace std;
int main(){
    float a1,a2,a3,a4,a5,sum,avg;
    cout<<"Enter the number a1: ";
    cin>>a1;
    cout<<"Enter the number a2: ";
    cin>>a2;
    cout<<"Enter the number a3: ";
    cin>>a3;
    cout<<"Enter the number a4: ";
    cin>>a4;
    cout<<"Enter the number a5: ";
    cin>>a5;
    sum = a1+a2+a3+a4+a5;
    avg=(a1+a2+a3+a4+a5)/5;
    cout<<"Sum of given 5 numbers is: "<<sum<<endl;
    cout<<"The Average is: "<<avg;
   return 0;
}