//WAP to change the value of odd indexed elements to its second multiple and increment all even indexed value by 10
#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
        }
        else if(i%2!=0){
            arr[i]=arr[i]*2;
        }
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}