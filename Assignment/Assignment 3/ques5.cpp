//WAP to print even and odd elements from a given array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Even elements of array is: ";
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd elements of array is: ";
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}