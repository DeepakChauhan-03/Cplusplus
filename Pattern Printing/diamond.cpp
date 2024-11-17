//WAP to print diamond structure
#include<iostream>
using namespace std;
int main(){
    for(int r=1; r<=5; r++){
        for(int c=5; c>r; c--){
            cout<<" ";
        }
        for(int c=1; c<=2*r-1; c++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int r=5; r>=1; r--){
        for(int c=5; c>r; c--){
            cout<<" ";
        }
        for(int c=1; c<=2*r-1; c++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}