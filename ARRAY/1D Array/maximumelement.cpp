//WAP to print maximum element of the array
#include<iostream>
using namespace std;
int main(){
    int arr[10]={100,345,56,347,499,1,0,3,2};
    int max = arr[0];
    int min = arr[0];
    
    for(int i=1; i<10; i++){
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