//WAP to print the revesre of a string
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter any string : ";
    getline(cin,s);
    cout<<"Reverse string is: ";
    for(int i = s.length()-1; i>=0; i--){
        cout<<s[i];
    }
    return 0;
}