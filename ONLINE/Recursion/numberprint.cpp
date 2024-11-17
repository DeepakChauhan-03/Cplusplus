//WAP to print n number
#include<iostream>
using namespace std;
void number(int);
void number(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    number(n-1);
}
int main(){
    int x;
    cout<<"Enter the term: ";
    cin>>x;
    number(x);
    return 0;
}