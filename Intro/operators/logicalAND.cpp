//Logical and operator &&
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    a = 10;
    b = 20;
    c = 30;
    bool d = a<b && b<c;
    cout<<boolalpha<<d;
    return 0;
}