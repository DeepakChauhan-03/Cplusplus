//WAP for basic calculator by using else if condition
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cin>>a;
    cin>>c;
    cin>>b;
    if(c=='+'){
        cout<<"Sum of " <<a<< " and " <<b<< " is "<<a+b;
    }
    else if(c=='-'){
        cout<<"subtraction of " <<a<< " and " <<b<< "  is "<<a-b;
    }
    else if(c=='*'){
        cout<<"Multiplication of " <<a<< " and " <<b<< " is "<<a*b;
    }
    else if(c=='/'){
        cout<<"Division of " <<a<< " and " <<b<< " is "<<a/b;
    }
    return 0;
}