//WAP to check given number is even or odd using Ternary Operator
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    (n%2==0)? cout<<"EVEN NUMBER": cout<<"ODD NUMBER";
    return 0;
}