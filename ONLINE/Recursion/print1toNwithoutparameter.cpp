//WAP to print 1 to N without any second parameter

#include<iostream>
using namespace std;
void number(int);
void number(int n){
    if(n==0){
        return;
    }
    number(n-1);
    cout<<n<<endl;
    
}
int main(){
    int x;
    cout<<"Enter the term: ";
    cin>>x;
    number(x);
    return 0;
}