//Print student information
#include<iostream>
using namespace std;
int main(){
    int rn;
    cout<<"Enter roll no. of student: ";
    cin>>rn;
    string en;
    cout<<"Enter Enrollment number: ";
    cin>>en;
    cin.ignore();//Using after integer 
    string name;
    cout<<"Enter Name of Student: ";
    getline(cin,name);// tAKING IN CASE OF STRING WHEN STRING VALUE HAVE SPACE B/W THE VALUES
    char sec;
    cout<<"Enter section: ";
    cin>>sec;

    cout<<"\nRoll no of student is: "<<rn<<endl;
     cout<<"Enrollment  no of student is: "<<en<<endl;
      cout<<"Name of student is: "<<name<<endl;
       cout<<"Section of student is: "<<sec<<endl;
    return 0;
}