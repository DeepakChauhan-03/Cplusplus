//WAP to print reverse of a given number without using array
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter a number: ";
     cin>>n;
     int reverse = 0;
     while(n!=0){
        int lastdigit= n%10;
        reverse*=10;
        reverse+=lastdigit;
        n=n/10;
     }
     cout<<reverse;
    return 0;
}