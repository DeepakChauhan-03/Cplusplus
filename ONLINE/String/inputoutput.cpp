#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter the string : ";
    getline(cin,a);
    cout<<"String a is: "<<endl;
    cout<<a<<endl;
    cout<<"Length of string is: "<<a.length();
    return 0;
}