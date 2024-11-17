//take 10 numbers input and print the sum of all odd numbers 
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int odd = 0;
    for(int i = 0;i<=10;i++){
        cout<<"Enter the value of array ";
        cin>>i;
    }
    for(int i=0; i<=10;i++){
        if(i%2!=0){
            odd = odd+i;
        }
        
    }
    cout<<"The sum of odd numbers is:"<<odd;
    return 0;
}