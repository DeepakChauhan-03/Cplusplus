//Passing division program
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter marks of math: ";
    cin>>arr[0];
    cout<<"Enter marks of english: ";
    cin>>arr[1];
    cout<<"Enter marks of science: ";
    cin>>arr[2];
    cout<<"Enter marks of art: ";
    cin>>arr[3];
    cout<<"Enter marks of computer: ";
    cin>>arr[4];
    int total = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    float per = (total/500);
    cout<<"Total marks out of 500 = "<<total<<endl;
    cout<<"Percent of marks = "<<per*100<<endl;
    if(total>300){
        cout<<"First Division.";
    }
    else if(total<300 && total>200){
        cout<<"Second Division.";
    }
    else if(total<200 && total>100){
        cout<<"Third division.";
    }
    else{
        cout<<"Fail.";
    }
    return 0;
}