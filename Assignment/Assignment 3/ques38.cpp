//WAP to find index of an array element
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element whose index is required: ";
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"Specific value index is found at: "<<i;
        }
    }
    return 0;
}