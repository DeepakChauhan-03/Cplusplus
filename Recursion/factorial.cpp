//WAP to print factorial using recursion
#include<iostream>
using namespace std;
int factorial(int);

int factorial(int n){
    if(n==0){  //Base Condition
        return 1;
    }
    else{   //Recursive Case
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Factorial is : "<<factorial(n);
    return 0;
}