//WAP to add two numbers
#include<iostream>
using namespace std;
//Step 1- function declaration
void add(int,int);
//step 2- function definition
void add(int a,int b){
    int c=a+b;
    cout<<"Addition is: "<<c<<endl;
}
int main(){
    add(4,5);
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    add(x,y);
    return 0;
}