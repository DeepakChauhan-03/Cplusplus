//WAP to check given number is prime or not
#include<iostream>
using namespace std;
void isprime();
void isprime(){
     int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime number ";
    }
    else{
        cout<<"Composite number ";
    }
}
int main(){
    isprime();
    return 0;
}