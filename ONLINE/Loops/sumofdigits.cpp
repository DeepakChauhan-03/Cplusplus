//WAP to print the sum of digits of given input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    int sum  = 0;
    while(n>0){
        int lastdigit =n%10;
        n=n/10;
        sum = sum+lastdigit;
        
    }
    cout<<sum;
    return 0;
}