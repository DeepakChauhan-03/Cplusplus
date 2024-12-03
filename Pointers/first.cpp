//Example of pointer
#include<iostream>
using namespace std;
int main(){
    int x = 1;  //Normal variable
    int y = 2;
    int *p1;    //Pointer variable
    int *p2;
    p1 = &x;
    p2 = &y;
    int c = *p1+*p2;   //Access value using pointer
    cout<<"Addition : "<<c;
    return 0;
}