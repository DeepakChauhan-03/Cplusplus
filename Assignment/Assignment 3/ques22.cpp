//WAP to print even numbers present at even index numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Even number at even index is : ";
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(arr[i]%2==0){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}