//WAP to print the sum of n odd natural numbers
#include<iostream>
using namespace std;
int main(){
    int n,count = 0, oddnumber=1;
    int sum=0;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"The Odd numbers are: "<<endl;
    while(count<n){
        cout<<oddnumber<<endl;
        sum = sum+oddnumber;
        oddnumber = oddnumber+2;
        count++;

    }
    
    cout<<"Sum of odd natural numbers upto "<<n<<" terms are: "<<sum;
   
    return 0;
}