#include<iostream>
using namespace std;
int power(int);

int power(int n,int m){
    if(m==0){
        return 1;
    }
    else{
        return n*power(n,m-1);
    }
}
int main(){
    int a;
    cout<<"Enter base value: ";
    cin>>a;
    int b;
    cout<<"Enter power: ";
    cin>>b;
    
    cout<<"A to the power B is: "<<power(a,b);
    return 0;
}