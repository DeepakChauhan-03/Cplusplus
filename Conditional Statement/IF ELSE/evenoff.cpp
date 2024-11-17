//WAP to find the given number is even or odd by using if statement
#include<iostream>
using namespace std;
int main(){
      int a;
      cout<<"Enter the number:";
      cin>>a;
      if(a%2==0){
        cout<<"Even Number";
      }
      if(a%2!=0){
         cout<<"Odd Number";
      }

    return 0;
}