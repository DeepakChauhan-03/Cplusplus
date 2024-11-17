//WAP to add numbers
#include<iostream>
using namespace std;
int addition();

int addition(){
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    c=a+b;
    return c;
}
int main(){
    int r=addition();
    cout<<"Addition :"<<r<<endl;
    cout<<"Addition is : "<<addition();
    return 0;
}