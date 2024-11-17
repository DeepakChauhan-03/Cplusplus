//WAP to check the given character is Upper case or Lower case using nested if
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any Character: ";
    cin>>c;
    if(c>='a'){
        if(c<='z'){
            cout<<"Lower Case";
        }
    }
    else if(c>='A'){
        if(c<='Z'){
            cout<<"Upper Case";
        }
    }
    return 0;
}