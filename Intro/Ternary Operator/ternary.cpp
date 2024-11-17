//Ternary operator
//Expression 1? Expression 2: Expresion 3;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    (n>0)? cout<<"This is a positive number" : cout<<"This is a negative number";
    return 0;
}