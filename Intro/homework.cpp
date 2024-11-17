/*WAP to print sum of last digit of two numbers 
ex--no.1 = 123, no.2= 456 then output will be 3+6=9*/
#include<iostream>
using namespace std;
int main(){
    int a,b,a_last,b_last,sum;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    a_last = a%10;
    b_last = b%10;
    sum = a_last+b_last;
    cout<<"Sum of last digit of numbers is: "<<sum;
    return 0;
}