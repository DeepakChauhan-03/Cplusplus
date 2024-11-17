//WAP to print odd numbers upto 1-100 by using continue statement
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}