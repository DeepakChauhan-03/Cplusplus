#include<iostream>
using namespace std;
class add{
    public:
    int a;
    int b;
    int c;
    int sum(int a, int b){
        int c=a+b;
        return c;
    }
};
int main(){
    add a1;
    int x;
    cout<<"Enter first number: ";
    cin>>x;
    int y;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"Sum of x and y is: "<<a1.sum(x,y);
    return 0;
}