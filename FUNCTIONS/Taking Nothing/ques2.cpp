//WAP to print factorial of given number
#include<iostream>
using namespace std;
void fact();
void fact(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int a=1;
    cout<<"Factorial of given number is : ";
    for(int i=1; i<=n; i++){
        a=a*i;
    }
    cout<<a;
}
int main(){
    fact();
    return 0;
}