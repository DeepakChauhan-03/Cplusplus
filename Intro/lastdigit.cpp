//print last digit of any number
#include<iostream>
using namespace std;
int main(){
    int n,last;
    cout<<"Enter the number n: ";
    cin>>n;
    last = n%10;
    cout<<"LAST DIGIT OF THE NUMBER IS: "<<last;
    return 0;
}