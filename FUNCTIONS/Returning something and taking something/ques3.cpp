//WAP to check prime number
#include<iostream>
using namespace std;
int isprime(int);

int isprime(int x){
    int count=0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        return  1;
    }
    else{
        return 0;
    }
}
int main(){
    int x;
    cout<<"Enter any number: ";
    cin>>x;
    int a=isprime(x);
    if(a==1){
        cout<<"Prime number";
    }
    else {
        cout<<"Composite number";
    }
    return 0;
}