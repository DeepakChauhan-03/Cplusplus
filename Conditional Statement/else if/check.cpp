//WAP to check given character is upper case,lowercase,digits,special character
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any Character: ";
    cin>>c;
    if(c>='a' && c<='z'){
        cout<<"Lowercase";
    }
    else if(c>='A' && c<='Z'){
        cout<<"Uppercase";
    }
    else if(c>='0' && c<='9'){
        cout<<"Digits";
    }
    else{
        cout<<"Special Character";
    }
    return 0;
}