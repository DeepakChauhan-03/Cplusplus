//WAP to print even number from 10-20 by using do while loop
#include<iostream>
using namespace std;
int main(){
    int a;
    a=10;
    do{
        if(a%2==0){
            cout<<a<<" is a Even number"<<endl;
        }
        a++;
    }while(a<=20);
    return 0;
}