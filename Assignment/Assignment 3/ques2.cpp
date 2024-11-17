//WAP to find sum and average of given array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    int avg = 0;
    for(int i=0; i<n; i++){
        avg = sum/n;
    }
    cout<<"Sum of given elements of array is : "<<sum<<endl;
    cout<<"Average of given elements of array is: "<<avg;
    return 0;
}