//WAP to check given number is prime or composite
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int prime = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            prime =prime+1;
        }
    }
    if(prime/2==1){
        cout<<"Prime Number";
    }
    else{
        cout<<"Composite Number";
    }
    return 0;
}