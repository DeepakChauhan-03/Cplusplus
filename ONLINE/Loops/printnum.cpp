//WAP to print numbers upto 1 to 100 by using loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i;
        cout<<endl;
    }
    return 0;
}