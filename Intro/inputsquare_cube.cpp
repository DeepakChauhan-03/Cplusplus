//Take input from user and print square and cube of it
#include<iostream>
using namespace std;
int main(){
    int n,square,cube;
    cout<<"Enter the value of n: ";
    cin>>n;
    square = n*n;
    cube = n*n*n;
    cout<<"Square is: "<<square<<endl;
    cout<<"Cube is: "<<cube;
    return 0;
}