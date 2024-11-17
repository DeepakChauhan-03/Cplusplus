//WAP to find length of array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of array is : "<<n;
    return 0;
}