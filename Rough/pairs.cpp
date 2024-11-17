//WAP to find total no. of pairs whose sum is equal to x
#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totalpairs=0;
    int x=12;
    
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]+arr[j]==x){
                totalpairs++;
                
            }
        }
    }
    cout<<"Total pairs are: "<<totalpairs;
    return 0;
}