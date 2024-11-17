#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* ptr = &x;
    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of pointer is: "<<ptr<<endl;

    *ptr= 25;
    cout<<"New value of pointer is: "<<x;
    return 0;
}