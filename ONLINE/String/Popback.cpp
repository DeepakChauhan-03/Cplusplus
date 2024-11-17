//WAP to remove any character from the last of a string
#include<iostream>
using namespace std;
int main(){
    string s="Deepak";
    cout<<"Before popback : "<<s<<endl;
    s.pop_back();
    cout<<"After popback : "<<s;
    return 0;
}