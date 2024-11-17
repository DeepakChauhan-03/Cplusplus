//WAP to sort the array in decending order
#include<iostream>
using namespace std;
int main(){
    int arr[]={40,200,80};
    cout<<"Data before sorting"<<endl;
    for(int i=0; i<3; i++){
        cout<<"\t"<<arr[i];
    }
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(arr[i]<arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\nData after sorting"<<endl;
    for(int i=0; i<3; i++){
        cout<<"\t"<<arr[i];
    }
    return 0;
}