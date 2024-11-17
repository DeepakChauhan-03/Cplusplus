//goto statement
#include<iostream>
using namespace std;
int main(){
    int n;
    input:
         cout<<"Enter any number: ";
         cin>>n;
    if(n<0){
        goto input;
        cout<<"\n This is if condition";
        
    }
    else{
      
        cout<<"\n This is else statement";
    }
    cout<<"\n This is outside of if else";

    output:
          cout<<"\n This is positive number.";
    return 0;
}