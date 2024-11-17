//WAP for fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n;
    int t1=0;
    int t2=1;
    int t3 = t1+t2;
    cout<<"Enter the terms: ";
    cin>>n;
    
    cout<<"Fibonacci series are: "<<t1<<" "<<t2<<" ";
    for(int i=3;i<=n;i++){
         t1=t2;
         t2=t3;
         t3=t1+t2;
         cout<<t3<<" ";
    }
    
    return 0;
}