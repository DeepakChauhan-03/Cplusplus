//Swapping number by using *,/ operator
#include<iostream>
using namespace std;
int main(){
     int a = 6;
     int b = 2;
     cout<<"Before Swapping"<<endl;
     cout<<"\t A = "<<a<<"\t B = "<<b<<endl;
     //Now 
     a = a*b;
     b = a/b;
     a = a/b;
     cout<<"After Swapping"<<endl;
     cout<<"\t A = "<<a<<"\t B = "<<b<<endl;
    return 0;
}