//Check palindrome number
#include<iostream>
using namespace std;
void palindrome();
void palindrome(){
    int n;
    int rev=0,r;
    cout<<"Enter any number: ";
    cin>>n;
    int m=n;
    while(n!=0){
        r=n%10;
        rev = rev*10+r;
        n=n/10;
    }
    if(m==rev){
        cout<<"Palindrome number.";
    }
    else{
        cout<<"Not a Palindrome number.";
    }
}
int main(){
    palindrome();
    return 0;
}