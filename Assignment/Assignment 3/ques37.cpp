//WAP to test if array contains a specific value
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
    cout<<"Enter the specific element: ";
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"Specific value is found: "<<arr[i];
        }
    }
    return 0;
}