//WAP
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the term: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            cout<<"Z ";
        }
        else if(i%5==0){
            cout<<"Y ";
        }
        else if(i%3==0 ){
            cout<<"X ";
            
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}