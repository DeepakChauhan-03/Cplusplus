//WAP to count even digits
#include<iostream>
using namespace std;
int main(){
    int n,count=0,r;
    cout<<"Enter any number: ";
    cin>>n;
    while(n!=0){
        r=n%10;
       if(r%2==0){
        count++;
       }
       n=n/10;
    }
    cout<<"Number of even digits are: "<<count;
    return 0;
}