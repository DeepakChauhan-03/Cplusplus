//WAP to add any character at the end of string
#include<iostream>
using namespace std;
int main(){
    string s="Deepa";
    cout<<"Before pushback : "<<s<<endl;
    s.push_back('k');
    cout<<"After pushback : "<<s;
    return 0;
}