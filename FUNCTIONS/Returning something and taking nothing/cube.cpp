//WAP to print cube of a number
#include<iostream>
using namespace std;
int cube();

int cube(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int c=n*n*n;
    return c;
}
int main(){
    cout<<"Cube is: "<<cube();
    return 0;
}