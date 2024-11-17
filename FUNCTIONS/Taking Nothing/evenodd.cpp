//WAP to check given input is even or odd number
#include<iostream>
using namespace std;
void evenodd();

void evenodd(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n%2==0){
        cout<<"Even number.";
    }
    else if(n%2!=0){
        cout<<"Odd number.";
    }
}
int main(){
    evenodd();
    return 0;
}