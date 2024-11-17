//WAP to reverse the int array and string
#include<iostream>
using namespace std;
int main(){
    int a[]={101,102,103,104,105};
    int n=sizeof(a)/4;
    string s[]={"one","two","three","four","five"};
   
    int m=sizeof(s)/sizeof(s[0]);
    

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
     int k=0;
    int l=m-1;
    while(k<l){
        string temp=s[k];
        s[k]=s[l];
        s[l]=temp;
        k++;
        l--;
    }
    cout<<endl;
    cout<<"Reversed string is: ";
    for(int i=0; i<m; i++){
        cout<<s[i]<<" ";
    }
    return 0;
}