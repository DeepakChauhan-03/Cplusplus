
//WAP to print even number between 10-20
#include<iostream>
using namespace std;
int main(){
    int i;
    i=10;
    while (i<=20)
    {
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    }
    
    return 0;
}