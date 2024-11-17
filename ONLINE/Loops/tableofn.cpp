//WAP to print the table of any number given by the user
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i = n; i<=n*10; i=i+n ){
       cout<<i<<endl;
    }
    return 0;
}