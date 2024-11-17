//WAP to check the user is eligible for voting or not
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age>=18){
        cout<<"Eligible for voting";
    }
    else{
        cout<<"Not Eligible for voting";
    }
    return 0;
}