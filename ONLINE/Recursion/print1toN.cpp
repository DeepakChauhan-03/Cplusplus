//WAP to print numbers from 1 to N terms
#include<iostream>
using namespace std;
void print(int);
void print(int x, int n){
    if(x>n){
        return;
    }
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    print(1,n);
    return 0;
}