//WAP to reverse a array without using second variable
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(a)/4;
    cout<<"Array before reverse: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    cout<<"Array after reverse: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}