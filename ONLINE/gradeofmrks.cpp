//Take input percentage of a student and print the grade according to marks
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the percentage of student: ";
    cin>>n;
    if(n>=81 && n<=100){
        cout<<"Very Good";
    }
    else if(n>=61 && n<=80){
        cout<<"Good";
    }
    else if(n>=41 && n<=60){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}