//WAP to check given number is Armstrong or not
#include<iostream>
using namespace std;
int main(){
    int n,count =0,r,sum=0;
    int m=n;
    int rn=m;
    cout<<"Enter any number:";
    cin>>n;
    while(n!=0){
        n=n/10;
        count++;
    }
   while(m!=0){
    r=m%10;
    if(count==3){
        sum=sum+(r*r*r);
    }
    if(count==4){
        sum=sum+(r*r*r*r);
    }
    m=m/10;
   }
    if(rn==sum){
        cout<<"This is a Armstrong number";
    }
    else{
        cout<<"This is not a Armstrong Number";
    }
    return 0;
}