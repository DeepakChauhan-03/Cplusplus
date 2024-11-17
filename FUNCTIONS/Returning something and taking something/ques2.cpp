//WAP to print factorial of a number
#include<iostream>
using namespace std;
int factorial(int);

int factorial(int x){
      int fact=1;
      for(int i=1; i<=x; i++){
        fact=fact*i;
      }
      return fact;
}
int main(){
    int x;
    cout<<"Enter any number: ";
    cin>>x;
    int a=factorial(x);
    cout<<"Factorial is: "<<a;
    return 0;
}