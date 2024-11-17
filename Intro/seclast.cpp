//WAP to print second last digit of the given number

#include<iostream>
using namespace std;
int main(){
    int n,last;
    cout<<"Enter the number n: ";
    cin>>n;
    last = n%100;
    last = last/10;
    // last = last%10;
    cout<<"SECOND LAST DIGIT OF THE NUMBER IS: "<<last;
    return 0;
}