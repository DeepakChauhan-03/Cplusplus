//WAP to count positive , negative , zeros in given array
#include<iostream>
using namespace std;
int main(){
    float negative = 0;
    int plus = 0;
    int zero = 0;
    int arr[5] = {20, -10, 15, 0, -85};
  
    for(int i=0; i<5; i++){
        if(arr[i]<0){
            negative++;
        }
        else if(arr[i]>0){
            plus++;
        }
       else if(arr[i]==0){
        zero++;
       }
    }
    cout<<"Positive numbers are: "<<plus<<endl;
    cout<<"Negative numbers are: "<<negative<<endl;
    cout<<"Zero numbers are: "<<zero;
    return 0;
}