#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter any string : ";
    getline(cin,s);
    cout<<s<<endl;
    cout<<"Size of string is :"<<s.length();
    return 0;
}