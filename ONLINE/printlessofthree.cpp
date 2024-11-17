/*Take 3 numbers from the user and print less of them 
 condition --All three numbers are distinct*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter First number: ";
    cin>>a;
    cout<<"Enter Second number: ";
    cin>>b;
    cout<<"Enter Third number: ";
    cin>>c;
    if(a<b && a<c){
        cout<<"A is less";
    }
    else if(b<a && b<c){
        cout<<"B is less";
    }
    else{
        cout<<"C is less";
    }
    return 0;
}