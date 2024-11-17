//Increment operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    a = 10;
    b = 20;
    cout<<"Before Increment"<<endl;
    cout<<"Value of A is: "<<a<<"\tValue of B is: "<<b<<endl;
    a++;
    ++b;
    cout<<"After Increment "<<endl;
    cout<<"Value of A is: "<<a<<"\tValue of B is: "<<b;
    return 0;
}