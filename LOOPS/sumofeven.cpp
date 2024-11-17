//WAP to print the sum of even digits
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r;
    cout<<"Enter any number: ";
    cin>>n;
    while(n!=0){
    r=n%10;
    if(r%2==0){
        sum=sum+r;
    }
    n=n/10;
    }
    cout<<"Sum of even numbers is: "<<sum;
    return 0;
}