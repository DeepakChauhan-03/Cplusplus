//WAP for quadratic equation
#include<iostream>
using namespace std;
int main(){
    int a,b,c,x1,x2,D,X;
    x1=x1*x1;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of x1: "<<endl;
    cin>>x1;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"Enter the value of x2: "<<endl;
    cin>>x2;
    cout<<"Enter the value of c: "<<endl;
    cin>>c;
    D=(b*b)-4*a*c;
    
    if(D<0){
        cout<<"No solution";
    }
    else if(D==0){
        cout<<"one unique solution";
    }
    else if(D>0){
        cout<<" Two real solutions";
    }

    return 0;
}