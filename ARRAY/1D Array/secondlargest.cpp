//WAP to find second largest and second smallest element of array
#include<iostream>
using namespace std;
int main(){
     int arr[10]={10,1,9,2,8,3,7,4,6,5};
     int size=sizeof(arr)/sizeof(int);

     for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]<arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
     cout<<"Second largest element is: "<<arr[1]<<endl;
     cout<<"Second smallest element is: "<<arr[size-2];
    return 0;
}