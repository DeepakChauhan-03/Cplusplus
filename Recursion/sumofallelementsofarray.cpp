//WAP for sum of all elements in the array
#include<iostream>
using namespace std;

int sum(int arr[],int size);
int sum(int arr[], int size){
    if(size<=0){    //Base condition
        return 0;
    }
    else{   //Recursive condition
        return arr[size-1]+sum(arr,size-1);
    }
}
int main(){
    int x[]={1,2,3,4};
    cout<<"Sum of digits of array: "<<sum(x,4);
    return 0;
}