//WAP to find product of maximum subarray
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    // int largest=arr[0];
    // int smallest = arr[0];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int smallest = arr[0];
    for(int i=1; i<n; i++){
       if(arr[i]>largest){
        largest=arr[i];
       }
       if(arr[i]<smallest){
        smallest=arr[i];
       }
     }
    
    cout<<"Largest number in array is : "<<largest<<endl;
    cout<<"Smallest number in array is : "<<smallest;
    return 0;
}