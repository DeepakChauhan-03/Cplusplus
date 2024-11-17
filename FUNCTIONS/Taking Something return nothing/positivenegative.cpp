//Taking something and returning nothing
#include<iostream>
using namespace std;
void isPositive();

void isPositive(int n){
    if(n>0){
        cout<<"Positive Number.";
    }
    else if(n<0){
        cout<<"Negative Number.";
    }
}
int main(){
    isPositive(-5);
    int x;
    cout<<"\nEnter any number: ";
    cin>>x;
    isPositive(x);
    return 0;
}