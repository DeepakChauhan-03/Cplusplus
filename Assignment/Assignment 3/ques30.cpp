//WAP to rearrange the array elements negative before positive
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
    cout<<"After arranging the elements : ";
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
        }
    }
}