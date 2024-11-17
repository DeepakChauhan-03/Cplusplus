//Check Perfect number 
#include<iostream>
using namespace std;
void perfect();
void perfect(){
    int n;
    int sum =0;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(n==sum){
        cout<<"Perfect number.";
    }
    else{
        cout<<"Not a perfect number.";
    }
}
int main(){
    perfect();
    return 0;
}