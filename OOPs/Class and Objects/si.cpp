//WAP to calculate SI
#include<iostream>
using namespace std;
class intrest{
    public:
    float p;
    float r;
    float t;
    void acceptdata(){
        cout<<"Enter Amount : ";
        cin>>p;
        cout<<"Enter Rate of Intrest :";
        cin>>r;
        cout<<"Enter Time: ";
        cin>>t;
    }
    void showdata(){
        cout<<"Amount :"<<p<<endl;
        cout<<"Rate of Intrest: "<<r<<endl;
        cout<<"Time : "<<t<<endl;
    }
    float SI(){
        return (p*r*t)/100;
    }
    float CI(){
        return p+SI();
    }
};
int main(){
    intrest i;
    i.acceptdata();
    i.showdata();
    cout<<"Si : "<<i.SI()<<endl;
    cout<<"CI :"<<i.CI();
    return 0;
}