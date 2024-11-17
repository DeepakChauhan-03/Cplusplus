//Given  number n is divisible by either 3 or 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"Given number n is divisible by 3 or 5";
    }
    else{
        cout<<"Given number is not divisible by 3 or 5";
    }
    return 0;
}