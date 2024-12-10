//Generic template in c++
#include<iostream>
using namespace std;
template<class A>
A compare(A n1, A n2){
    return n1>n2?n1:n2;
}
int main(){
    int i1,i2;
    i1=10;
    i2=20;
    cout<<"\nLargest Number in integer : "<<compare(i1,i2);

    float f1,f2;
    f1=1.1;
    f2=2.3;
    cout<<"\nLargest Number in Float : "<<compare(f1,f2);

    string s1,s2;
    s1="HELLO";
    s2="hello";
    cout<<"\nLargest Number in String : "<<compare(s1,s2);

    char c1,c2;
    c1='D';
    c2='d';
    cout<<"\nLargest Number in character : "<<compare(c1,c2);

    return 0;
}