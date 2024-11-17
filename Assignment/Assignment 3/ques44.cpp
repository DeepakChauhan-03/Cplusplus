//WAP to count total positive negative and zeros form an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            negative++;
        }
        else if(arr[i]>0){
            positive++;
        }
        else if(arr[i]==0){
            zero++;
        }
    }
    cout<<"Positive numbers are: "<<positive<<endl;
    cout<<"Negative numbers are: "<<negative<<endl;
    cout<<"Zeros are: "<<zero;
    return 0;
}