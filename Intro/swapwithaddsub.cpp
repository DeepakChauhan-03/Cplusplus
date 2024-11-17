//Swap 2 numbers without using third variable by using +,- operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    a = 16;
    b = 11;
    cout<<"Before Swapping"<<endl;
    cout<<"\t A = "<<a<<"\t B = "<<b<<endl;
    //Now 
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After Swapping"<<endl;
    cout<<"\t A = "<<a<<"\t B = "<<b<<endl;
    return 0;
}