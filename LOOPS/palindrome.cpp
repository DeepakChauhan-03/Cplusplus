//WAP to check given number is palindrome or not
#include<iostream>
using namespace std;
int main(){
     int n,rev=0,r;
    cout<<"Enter any number: ";
    cin>>n;
    int p=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(p==rev){
        cout<<"This is Palindrome number.";
    }
    else{
        cout<<"This is not a Palindrome number.";
    }
    return 0;
}