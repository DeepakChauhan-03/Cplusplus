//WAP to to store value in array by using loop
#include<iostream>
using namespace std;
int main(){
    int nums[5];
    int sum=0;

    for(int i=0; i<5; i++){
        cout<<"Enter element of index "<<i<<" : ";
        cin>>nums[i];
    }
    for(int i=0; i<5; i++){
        if(nums[i]%2==0){
            sum=sum+nums[i];
        }
    }
    cout<<"Sum of all even elements are: "<<sum;
    return 0;
}