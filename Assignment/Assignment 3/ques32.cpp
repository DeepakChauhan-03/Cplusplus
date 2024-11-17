//WAP to find first repeating elements of array
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,5,3,4,3,5,6};
    int n= sizeof(arr)/4;
    cout<<"First repeating element of array is: ";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                return 0;
            }
        }
    }
    return 0;
}