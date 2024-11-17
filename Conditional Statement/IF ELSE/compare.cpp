//Example of if
#include<iostream>
using namespace std;
int main(){
       int n1,n2;
       cout<<"Enter the first number: ";
       cin>>n1;
       cout<<"Enter the second number: ";
       cin>>n2;
       if(n1>n2){
       cout<<"Number 1 is greater "<<endl;
       cout<<"This is if 1"<<endl;
       }
       if(n1<n2){
        cout<<"Number 2 is greater"<<endl;
        cout<<"This is if 2"<<endl;
       }
       if(n1==n2){
        cout<<"Number 1 equals to number 2"<<endl;
        cout<<"This is if 3";
       }
       return 0;
}