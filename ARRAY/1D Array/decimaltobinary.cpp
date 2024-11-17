//WAP to convert decimal to binary 
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[10];
    cout<<"Enter any number: ";
    cin>>n;
    int i=0;
    while(n!=0){
        int r= n%2;
        arr[i]=r;
        i++;
        n= n/2;
    }
    cout<<"Binary of the given decimal number is: ";
    for( i=i-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}