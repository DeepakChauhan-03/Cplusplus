//WAP to take input a string and change value by "a" of all even indices
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    int n = s.length();
    for(int i=0; i<n; i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i];
    }
    return 0;
}