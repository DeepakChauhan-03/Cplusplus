//WAP to print sum of digits
#include<iostream>
using namespace std;

int sumofdigits(int);
int sumofdigits(int n){
    if(n>=0 && n<=9){    //base case
        return n;
    }
    else{        //recursive case
        return (n%10)+sumofdigits(n/10);
    }
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Sum of digits are: "<<sumofdigits(n);
    return 0;
}