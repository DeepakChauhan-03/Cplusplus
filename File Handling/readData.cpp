//How to read data from file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s;
    cout<<"Enter any String : ";
    getline(cin,s);
    ofstream obj("thursday.txt", ios::app);
    //ios :: app==> File open in append Mode(it doesnot overwrite)
    //ios :: in==> File Open in reading Mode
    //ios :: out==> File Open in Writing Mode
     obj<<s;
     cout<<"\nData written success into the file";
    return 0;
}