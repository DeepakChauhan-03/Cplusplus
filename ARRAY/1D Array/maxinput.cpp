//WAP to print maximum element of the array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n;i++){
        cout<<"Enter element of array "<<i+1<<" :";
        cin>>arr[i];
    }
      
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum Element is: "<<max<<endl;
    cout<<"Minimum Element is: "<<min;
    return 0;
}