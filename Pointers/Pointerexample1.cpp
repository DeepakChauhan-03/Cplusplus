#include<iostream>
using namespace std;
int main(){
    //Declare pointer variable
    int *p1;
    int *p2;
    int x;
    int y;
    p1 = &x;
    p2 = &y;
    *p1 = 10;
    *p2 = 20;
    cout<<"Value of p1 : "<<*p1<<endl;
    cout<<"Value of p2 : "<<*p2;
    return 0;
}