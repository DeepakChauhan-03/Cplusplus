//WAP to check number is palindrome or not
#include<iostream>
using namespace std;
int palindrome(int);

int palindrome(int x){
    int rev=0,r;
    int m=x;
    while(x!=0){
        r=x%10;
        rev = rev*10+r;
        x=x/10;
    }
    if(m==rev){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x;
    cout<<"Enter any number: ";
    cin>>x;
    int y=palindrome(x);
    if(y==1){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not palindrome number";
    }
    return 0;
    }