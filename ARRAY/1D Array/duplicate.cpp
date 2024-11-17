//WAP to 
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,1,3,4,2,4,5,5,6,8};
    for(int i=0;i<10;i++){
        for(int j=0; j<10;j++){
            if(arr[i]=arr[j]){
                cout<<arr[i]<<arr[j]<<endl;
            }
            }
    }
    return 0;
}