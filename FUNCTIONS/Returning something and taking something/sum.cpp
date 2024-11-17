//WAP to add number
#include<iostream>
using namespace std;
int addition(int,int);

int addition(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int n1,n2,n3;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    n3=addition(n1,n2);
    cout<<"Addition is: "<<n3;
    return 0;
}