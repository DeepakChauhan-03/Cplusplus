//Short circuit problem in logical AND
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    a = 10;
    b = 20;
    c = 30;
    int d = a<b && ++c;
    cout<<d<<endl;
    cout<<c;
    return 0;
}