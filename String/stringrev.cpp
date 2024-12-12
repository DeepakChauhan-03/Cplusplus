#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter any string : ";
    getline(cin,s);
    cout<<"String Before reverse : "<<s<<endl;
    reverse(s.begin(),s.begin()+3);
    cout<<"String after reverse : "<<s;
    return 0;
}