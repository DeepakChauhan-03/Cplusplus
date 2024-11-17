//WAP for sum of array
#include<iostream>
using namespace std; 
int main(){
    int sum = 0;
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    sum = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<"Sum of array is: "<<sum;
    return 0;
}