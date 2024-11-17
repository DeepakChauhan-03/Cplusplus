//WAP to sum of natural numbers
#include<iostream>
using namespace std;
int sum(int);
int sum(int n){
    if(n==1){  //Base Condition
        return 1;
    }
    else{   //Recursive Case
        return n+sum(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Sum: "<<sum(n);
    return 0;
}