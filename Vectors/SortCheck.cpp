//WAP to check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool sortflag = true;
    for(int i=1; i<n; i++){
        if(arr[i]<=arr[i-1]){
            sortflag = false;
        }
    }

    if(sortflag==1){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}